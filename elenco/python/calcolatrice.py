import re


def somma(a, b):
    return a + b


def sottrazione(a, b):
    return a - b


def moltiplicazione(a, b):
    return a * b


def divisione(a, b):
    if b != 0:
        return a / b
    else:
        return "Errore: divisione per zero"


def calcola_espressione(espressione):
    # Trova e risolve le espressioni tra parentesi
    while '(' in espressione:
        espressione = re.sub(r'\(([^()]+)\)', lambda x: str(calcola_espressione(x.group(1))), espressione)

    # Trova e risolve le moltiplicazioni e divisioni
    while re.search(r'\d+\.?\d*\s*[\*/]\s*\d+\.?\d*', espressione):
        espressione = re.sub(r'(\d+\.?\d*)\s*([\*/])\s*(\d+\.?\d*)',
                             lambda x: str(moltiplicazione(float(x.group(1)), float(x.group(3))))
                             if x.group(2) == '*' else
                             str(divisione(float(x.group(1)), float(x.group(3)))),
                             espressione, 1)

    # Trova e risolve le somme e sottrazioni
    while re.search(r'\d+\.?\d*\s*[\+-]\s*\d+\.?\d*', espressione):
        espressione = re.sub(r'(\d+\.?\d*)\s*([\+-])\s*(\d+\.?\d*)',
                             lambda x: str(somma(float(x.group(1)), float(x.group(3))))
                             if x.group(2) == '+' else
                             str(sottrazione(float(x.group(1)), float(x.group(3)))),
                             espressione, 1)

    return float(espressione)


def main():
    print("Benvenuto nella calcolatrice!")
    while True:
        espressione = input("Inserisci un'operazione (o 'q' per uscire): ")
        if espressione == 'q':
            break

        risultato = calcola_espressione(espressione)
        print("Risultato:", risultato)

    print("Grazie per aver utilizzato la calcolatrice!")


if __name__ == '__main__':
    main()

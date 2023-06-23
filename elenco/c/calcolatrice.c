#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1, numero2;
    char operatore;
    float risultato;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci l'operatore (+, -, *, /): ");
    scanf(" %c", &operatore);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    switch (operatore) {
        case '+':
            risultato = numero1 + numero2;
            printf("Risultato: %.2f\n", risultato);
            break;
        case '-':
            risultato = numero1 - numero2;
            printf("Risultato: %.2f\n", risultato);
            break;
        case '*':
            risultato = numero1 * numero2;
            printf("Risultato: %.2f\n", risultato);
            break;
        case '/':
            if (numero2 != 0) {
                risultato = (float)numero1 / numero2;
                printf("Risultato: %.2f\n", risultato);
            } else {
                printf("Errore: Divisione per zero\n");
            }
            break;
        default:
            printf("Errore: Operatore non valido\n");
            break;
    }
	
	system("pause");
    return 0;
}

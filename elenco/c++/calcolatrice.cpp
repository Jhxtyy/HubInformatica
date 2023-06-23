#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

using namespace std;


int main(void){
    
    char risposta, premiuntasto, risposta1, risposta2;
    string username;

    float n1, n2, n3, n4, tot, ans;
    
    system("color a");
    
    cout.width(60);
    cout<<endl;
    cout<<"Username: ";

    cin>>username;

    system("CLS");

	system("color 6");

    cout.width(60);
    cout<<endl;
    cout<<"Benvenuto/a, "<<username<<"!\n";
    
    Sleep(800);
    cout.width(57);
    cout<<endl;
    cout<<".";

    Sleep(800);
    cout<<".";

    Sleep(800);
    cout<<".";

    Sleep(800);

    label0:

    system("cls");
    system("color E");
    cout<<endl;
    cout.width(50);
    cout<<""<<endl;
    cout.width(20);
    cout<<""<<username<<" ,specifica l'operazione che desideri eseguire seguendo le indicazioni sottostanti: \n";
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    cout<<endl;
    cout.width(87);
    cout<<"Addizione e Sottrazione [premi 'a' per procedere]";

    cout<<endl;
    cout<<endl;

    cout<<endl;
    cout.width(83);
    cout<<"Moltiplicazione [premi 'm' per procedere]";

    cout<<endl;
    cout<<endl;

    cout<<endl;
    cout.width(105);
    cout<<"Elevazione a potenza e radice quadrata o cubica [premi 'p' o 's' o 'c' per procedere]";

    cout<<endl;
    cout<<endl;

    cout<<endl;
    cout.width(80);
    cout<<"Divisione [premi 'd' per procedere]";

    risposta = getch();

    switch(risposta){

        case('a'):

            label1:    
            
            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin>>n1;
            
            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin.clear();
            cin>>n2;
            
            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin.clear();
            cin>>n3;

            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin.clear();
            cin>>n4;

            system("cls");

            tot = n1 + n2 + n3 + n4;

            cout<<endl;
            cout<<"\n\n ~ "<<username<<" : ("<<n1<<") + ("<<n2<<") + ("<<n3<<") + ("<<n4<<") = "<<tot;
            
            cout<<endl;
            cout<<endl;
            cout<<endl<<endl;
            
            cout.width(100);
            cout<<"Premi ['c'] per continuare la somma, premi ['s'] per interrompere il calcolo.";

            risposta1 = getch();

            if(risposta1 == 'c'){
                
                labelc:
                
                ans = tot;
                
                system("cls");

                cout<<"\n\n ~ "<<username<<" : ";
                cin>>n1;

                system("cls");
                cout<<"\n\n ~ "<<username<<" : ";
                cin.clear();
                cin>>n2;
            
                system("cls");
                cout<<"\n\n ~ "<<username<<" : ";
                cin.clear();
                cin>>n3;

                system("cls");
                cout<<"\n\n ~ "<<username<<" : ";
                cin.clear();
                cin>>n4;

                system("cls");

                tot = ans + n1 + n2 + n3 + n4;

                cout<<endl;

                cout<<"\n\n ~ "<<username<<" : ("<<ans<<") + ("<<n1<<") + ("<<n2<<") + ("<<n3<<") + ("<<n4<<") = "<<tot;
                
                cout<<endl;
                cout<<endl;
                cout<<endl<<endl;
                
                labelerrore:
                
                cout.width(25);
                cout<<username<<", resetta il calcolo ['r'], continua ['c'] o torna alla schermata precente ['u'].";
                
                risposta2 = getch();

                if(risposta2 == 'r'){
                    goto label1;
                }

                else if(risposta2 == 'c'){
                    goto labelc;
                }

                else if(risposta2 == 'u'){
                    goto label0;
                }

                else{
                    goto labelerrore;
                }
            
            }
    
            else if(risposta1 == 's'){
                goto label0;
            }
        
        break;

        case('m'):
        
            label2:    
            
            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin>>n1;
        
            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin.clear();
            cin>>n2;
        
            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin.clear();
            cin>>n3;

            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin.clear();
            cin>>n4;

            tot = n1 * n2 * n3 * n4;

            system("cls");

            cout<<endl;
            cout<<"\n\n ~ "<<username<<" : ("<<n1<<") * ("<<n2<<") * ("<<n3<<") * ("<<n4<<") = "<<tot;
            
            cout<<endl;
            cout<<endl;
            cout<<endl<<endl;
            
            cout.width(100);
            cout<<"Premi ['c'] per continuare il prodotto, premi ['s'] per interrompere il calcolo.";

            risposta1 = getch();

            if(risposta1 == 'c'){
            
                labelc1:
            
                ans = tot;
            
                system("cls");

                cout<<"\n\n ~ "<<username<<" : ";
                cin>>n1;

                system("cls");
                cout<<"\n\n ~ "<<username<<" : ";
                cin.clear();
                cin>>n2;
        
                system("cls");
                cout<<"\n\n ~ "<<username<<" : ";
                cin.clear();
                cin>>n3;

                system("cls");
                cout<<"\n\n ~ "<<username<<" : ";
                cin.clear();
                cin>>n4;

                system("cls");

                tot = ans * n1 * n2 * n3 * n4;

                cout<<endl;

                cout<<"\n\n ~ "<<username<<" : ("<<ans<<") * ("<<n1<<") * ("<<n2<<") * ("<<n3<<") * ("<<n4<<") = "<<tot;
            
                cout<<endl;
                cout<<endl;
                cout<<endl<<endl;
            
                labelerrore1:
                
                cout.width(25);
                cout<<username<<", resetta il calcolo ['r'], continua ['c'] o torna alla schermata precente ['u'].";
            
                risposta2 = getch();

                if(risposta2 == 'r'){
                    goto label2;
                }

                else if(risposta2 == 'c'){
                    goto labelc1;
                }

                else if(risposta2 == 'u'){
                    goto label0;
                }

                else{
                    goto labelerrore1;
                }
        
            }

            else if(risposta1 == 's'){
                goto label0;
            }
    
        break;

        case('p'):
            
            label3:
            
            system("cls");

            cout<<"\n\n ~ "<<username<<" : ";
            cin>>n1;

            system("cls");

            cout<<"\n\n ~ "<<username<<" : "<<n1<<"^";
            cin>>n2;

            tot = pow(n1, n2);

            system("cls");

            cout<<endl;

            cout<<"\n\n ~ "<<username<<" : "<<n1<<"^"<<n2<<" = "<<tot;
            
            
            cout<<endl;
            cout<<endl;
            cout<<endl<<endl;
            
            cout.width(100);
            cout<<"Premi ['c'] per continuare la somma, premi ['s'] per interrompere il calcolo.";

            risposta1 = getch();

            if(risposta1 == 'c'){
                
                labelc2:
                
                ans = tot; 

                n1 = ans;
                
                system("cls");

                cout<<"\n\n ~ "<<username<<" : "<<n1<<"^";
                cin>>n2;

                system("cls");

                tot = pow(n1, n2);
                cout<<endl;

                cout<<"\n\n ~ "<<username<<" : "<<n1<<"^"<<n2<<" = "<<tot;
                
                cout<<endl;
                cout<<endl;
                cout<<endl<<endl;
                
                labelerrore2:
                
                cout.width(25);
                cout<<username<<", resetta il calcolo ['r'], continua ['c'] o torna alla schermata precente ['u'].";
                
                risposta2 = getch();

                if(risposta2 == 'r'){
                    goto label3;
                }

                else if(risposta2 == 'c'){
                    goto labelc2;
                }

                else if(risposta2 == 'u'){
                    goto label0;
                }

                else{
                    goto labelerrore2;
                }
            
            }
    
            else if(risposta1 == 's'){
                goto label0;
            }

        break;

        
        case('s'):
            
            label4:
        
            system("cls");

            cout<<"\n\n ~ "<<username<<" : ";
            cin>>n1;

            system("cls");

            tot = sqrt(n1);

            system("cls");

            cout<<endl;

            cout<<"\n\n ~ "<<username<<": Radice Quadrata di "<<n1<<" = "<<tot;
            
            
            cout<<endl;
            cout<<endl;
            cout<<endl<<endl;
            
            cout.width(100);
            cout<<"Premi ['c'] per continuare la somma, premi ['s'] per interrompere il calcolo.";

            risposta1 = getch();

            if(risposta1 == 'c'){
                
                labelc3:
                
                ans = tot; 

                n1 = ans;
                
                system("cls");

                tot = sqrt(n1);
                
                cout<<endl;
                
                cout<<"\n\n ~ "<<username<<": Radice Quadrata di "<<n1<<" = "<<tot;
                
                cout<<endl;
                cout<<endl;
                cout<<endl<<endl;
                
                labelerrore3:
                
                cout.width(25);
                cout<<username<<", resetta il calcolo ['r'], continua ['c'] o torna alla schermata precente ['u'].";
                
                risposta2 = getch();

                if(risposta2 == 'r'){
                    goto label4;
                }

                else if(risposta2 == 'c'){
                    goto labelc3;
                }

                else if(risposta2 == 'u'){
                    goto label0;
                }

                else{
                    goto labelerrore3;
                }
            
            }
    
            else if(risposta1 == 's'){
                goto label0;
            }


        break;

        case('c'):
            
            label5:
    
            system("cls");

            cout<<"\n\n ~ "<<username<<" : ";
            cin>>n1;

            system("cls");

            tot = pow(n1, 1.0/3);

            system("cls");

            cout<<endl;

            cout<<"\n\n ~ "<<username<<": Radice Cubica di "<<n1<<" = "<<tot;
        
        
            cout<<endl;
            cout<<endl;
            cout<<endl<<endl;
        
            cout.width(100);
            cout<<"Premi ['c'] per continuare la somma, premi ['s'] per interrompere il calcolo.";

            risposta1 = getch();

            if(risposta1 == 'c'){
            
                labelc4:
            
                ans = tot; 

                n1 = ans;
            
                system("cls");

                tot = pow(n1, 1.0/3);
            
                cout<<endl;
            
                cout<<"\n\n ~ "<<username<<": Radice Cubica di "<<n1<<" = "<<tot;
            
                cout<<endl;
                cout<<endl;
                cout<<endl<<endl;
            
                labelerrore4:
            
                cout.width(25);
                cout<<username<<", resetta il calcolo ['r'], continua ['c'] o torna alla schermata precente ['u'].";
            
                risposta2 = getch();

                if(risposta2 == 'r'){
                    goto label5;
                }

                else if(risposta2 == 'c'){
                    goto labelc4;
                }

                else if(risposta2 == 'u'){
                    goto label0;
                }

                else{
                    goto labelerrore4;
                }
    
            }

            else if(risposta1 == 's'){
                goto label0;
            }

        break;

        
        case('d'):
        
            label6:    
            
            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin>>n1;
        
            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin.clear();
            cin>>n2;
        
            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin.clear();
            cin>>n3;

            system("cls");
            cout<<"\n\n ~ "<<username<<" : ";
            cin.clear();
            cin>>n4;

            tot = n1 / n2 / n3 / n4;

            system("cls");

            cout<<endl;
            cout<<"\n\n ~ "<<username<<" : ("<<n1<<") / ("<<n2<<") / ("<<n3<<") / ("<<n4<<") = "<<tot;
            
            cout<<endl;
            cout<<endl;
            cout<<endl<<endl;
            
            cout.width(100);
            cout<<"Premi ['c'] per continuare il prodotto, premi ['s'] per interrompere il calcolo.";

            risposta1 = getch();

            if(risposta1 == 'c'){
            
                labelc5:
            
                ans = tot;
            
                system("cls");

                cout<<"\n\n ~ "<<username<<" : ";
                cin>>n1;

                system("cls");
                cout<<"\n\n ~ "<<username<<" : ";
                cin.clear();
                cin>>n2;
        
                system("cls");
                cout<<"\n\n ~ "<<username<<" : ";
                cin.clear();
                cin>>n3;

                system("cls");
                cout<<"\n\n ~ "<<username<<" : ";
                cin.clear();
                cin>>n4;

                system("cls");

                tot = ans / n1 / n2 / n3 / n4;

                cout<<endl;

                cout<<"\n\n ~ "<<username<<" : ("<<ans<<") / ("<<n1<<") / ("<<n2<<") / ("<<n3<<") / ("<<n4<<") = "<<tot;
            
                cout<<endl;
                cout<<endl;
                cout<<endl<<endl;
            
                labelerrore5:
                
                cout.width(25);
                cout<<username<<", resetta il calcolo ['r'], continua ['c'] o torna alla schermata precente ['u'].";
            
                risposta2 = getch();

                if(risposta2 == 'r'){
                    goto label6;
                }

                else if(risposta2 == 'c'){
                    goto labelc5;
                }

                else if(risposta2 == 'u'){
                    goto label0;
                }

                else{
                    goto labelerrore5;
                }
        
            }

            else if(risposta1 == 's'){
                goto label0;
            }
    
        break;


    }

}
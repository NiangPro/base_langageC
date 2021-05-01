#include "fonction.h"

int main()
{
    system("color 5b");
    char choix;
    int nbre;
    menu:
    printf("\t\tMENU\n");
    printf("\t1- Paire/Impaire\n");
    printf("\t2- Positif/Negatif\n");
    printf("\t3- Parfait ou pas\n");
    printf("\t4- Premier ou pas\n");
    printf("\t5- Quitter\n");
    printf("\t Faites Votre Choix: ");

    do{
        scanf("%c", &choix);
            fflush(stdin);
        if(choix != '1' && choix != '2' && choix != '3' && choix != '4' && choix != '5')
            printf("\n\tSvp, Veuillez faire un bon choix :");
    }while(choix != '1' && choix != '2' && choix != '3' && choix != '4' && choix != '5');

    if(choix != '5'){
        printf("Entrer le nombre: ");
        scanf("%d", &nbre);
    }

    switch(choix){
        case '1':
            paire(nbre);
            system("pause");
            system("cls");
            goto menu;
        case '2':
            signe(nbre);
            system("pause");
            system("cls");
            goto menu;
        case '3':
            parfait(nbre);
            system("pause");
            system("cls");
            goto menu;
        case '4':
            premier(nbre);
            system("pause");
            system("cls");
            goto menu;
        case '5':
            puts("AU REVOIR :)");
            exit(0);
    }
    return 0;
}

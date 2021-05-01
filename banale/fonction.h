#include <stdio.h>
#include <stdlib.h>

void paire(int nbre)
{
    if(nbre%2 == 0)
        printf("%d est un nombre pair \n", nbre);
    else
       printf("%d est un nombre impair \n", nbre);
}

void signe(int nbre)
{
    if(nbre < 0)
        printf("%d est un nombre negatif \n", nbre);
    else if(nbre > 0)
        printf("%d est un nombre positif \n", nbre);
    else
       printf("%d est egal a 0 \n", nbre);
}

void parfait(int nbre)
{
    int som=0,i, half=nbre/2;

    if(nbre >= 6){
        for(i=1; i<=half; i++){
            if(nbre % i == 0){
                som = som + i;
            }
        }
    }

    if(nbre == som)
        printf("%d est un nombre parfait \n", nbre);
    else
        printf("%d n'est pas parfait \n", nbre);
}

void premier(int nbre)
{
    int trouve=0,i;

    if(nbre >= 6){
        for(i=2; i<nbre; i++){
            if(nbre % i == 0){
                trouve = 1;
                break;
            }
        }
    }

    if(trouve == 0)
        printf("%d est un nombre premier \n", nbre);
    else
        printf("%d n'est pas nombre premier \n", nbre);
}

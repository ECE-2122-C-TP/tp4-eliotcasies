//
// Created by CASIES Eliot  on 29/09/2021.
//
#include <stdio.h>
#include "exercices.h"
#include "fonctions.h"

void exercice1(){
    int entier1=0;
    int entier2=0;
    printf("Veuillez saisir deux entiers :");
    scanf("%d",&entier1);
    scanf("%d",&entier2);
    printf("%d \n",getMax(entier1,entier2));
}


void exercice2(){
    saisirEntier();
}


void exercice3(){
    printf("L'aire du rectangle est %f \n",calculAire(saisirEntier(), saisirEntier()));
    printf("Le périmètre du rectangle est %f \n",calculPerimetre(saisirEntier(), saisirEntier()));
}


void exercice4(){
    int a=saisirEntier();
    if (multiples(a,3)==1 && a>=10){
        printf("Il s'agit d'un multiple de 3 qui est supérieur à 10.");
    }
    else {printf("Il ne s'agit pas d'un multiple de 3 ou il n'est pas supérieur à 10.");}
}


void exercice5() {
    float moy=-1;
    int note1=0, note2=0, note3=0;
    printf("Veuillez saisir les notes :\n");
    scanf("%d", &note1);
    scanf("%d", &note2);
    scanf("%d", &note3);
    moy=moyenne(note1,note3,note2);
    while (moy==-1){
        printf("Veuillez saisir à nouveau les notes :");
        scanf("%d", &note1);
        scanf("%d", &note2);
        scanf("%d", &note3);
        moy=moyenne(note1,note3,note2);
    }
    printf("Votre moyenn est %f", moy);

}

void exercice5_8(){
    int entier=0;
    printf("Veuillez rentrer un entier :");
    scanf("%d", &entier);
    while (multiples(entier,2)==0 || multiples(entier,7)==0){
        printf("Veuillez à nouveau rentrer un entier :");
        scanf("%d", &entier);
    }
    printf("Ce nombre est un multiple de 7 et de 2.");
}



//
// Created by CASIES Eliot  on 29/09/2021.
//
#include <stdio.h>


int getMax(int entier1, int entier2){
    return (entier1>=entier2)
    ? entier1
    : entier2;

}

int saisirEntier(){
    int entier=0;
    printf("Veuillez saisir un entier :");
    scanf("%d",&entier);
    return entier;
}


int calculAire(int largeur, int longueur){
    return largeur*longueur;
}

int calculPerimetre(int largeur, int longueur){
    return (largeur+longueur)*2;
}

int multiples(int entier1, int entier2){
    return (entier1%entier2==0)
    ? (1)
    : (0);
}



float moyenne(int note1, int note2, int note3){
    float moy=0;
    if ((note1>=0) && (note1<=20) && (note2>=0) && (note2<=20) && (note3>=0) && (note3<=20)){
            moy = (float) (note1+note2+note3)/3;
            return moy;
        }
        else
        {
            return (-1);
        }
    }


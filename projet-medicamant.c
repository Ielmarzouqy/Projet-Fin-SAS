#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "head.h"
struct produit {
    char Nom[50];
    char Code[50];
    int Quantite;
    double Prix;
};
struct produit medicament[50];
 struct produit L;
    int compt=0;
    int i, j, test;
void cleanCls(){
    system("Cls||clear");
}
void Ajouter(){
    printf("Donner le nom de medicamant :");
    scanf("%s",&medicament[compt].Nom);
    printf("Donner le Code de medicamant :");
    scanf("%s", &medicament[compt].Code);
    printf("Donner la Quantite de medicamant :");
    scanf("%d", &medicament[compt].Quantite);
    printf("Donner le Prix de medicamant :");
    scanf("%lf", &medicament[compt].Prix);
    compt++;
}
void AjouterPlusProduit(){
    int i, num;
 printf("donner le nombre des produit");
 scanf("%d", &num);
    for(i=0;i<num;i++){
    printf("Donner le nom de medicamant :");
    scanf("%s",&medicament[compt].Nom);
    printf("Donner le Code de medicamant :");
    scanf("%s", &medicament[compt].Code);
    printf("Donner la Quantite de medicamant :");
    scanf("%d", &medicament[compt].Quantite);
    printf("Donner le Prix de medicamant :");
    scanf("%lf", &medicament[compt].Prix);
    compt++;
     }
}
void AfficheListe(){
    // struct produit List[50];
    int i, j, test;
    do{
         test=0;
          for (j=-1;j>i;j--){
             if(strcmp(medicament[j].Nom, medicament[j-1].Nom)<0){
                L=medicament[j];
                medicament[j]=medicament[j-1];
                medicament[j-1]=L;
                test=1;
                
             }
          }
    }

 while ( test=1 && i<compt);
 }

    // printf("Le nom est :%s \n Le code est:%s \n La quantite est :%d \n Le prix est :%lf", medicament[i].Nom, medicament[i].Code, medicament[i].Quantite, medicament[i].Prix);
    //   }
 
int main() {
    int choix;
    int choix2;
    do{
        printf("1- Ajouter :\n");
        printf("2- Ajouter plusieur medicaments :\n");
        printf("3- Afficher la liste de produit par ordre alphabetique :\n");
        printf("4- Rechercher:\n");
        printf("5- Suprimer :\n");
        printf("Donner votre choix: ");
        scanf("%d", &choix);
        switch (choix){
            case 1:{
                   cleanCls();
                   Ajouter();
                   break;
                   }
            case 2:{
                   cleanCls();
                   AjouterPlusProduit();
                   break;
                   }
            case 3:{
                     switch (choix2){
                        cleanCls();

                         case 1:{
                        //  func1();
                                break;
                                }
                         case 2:{
                        //   func1();
                                break;
                                }
                        }
                   break;
                    }
            case 4:
                   break;
            case 5:
                   break;
        }
        }while(choix!=0);
        //getch();
    }
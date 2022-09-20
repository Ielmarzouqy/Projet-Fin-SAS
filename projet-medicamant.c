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
// struct produit Medicaments[50];
//  struct produit N;
 struct produit P;
    int compt=0;
    int i=0;
    int j=0;
    int test;
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
 //- lister tous les produits selon l’ordre alphabétique du nom.

void AfficheListeNom(){
    // struct produit List[50];
    int i;
    int j;
    struct produit inter;
          for (i=0;i<compt-1;i++){
            for (j=i+1;j<compt;j++){
              if(medicament[i].Nom[0]>medicament[j].Nom[0]){ 
            
                strcpy(inter.Nom, medicament[i].Nom);
                strcpy(inter.Code, medicament[i].Code);
                 inter.Quantite= medicament[i].Quantite;
                inter.Prix= medicament[i].Prix;

                strcpy(medicament[i].Nom, medicament[j].Nom);
                strcpy(medicament[i].Code, medicament[j].Code);
                medicament[i].Quantite= medicament[j].Quantite;
                medicament[i].Prix= medicament[j].Prix;

                strcpy(medicament[j].Nom, inter.Nom);
                strcpy(medicament[j].Code, inter.Code);
                medicament[j].Quantite= inter.Quantite;
                medicament[j].Prix= inter.Prix;                
             }
          }
    }
    for(i=0;i<compt;i++)
    {
     printf("Nom:%s Code :%s Quantite : %d Prix : %2.lf Prix TTC: %2.lf", medicament[i].Nom, medicament[i].Code, medicament[i].Quantite,medicament[i].Prix, (medicament[i].Prix)*1.15);
    }
}
   
void AfficheListePrix(){
     // struct produit List[50];
    int i;
    int j;
    struct produit temp;
          for (i=0;i<compt-1;i++){
            for (j=i+1;j<compt;j++){
              if(medicament[i].Prix<medicament[j].Prix){ 
            
                strcpy(temp.Nom, medicament[i].Nom);
                strcpy(temp.Code, medicament[i].Code);
                 temp.Quantite= medicament[i].Quantite;
                temp.Prix= medicament[i].Prix;

                strcpy(medicament[i].Nom, medicament[j].Nom);
                strcpy(medicament[i].Code, medicament[j].Code);
                medicament[i].Quantite= medicament[j].Quantite;
                medicament[i].Prix= medicament[j].Prix;

                strcpy(medicament[j].Nom, temp.Nom);
                strcpy(medicament[j].Code, temp.Code);
                medicament[j].Quantite= temp.Quantite;
                medicament[j].Prix= temp.Prix;                
             }
          }
    }
    for(i=0;i<compt;i++)
    {
     printf("Nom:%s Code :%s Quantite : %d Prix : %2.lf Prix TTC: %2.lf", medicament[i].Nom, medicament[i].Code, medicament[i].Quantite,medicament[i].Prix, (medicament[i].Prix)*1.15);
    }
}
int main() {
    int choix;
    int choix2;
    do{
        printf("1- Ajouter :\n");
        printf("2- Ajouter plusieur medicaments :\n");
        printf("3- Afficher la liste de produit par ordre  :\n");
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
                printf("11-- liste par ordre alphabetique");
                printf("12 liste par ordre décroissant du prix");
                printf("donner votre choix d'ordre: \n");
                scanf("%d", &choix2);
                     switch (choix2){
                         case 11:{
                            cleanCls();
                        //  func1(ordre alpha);
                        AfficheListeNom();
                                break;
                                }
                         case 12:{
                            cleanCls();
                            AfficheListePrix();
                        //   func1(ordre prix);
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
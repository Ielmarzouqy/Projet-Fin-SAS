#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
         struct produit {
            char Nom[50];
            char Code[50];
            int Quantite;
            double Prix;
                        };
        struct Achat {
            char Nom[50];
            char Code[50];
            double Prix;
            double prixTTc;
            int Quantite;
            int jour, mois, annee;
         } ;    
          struct Achat achat[];
        struct produit medicament[50];
       
        struct produit P;
            int compt=0;
            int i=0;
            int j=0;
            int test;
            int countbuy;
            // clean
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
        printf("Donner le Prix de medicamant DHS :");
        scanf("%lf", &medicament[compt].Prix);
    compt++;
                }
    void AjouterPlusProduit(){
            int i, num;
        printf("donner le nombre des produit");
        scanf("%d", &num);
            for(i=0;i<num;i++){
        printf("\nDonner le nom de medicamant :");
        scanf("%s",&medicament[compt].Nom);
        printf("\nDonner le Code de medicamant :");
        scanf("%s", &medicament[compt].Code);
        printf("\nDonner la Quantite de medicamant :");
        scanf("%d", &medicament[compt].Quantite);
        printf("\nDonner le Prix de medicamant DHS:");
        scanf("%lf", &medicament[compt].Prix);
    compt++;
                                }
                            }

                // 1- afficher tous les produit
        void Affichage(){
                for (i=0;i<compt;i++){
            printf("   \nNom:%s  ", medicament[i].Nom);
            printf("   \nCode :%s", medicament[i].Code);
            printf("   \nQuantite : %d ", medicament[i].Quantite);
            printf("   \nPrix DHS: %2.lf", medicament[i].Prix);
            printf("   \nPrix TTC DHS: %2.lf",(medicament[i].Prix)*1.15);
                                     }
                        }

                       //- lister tous les produits selon l’ordre alphabétique du nom.

        void AfficheListeNom(){
                    struct produit inter;
                     int i;
                     int j;
             
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
            for(i=0;i<compt;i++){
                printf("Nom:%s", medicament[i].Nom);
                printf("   \nCode :%s", medicament[i].Code);
                printf("   \nQuantite : %d", medicament[i].Quantite);
                printf("   \nPrix : %2.lf", medicament[i].Prix);
                printf("   \nPrix TTC: %2.lf", (medicament[i].Prix)*1.15);
                                }
                                }
                       //- lister tous les produits selon l’ordre decroissance de prix.

        void AfficheListePrix(){
                    struct produit temp;
                    int i;
                    int j;
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
                for(i=0;i<compt;i++){
                    printf("  Nom:%s    ", medicament[i].Nom);
                    printf("  \nCode :%s", medicament[i].Code);
                    printf("  \nQuantite : %d", medicament[i].Quantite);
                    printf("  \nPrix : %2.lf", medicament[i].Prix);
                    printf("  \nPrix TTC: %2.lf", (medicament[i].Prix)*1.15);
                                    }
                                }
 

                       
                         //recherch sur le produit selon le code
        void recherchCode(){
                     char Code[50];
                     int i;
            for(i=0;i<compt;i++){
                if(strcmp(medicament[i].Code,Code) == 0){
                 printf("  Nom : %s", medicament[i].Nom);
                 printf("  \nCode : %s",  medicament[i].Code);
                 printf("  \nQuantite : %d", medicament[i].Quantite);
                 printf("  \nPrix DHS: %2.lf", medicament[i].Prix);
                 printf("  \nPrix TTC DHS: %2.lf", (medicament[i].Prix)*1.15);               
                }else{
                 printf("n'existe pas\n");                         
                    }
                                 }       
                            }
                        //recherch sur le produit selon la quantite
        void recherchQua(){
                 int  Quantite [50];
                 int i;
            for(i=0;i<compt;i++){
                if(strcmp( medicament[i].Quantite, Quantite)== 0){
                    printf("  Nom:%s    ", medicament[i].Nom);
                    printf(" \nCode :%s", medicament[i].Code);
                    printf("  \nQuantite : %d ", medicament[i].Quantite);
                    printf("  \nPrix DHS: %2.lf", medicament[i].Prix);
                    printf("  \nPrix TTC DHS: %2.lf", (medicament[i].Prix)*1.15);
           
                 }else{
                    printf("n'existe pas\n");                         
                      }
                                 }
                            }


                                  // Acheter produit
        void Acheter(){
            time_t tt = time(NULL);
        struct tm * dt = localtime( & tt);
            char Code[50];
            int quantite_exist;
            printf("\ndonner le code de medicament :");
            scanf("%s",Code);
            for(i=0;i<compt;i++){

                if((strcmp(medicament[i].Code, Code)==0)){
                  printf("  Nom : %s", medicament[i].Nom);
                 printf("  \nCode : %s",  medicament[i].Code);
                 printf("  \nQuantite : %d", medicament[i].Quantite);
                 printf("  \nPrix DHS: %2.lf", medicament[i].Prix);
                 printf("  \nPrix TTC DHS: %2.lf", (medicament[i].Prix)*1.15); 
                }
                 printf("Donner la quantite a deduire: ");
                 scanf("%d",&quantite_exist);
                     if(medicament[i].Quantite>quantite_exist){
                        medicament[i].Quantite -= quantite_exist;
                        
                        strcpy(achat[i].Nom, medicament[i].Nom);
                        strcpy(achat[i].Code, medicament[i].Code);
                        achat[countbuy].Quantite= medicament[i].Quantite;
                        achat[countbuy].prixTTc= medicament[i].Prix;
                        achat[countbuy].annee = dt -> tm_year + 1900;
                        achat[countbuy].mois = dt -> tm_mon + 1;
                        achat[countbuy].jour = dt -> tm_mday;
                 printf("  Nom : %s", medicament[i].Nom);
                 printf("  \nCode : %s",  medicament[i].Code);
                 printf("  \nQuantite : %d", medicament[i].Quantite);
                 printf("  \nPrix DHS: %2.lf", medicament[i].Prix);
                 printf("  \nPrix TTC DHS: %2.lf", (medicament[i].Prix)*1.15);
                 countbuy++;
              printf("%.2d:%.2d:%.2d:%.2d/%.2d/%.4d ", dt ->tm_hour,dt ->tm_min,dt ->tm_sec, dt ->tm_mday, dt -> tm_mon + 1, dt -> tm_year + 1900);
             }
                else{
                 printf("Ce code n'existe pas\n");
                  }

                
            }

        }
         //Alimenter le stock:
        void AlimenterStock(){

            time_t tt = time(NULL);
            struct tm * dt = localtime( & tt);
            char Code[50];
            int AddQuantite;
            printf("donner le code de medicament :");
            scanf("%s",Code);
            for(i=0;i<compt;i++){

                if((strcmp(medicament[i].Code, Code)==0)){
                  printf("  Nom : %s", medicament[i].Nom);
                 printf("  \nCode : %s",  medicament[i].Code);
                 printf("  \nQuantite : %d", medicament[i].Quantite);
                 printf("  \nPrix DHS: %2.lf", medicament[i].Prix);
                 printf("  \nPrix TTC DHS: %2.lf", (medicament[i].Prix)*1.15); 
                }
                 printf("\nDonner la quantite a ajouter: ");
                 scanf("%d",&AddQuantite);
                     if(medicament[i].Quantite>AddQuantite){
                        medicament[i].Quantite += AddQuantite;
                        
                        strcpy(achat[i].Nom, medicament[i].Nom);
                        strcpy(achat[i].Code, medicament[i].Code);
                       achat[i].Quantite= medicament[i].Quantite;
                        achat[i].prixTTc= medicament[i].Prix;
                            achat[i].annee = dt -> tm_year + 1900;
                       achat[i].mois = dt -> tm_mon + 1;
                      achat[i].jour = dt -> tm_mday;
                       printf("  Nom : %s", medicament[i].Nom);
                 printf("  \nCode : %s",  medicament[i].Code);
                 printf("  \nQuantite : %d", medicament[i].Quantite);
                 printf("  \nPrix DHS: %2.lf", medicament[i].Prix);
                 printf("  \nPrix TTC DHS: %2.lf", (medicament[i].Prix)*1.15);
              printf("%.2d:%.2d:%.2d:%.2d/%.2d/%.4d ", dt ->tm_hour,dt ->tm_min,dt ->tm_sec, dt ->tm_mday, dt -> tm_mon + 1, dt -> tm_year + 1900);
             }
                else{
                 printf("Ce code n'existe pas\n");
                  }

                
            }

        }

                        //Etat du stock
    void stock(){
         int i;
        for(i=0;i<compt;i++){
            if( medicament[i].Quantite<3){
                printf("   \nNom:%s  ", medicament[i].Nom);
                printf("   \nCode :%s", medicament[i].Code);
                printf("   \nQuantite : %d", medicament[i].Quantite);
                printf("   \nPrix DHS : %2.lf", medicament[i].Prix);
                printf("   \nPrix TTC DHS: %2.lf",(medicament[i].Prix)*1.15);
             }else{
                printf("n'existe pas");                         
                      }
                             }
                 }
                    // Supprimer les produits par code

    void Suprimer(){
        char Code[50];
            int S;
            printf("\ndonner le code de medicament :");
            scanf("%s",Code);
            for(i=0;i<compt;i++){

                if((strcmp(medicament[i].Code, Code)==0)){
                  medicament[i]=medicament[i+1];

                
                } compt--;

        for(i=0;i<compt;i++){
            
            printf("  Nom : %s", medicament[i].Nom);
                 printf("  \nCode : %s",  medicament[i].Code);
                 printf("  \nQuantite : %d", medicament[i].Quantite);
                 printf("  \nPrix DHS: %2.lf", medicament[i].Prix);
                 printf("  \nPrix TTC DHS: %2.lf", (medicament[i].Prix)*1.15); 

        }

    }
    }

    //total des prix
    void totaldesprix(){
            double TotPrix;
            for(i=0;i<compt;i++){
                TotPrix +=achat[i].Quantite*achat[i].prixTTc;
            }
                printf("\nle prix total des produit est :%2.lf", TotPrix);
    }
    //moyenne des prix des produits vendus en journée courante
    void MoyennePrix(){
            double Moyenne;
            for(i=0;i<countbuy;i++){
               Moyenne =(achat[countbuy].Quantite*achat[countbuy].prixTTc) /countbuy;
            }
            printf("moyenne des prix des produits vendus en journée courante %2.lf",Moyenne );

    }
int main() {
        int choix;
        int choix2;
        int choix3;
        int Quantite;
        int quantite_exist;
        char Code[50];
        // int quantite exist;
            do{
            printf("  1- Ajouter un nouveau medicament :\n");
            printf("  2- Ajouter plusieur medicaments :\n");
            printf("  3- Afficher la liste de medicament par ordre  :\n");
            printf("  4- Rechercher sur un medicament:\n");
            printf("  5- afficher tous les medicament :\n");
            printf("  6- pour acheter les medicament :\n");
            printf("  7- pour ajouter la quantite de medicament :\n");
            printf("  8- pour suprimer les medicament :\n");
            printf("  Donner votre choix: ");
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
                           //   func1(ordre prix);
                                AfficheListePrix();
                        break;
                                }
                            }
                    break;
                    }
            case 4:{
                printf("41-- Recherche selon le code\n");
                printf("42- Recherche selon la quantite\n");
                printf("donner votre choix de recherche : \n");
                scanf("%d", &choix3);
                            switch (choix3){
                        case 41:{
                            cleanCls();
                        //  chercher par code;
                                printf("donner le code de produit: ");
                                scanf("%s",&Code); 
                                recherchCode();                  
                        break;
                                }
                        case 42:{
                            cleanCls();
                        //  chercher par quatite;
                                  printf("donner la quantite de produit: ");
                                  scanf("%s",&Quantite); 
                                recherchQua();
                        break;
                                  }
                                           }
                        }
                    
            case 5:{
                // Pour afficher tous les produit
                cleanCls();
                Affichage();
                    }
                   break;
            case 6:{
                // Pour acheter un produit selon le code
                cleanCls();
                Acheter();
                  
                   break;
                    } 
            case 7:{
                // Pour allimenter le stock d'un produit 
                 cleanCls();
                 AlimenterStock();
                  
                   break;
                    } 
             case 8:{
                // Poursuprimer un produit 
                 cleanCls();
                 Suprimer();
                  
                   break;
                    }         

                         }
 
 
       }while(choix!=0);
 }




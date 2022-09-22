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

            int compt=0;
            int i=0;
            int j=0;
            int test;
            int countbuy;
            int Qnt;
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
        printf("Donner le Code de medicamant :");
        scanf("%s", &medicament[compt].Code);
        printf("Donner la Quantite de medicamant :");
        scanf("%d", &medicament[compt].Quantite);
        printf("Donner le Prix de medicamant DHS:");
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
                    struct produit inter[1];
                     int i;
                     int j;
             
            for (i=0;i<compt;i++){
                for (j=i+1;j<compt;j++){
                    if(strcmp(medicament[i].Nom,medicament[j].Nom)>0){ 
            
                        strcpy(inter[0].Nom, medicament[i].Nom);
                        strcpy(inter[0].Code, medicament[i].Code);
                        inter[0].Quantite= medicament[i].Quantite;
                        inter[0].Prix= medicament[i].Prix;

                        strcpy(medicament[i].Nom, medicament[j].Nom);
                        strcpy(medicament[i].Code, medicament[j].Code);
                        medicament[i].Quantite= medicament[j].Quantite;
                        medicament[i].Prix= medicament[j].Prix;

                        strcpy(medicament[j].Nom, inter[0].Nom);
                        strcpy(medicament[j].Code, inter[0].Code);
                        medicament[j].Quantite= inter[0].Quantite;
                        medicament[j].Prix= inter[0].Prix; 
                              
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
                    struct produit temp[1];
                    int i;
                    int j;
            for (i=0;i<compt;i++){
                for (j=i+1;j<compt;j++){
                    if(medicament[i].Prix<medicament[j].Prix){ 
            
                        strcpy(temp[0].Nom, medicament[i].Nom);
                        strcpy(temp[0].Code, medicament[i].Code);
                        temp[0].Quantite= medicament[i].Quantite;
                        temp[0].Prix= medicament[i].Prix;

                        strcpy(medicament[i].Nom, medicament[j].Nom);
                        strcpy(medicament[i].Code, medicament[j].Code);
                        medicament[i].Quantite= medicament[j].Quantite;
                        medicament[i].Prix= medicament[j].Prix;

                        strcpy(medicament[j].Nom, temp[0].Nom);
                        strcpy(medicament[j].Code, temp[0].Code);
                        medicament[j].Quantite= temp[0].Quantite;
                        medicament[j].Prix= temp[0].Prix;                
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
                     char CodeEntre[50];
                     int i;
                     int test=0;
                     printf("Entrer le code de produit: ");
                     scanf("%s",&CodeEntre); 
                     printf("%d", compt);
            for(i=0;i<compt;i++){
                if(strcmp(medicament[i].Code, CodeEntre)==0){
                 printf("  Nom : %s", medicament[i].Nom);
                 printf("  \nCode : %s",  medicament[i].Code);
                 printf("  \nQuantite : %d", medicament[i].Quantite);
                 printf("  \nPrix DHS: %2.lf", medicament[i].Prix);
                 printf("  \nPrix TTC DHS: %2.lf", (medicament[i].Prix)*1.15); 
                        test=1;   
                        break;           
                }
                                        
                    }
                    if(test==0){
                        printf("Erreur.veuillez ressayer\n"); 
                    }
                    test=0;
                                 }       
                        //recherch sur le produit selon la quantite
        void recherchQua(Quantite){
                 int i;
            for(i=0;i<compt;i++){
                if( medicament[i].Quantite == Quantite){
                    printf("  Nom:%s    ", medicament[i].Nom);
                    printf(" \nCode :%s", medicament[i].Code);
                    printf("  \nQuantite : %d ", medicament[i].Quantite);
                    printf("  \nPrix DHS: %2.lf", medicament[i].Prix);
                    printf("  \nPrix TTC DHS: %2.lf", (medicament[i].Prix)*1.15);
           
                 }else{
                    printf("Erreur.veuillez ressayer\n");                        
                      }
                                 }
                            }
  
                                  // Acheter produit
        void Acheter(){
            time_t tt = time(NULL);
        struct tm * dt = localtime( & tt);
            char Code[50];
            int quantite_a_acheter;
            int j;
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
                 scanf("%d",&quantite_a_acheter);
                     if((medicament[i].Quantite>quantite_a_acheter) && (quantite_a_acheter>0)){
                         medicament[i].Quantite -= quantite_a_acheter;
                        j=i;
                        strcpy(achat[countbuy].Nom, medicament[i].Nom);
                        strcpy(achat[countbuy].Code, medicament[i].Code);
                        achat[countbuy].Quantite= medicament[i].Quantite;
                        achat[countbuy].prixTTc= medicament[i].Prix;
                        achat[countbuy].annee = dt -> tm_year + 1900;
                        achat[countbuy].mois = dt -> tm_mon + 1;
                        achat[countbuy].jour = dt -> tm_mday;
                 
                 countbuy++;
                 Qnt+=countbuy;
                 printf("  Nom : %s", medicament[j].Nom);
                 printf("  \nCode : %s",  medicament[j].Code);
                 printf("  \nQuantite : %d", medicament[j].Quantite);
                 printf("  \nPrix DHS: %2.lf", medicament[j].Prix);
                 printf("  \nPrix TTC DHS: %2.lf", (medicament[j].Prix)*1.15);


              printf("%.2d:%.2d:%.2d:%.2d/%.2d/%.4d ", dt ->tm_hour,dt ->tm_min,dt ->tm_sec, dt ->tm_mday, dt -> tm_mon + 1, dt -> tm_year + 1900);
             }
                else{
                 printf("Erreur.veuillez ressayer\n");
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
                }else {
                    printf("Erreur.veuillez ressayer\n");
                }break;

                 printf("\nDonner la quantite a ajouter: ");
                 scanf("%d",&AddQuantite);
                     if((medicament[i].Quantite>AddQuantite)&&(AddQuantite>0)){
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
                 printf("Erreur.veuillez ressayer\n");
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
                printf("Erreur\n");                         
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
                    //statistique
    void statistique(){
        time_t tt = time(NULL);
        struct tm * dt = localtime( & tt);
        double TotPrix=0, Moyenne=0, Max=0, Min=1000;
        for(i=0;i<countbuy;i++){
            if(achat[i].jour == dt ->tm_mday)
                {TotPrix += achat[i].Prix;}
        }
                Moyenne = TotPrix/Qnt;
        for(i=0;i<countbuy;i++) {
            if(achat[i].Prix > Max)
              {Max = achat[i].Prix;}
        }  
        for(i=0;i<countbuy;i++) {
            if(achat[i].Prix < Min)
             {Min = achat[i].Prix;}
            }

        printf("Le  total des prix des produits vendus en journée courante est: %2.lf",TotPrix);
        printf("La moyenne des prix des produits vendus en journée courante: %d",Moyenne);
        printf("Le Max des prix des produits vendus en journée courante: %d",Max);
        printf("Le Min des prix des produits vendus en journée courante: %d",Min);

}
    
int main() {
        int choix;
        int choix2;
        int choix3;
        int Quantite;
        int quantite_a_acheter;
        char CodeEntre[50];
           do{
               
            printf("\t\t  1 Ajouter un nouveau medicament :\n");
            printf("\t\t  2 Ajouter plusieur medicaments :\n");
            printf("\t\t  3 Afficher la liste de medicament par ordre  :\n");
            printf("\t\t  4 Rechercher sur un medicament:\n");
            printf("\t\t  5 afficher tous les medicament :\n");
            printf("\t\t  6 pour acheter les medicament :\n");
            printf("\t\t  7 pour ajouter la quantite de medicament :\n");
            printf("\t\t  8 pour suprimer les medicament :\n");
            printf("\t\t  9 pour afficher les statistique de vente :\n\n");
            printf("\t\t\t\t  Donner votre choix: ");
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
                cleanCls();
                printf("\n1 liste par ordre alphabetique");
                printf("\n2 liste par ordre décroissant du prix");
                printf("\ndonner votre choix d'ordre: ");
                scanf("%d", &choix2);
                            switch (choix2){
                        case 1:{
                                cleanCls();
                                printf("\n liste par ordre alphabetique");
                            //  func1(ordre alpha);
                                AfficheListeNom();
                        break;
                                }
                        case 2:{
                                cleanCls();
                                printf("\n liste par ordre décroissant du prix");
                           //   func1(ordre prix);
                                AfficheListePrix();
                        break;
                                }
                            }
                    break;
                    }
            case 4:{
                cleanCls();
                printf("1 Recherche selon le code\n");
                printf("2 Recherche selon la quantite\n");
                printf("donner votre choix de recherche : \n");
                scanf("%d", &choix3);
                            switch (choix3){
                        case 1:{
                            cleanCls();
                        //  chercher par code;
                            recherchCode();              
                        break;
                                }
                        case 2:{
                            cleanCls();
                        //  chercher par quatite;
                                  printf("donner la quantite de produit: ");
                                  scanf("%d",&Quantite); 
                                recherchQua(Quantite);
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
                    // statistique() 
            case 9:{
                // Poursuprimer un produit 
                 cleanCls();
                 statistique();
                  
                   break;
                    }        

                         }
 
 
       }while(choix!=0);
       return 0;
 }




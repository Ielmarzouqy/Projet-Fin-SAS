 
#include <stdio.h>
#include <string.h>
 struct newProduct{
    int Code;
    int Quantite;
    float Prix;
    char Nom[100];
   };
   int count=0;
  void addNewProduct(){
  struct newProduct Product[100];
    int i,j, N;
    int number;
    printf("entrer le nombre des produit:");
    scanf("%d", &number);
    	printf("\nPlease Enter %d elements of an Array \n", number);
    for(i=0;i<number-1;i++){
        // scanf("%d", &newProduct Product[100]);
  printf("Ajouter le Code d' un nouveau produit:\n ");
  scanf("%d", &Product[count].Code);
  printf("Ajouter la Quantite d' un nouveau produit: ");
  scanf("%d", &Product[count].Quantite);
  printf("\nAjouter le Prix d' un nouveau produit: ");
  scanf("%2.lf", &Product[count].Prix);
  printf("\njouter le nom d' un nouveau produit: \n");
  scanf("%s", &Product[count].Nom);
 
  }  count++;
} 
  void ListerLeMenu (struct newProduct Product[]){
    int j,i, N;
    struct newProduct temp[100];
//     printf("l'ordre alphabetique des medicamants est: \n");
//   for(count=0;count<N;count++)
//     {
//       printf("%s\n", Product[count].Nom);
//     }
    // loop for sorting names.
    for(i=0;i<count;i++)
    {
      for (j=i+1;j<count;j++)
      {
          if(strcmp(Product[i].Nom, Product[j].Nom)>0)
          {
            strcpy(temp.Nom, Product[i].Nom);
            strcpy(temp.Code, Product[i].Code);
          temp.Quantite = Product[i].Quantite;
            temp.Prix = Product[i].Prix;

              strcpy(Product[i].Nom, Product[j].Nom);
              strcpy(Product[i].Code, Product[j].Code);
             Product[i].Quantite= Product[j].Quantite;
            Product[i].Prix=Product[j].Prix;
              
              strcpy(Product[j].Nom, temp.Nom);
              strcpy(Product[j].Code, temp.Code);
             Product[j].Quantite= temp.Quantite;
            Product[j].Prix= temp.Prix;
          }
      } 
    }
}
  int main() {
    addNewProduct(); 
     }

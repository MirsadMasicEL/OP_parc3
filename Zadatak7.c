//Mirsad Masic, Zadatak7
#include<stdio.h>
#include<string.h>

typedef struct{
  int ID;
  char naziv[50];
  double cijena;
} Product;

void addProduct(Product*, int, char*, double, int);
void printProducts(Product*, int);

int main(){
  int i;
  int id;
  char name[50] = {0};
  double price;
  Product products[3];
  
  printf("Dodajte proizvode:\n");
  for(i = 0; i < 3; i++){
  	printf("Unesite ID: ");
  	scanf("%d", &id);
  	printf("Unesite naziv: ");
  	scanf("%s", name);
  	printf("Unesite cijenu: ");
  	scanf("%lf", &price);
  	addProduct(products, id, name, price, i);
  }
  
  printProducts(products, 3);
}

void addProduct(Product* product, int id, char* name, double price, int n){
  product[n].ID = id;
  strcpy(product[n].naziv, name);
  product[n].cijena = price;
}

void printProducts(Product *product, int n){
  int i;
  for(i = 0; i < n; i++){
    printf("ID: %d\n", product[i].ID);
    printf("Naziv: %s\n", product[i].naziv);
    printf("Cijena: %.2lf\n", product[i].cijena);
  }
}

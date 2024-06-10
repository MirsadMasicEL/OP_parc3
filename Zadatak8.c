#include<stdio.h>
#include<string.h>

typedef struct{
  char naslov[50];
  char autor[50];
  int godina;
  int iznajmljena;
} Knjiga;

void unos(Knjiga*);
void pretraga_autor(Knjiga*, int);
void iznajmi_knjigu(Knjiga*, int);
void vrati_knjigu(Knjiga*, int);
void prikaz_knjiga(Knjiga*, int);

int main(){
  Knjiga knjige[100];
  int x;
  int state = 1;
  int i = 0;
  while(state){
  	printf("\n1. Unos knjige\n2. Pretraga po autoru\n3. Iznajmi knjigu\n4. Vrati knjigu\n5. Prikazi sve knjige\n6. Zavrsi program\n");
  	printf("Unesite vas izbor: ");
  	scanf("%d", &x);
  	switch(x){
  	  case 1:
		unos(knjige + i++);
		break;
	  case 2:
	  	pretraga_autor(knjige, i);
	  	break;
	  case 3:
	  	iznajmi_knjigu(knjige, i);
	  	break;
	  case 4: 
	    vrati_knjigu(knjige, i);
	    break;
	  case 5:
	  	prikaz_knjiga(knjige, i);
	  	break;
	  case 6:
	  	state = 0;
	  	break;
	  default:
	  	puts("Pogresan unos!");
	  	break;
	}
  }
  return 0;
}

void unos(Knjiga* knjiga){
  getchar();
  printf("Naslov: ");
  scanf("%49[^\n]", knjiga->naslov);
  getchar();
  printf("Autor: ");
  scanf("%49[^\n]", knjiga->autor);
  printf("Godina izdavanja: ");
  scanf("%d", &knjiga->godina);
  knjiga->iznajmljena = 0;
}

void pretraga_autor(Knjiga* knjiga, int n){
  int i;
  char autor[50];
  getchar();
  printf("Unesi autora: ");
  scanf("%49[^\n]", autor);
  for(i = 0; i < n; i++){
    if(!strcmp(knjiga[i].autor, autor)){
      printf("%s\n", knjiga[i].naslov);
	}
  }
}

void iznajmi_knjigu(Knjiga* knjiga, int n){
  int i;
  char naziv[50];
  getchar();
  printf("Unesi naziv: ");
  scanf("%49[^\n]", naziv);
  for(i = 0; i < n; i++){
  	if(!strcmp(knjiga[i].naslov, naziv)){
  	  if(knjiga[i].iznajmljena == 1)
		puts("Knjiga je iznajmljena!");
	  else
	    knjiga[i].iznajmljena = 1;	
	}
  }
}

void vrati_knjigu(Knjiga* knjiga, int n){
  int i;
  char naziv[50];
  getchar();
  printf("Unesi naziv: ");
  scanf("%49[^\n]", naziv);
  for(i = 0; i < n; i++){
  	if(!strcmp(knjiga[i].naslov, naziv)){
	  knjiga[i].iznajmljena = 0;	
	}
  }
}

void prikaz_knjiga(Knjiga* knjiga, int n){
  int i;
  for(i = 0; i < n; i++){
  	printf("Naslov knjige: %s\n", knjiga[i].naslov);
  	printf("Autor knjige: %s\n", knjiga[i].autor);
  	printf("Godina izdanja knjige: %d\n", knjiga[i].godina);
  }
}

//Mirsad Masic, Zadatak 4
#include<stdio.h>
#include<string.h>

int zamijeni(char*);

int main(){
  char string[50] = {0};
  printf("Unesite string: ");
  scanf("%49[^\n]", string);
  int broj = zamijeni(string);
  printf("Broj praznih mjesta je: %d", broj);
  return 0;
}

int zamijeni(char* s){
  int i = 0;
  int counter = 0;
  while(s[i] != '\0'){
  	if(s[i] == ' '){
  	  s[i] = '_';
  	  counter++;  
    }
	i++;	
  }
  printf("%s\n", s);
  return counter;
}

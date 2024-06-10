//Mirsad Masic, Zadatak 5
#include<stdio.h>
#include<string.h>

void obrnistr(char*);

int main(){
  char string[50] = {0};
  printf("Unesite recenicu: ");
  scanf("%49[^\n]", string);
  printf("Recenica prije obrtanja: %s\n", string);
  obrnistr(string);
  printf("Recenica poslije obrtanja: %s\n", string);
  return 0;
}

void obrnistr(char* s){
  int i = 0;
  int j = strlen(s) - 1;
  char temp;
  while(i < j){
  	temp = s[i];
  	s[i] = s[j];
  	s[j] = temp;
  	i++;
  	j--;
  }
}

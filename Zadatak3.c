//Mirsad Masic, Zadatak3
#include<stdio.h>
#include<string.h>

int main(){
  int i = 0;
  int counter = 0;
  char string[100] = {0};
  printf("Unesi recenicu: ");
  scanf("%99[^\n]s", string);
  while(string[i] != '.'){
  	while(string[i] == ' ')
  	  i++;
  	if(string[i] != ' ' && string[i] != '.')
  	  counter++;
  	while(string[i] != ' ' && string[i] != '.')
  	  i++;
  }
  printf("Recenica ima %d rijeci: ", counter);
  return 0;
}

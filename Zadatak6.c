//Mirsad Masic, Zadatak6
#include<stdio.h>
#include<string.h>

int main(){
  char str[50] = {0};
  printf("Unesi string za provjeru: ");
  scanf("%49[^\n]", str);
  int i = 0;
  int j = strlen(str) - 1;
  int boolean = 0;
  while(i < j){
   	while(str[i] == ' ')
   	  i++;
   	while(str[j] == ' ')
   	  j++;
    if(tolower(str[i]) != tolower(str[j])){
      boolean = 0;
      break;
	}
	boolean = 1;
	i++;
	j--;
  }
  if(boolean)
    puts("Palindrom");
  else
    puts("Nije palindrom");
  return 0;
}

//Mirsad Masic, Zadatak2
#include<stdio.h>
#include<string.h>

int main(){
  char sentence[40] = {0};
  printf("Upisite recenicu: ");
  scanf("%39[^\n]s", sentence);
  char reversed[40] = {0};
  int i = strlen(sentence) - 1;
  int j = 0;
  while(i >= 0){
  	reversed[j++] = sentence[i--];
  }
  reversed[j] = '\0';
  printf("Obrnuta recenica je: %s", reversed);
  return 0;
}

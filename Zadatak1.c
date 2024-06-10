#include<stdio.h>

void spoji_string(char*, char*);

int main(){
  char string1[40];
  char string2[40];
  printf("Unesite prvi string: ");
  scanf("%39s", string1);
  printf("Unesite drugi string: ");
  scanf("%39s", string2);
  spoji_string(string1, string2);
  return 0;
}

void spoji_string(char* s1, char* s2){
  char final_string[80];
  int i = 0;
  int j = 0;
  while(s1[i] != '\0'){
  	final_string[i] = s1[i];
  	i++;
  }
  final_string[i] = ' ';
  i++;
  while(s2[j] != '\0'){
  	final_string[i] = s2[j];
  	i++;
  	j++;
  }
  final_string[i] = '\0';
  printf("%s", final_string);
}

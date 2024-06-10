#include<stdio.h>
#include<string.h>

int main(){
  int n, i;
  double average = 0;
  do{
    printf("Unesi broj potrosaca: ");
    scanf("%d", &n);
  } while(n < 0 || n > 100);
  double potrosnja[n];
  for(i = 0; i < n; i++){
  	printf("Unesi potrosnju %d. potrosaca: ", i+1);
  	scanf("%lf", &potrosnja[i]);
  	average += potrosnja[i];
  }
  average /= n;
  printf("Srednja potrosnja je: %lf\n", average);
  return 0;
}

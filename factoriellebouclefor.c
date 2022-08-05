#include <stdio.h>
 
int main()
{
  int nbr, i, f = 1;
 
  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nbr);
  
   if(nbr==0){
    printf("la factorielle de 0 est 1");
  }
  else if(nbr<0){
    printf("impossible");
  }
  
  else{
 
  for (i = 1; i <= nbr; i++){
    f = f * i;
  }
 
  printf("Factorielle de %d = %d\n", nbr, f);
  }
  return 0;
}
#include <stdio.h> 

signed int lim;
short bool1;
short bool2;
char c;

int main(void)
{
  printf("Entrez la taille de la pyramide: ");
  bool1 = scanf("%d",&lim);
  printf("Entrez le motif de votre pyramide: ");
  getchar();
  bool2 = scanf("%c",&c);

  if(bool1==1 && bool2==1)
  {
    for(signed int i=0; i<lim; i++)
    {
      for(signed int j=0; j<i; j++)
        putchar(c);

      printf("%c\n",c);
    }
  }
  else 
    printf("Arrete de rentrer des cochonneries !");
}

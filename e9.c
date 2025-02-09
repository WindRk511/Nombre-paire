/*
Algorithme affiche un paire ou non
variable i,n:entier
debut 
    ecrire("Entrer un nombre:");
    lire(n);
    si (i%2=0) alors
       afficher(n," est paire");
       sinon alors 
       afficher(n," est impaire");
    finsi
fin       
*/

//programme C

#include<stdio.h>

int main ()
{
    int n;
    printf("Entrer un nombre:");
    scanf("%d",&n);
    if (n%2==0) {
       printf("%d est paire",n);}
       else { 
       printf("%d est impaire",n);}
  return (0);     
}
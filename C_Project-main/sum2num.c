#include<stdio.h>
 
int sum2num() {
   int a, b, sum;
 
   printf("\n\nEnter two no: ");
   scanf("%d %d", &a, &b);
 
   sum = a + b;
 
   printf("Sum : %d", sum);
 
   return(0);
}

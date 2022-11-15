#include <stdio.h>
biggest3()
{
    int num1, num2, num3, largest;
     
    printf("\n Enter the number1 = ");
    scanf("%d", &num1);
    printf("\n Enter the number2 = ");
    scanf("%d", &num2);
    printf("\n Enter the number3 = ");
    scanf("%d", &num3);
    
    largest =((num1>num2 && num1>num3)?num1: (num2>num3)?num2:num3);
    printf("Largest number = %d \n",largest);
   // return 0;
}

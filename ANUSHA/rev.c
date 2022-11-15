/* using temp variable */
#include <stdio.h>
#include <string.h>
 
reverse()
{
  	char Str[100], temp;
  	int i, j, len;
 
  	printf("\n Actual :  ");
  	gets(Str);
  	
  	len = strlen(Str) - 1;
 
  	for (i = 0; i < strlen(Str)/2; i++)
  	{
  		temp = Str[i];
  		Str[i] = Str[len];
  		Str[len--] = temp;
  	}
 
  	printf("\n Result = %s", Str);
  	
 // 	return 0;
}

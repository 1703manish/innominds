//program based on for loop using macro

#include <stdio.h>
#define N 5
int main()
{
	int i,j;
	for(i=1;i<=N;i++)
		{
  			for(j=1;j<=i;j++)
    		printf("*");
  
  		printf("\n");
		}
  return 0;
}

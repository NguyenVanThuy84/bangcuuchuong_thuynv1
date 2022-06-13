#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i,j,k;
	i = 0;
	printf ("bang cuu chuong : \n");
	for (i = 2; i <= 10; i ++)
	{
		printf ("\n");
		for (j = 1; j <=10; j++)
		{
		printf ("\t %d x %d = %d \n", i, j, i *j);	
		}
	}
	return 0;
}

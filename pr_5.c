#include <stdio.h>

int main (){

    int a[10][10];
    int i, j,  n, sum = 0;

    printf("Enter the  matrix:- ");
	scanf("%d", &n);


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) 
        {
        	printf("Enter a element: ");
           	scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) 
        {
        	printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    for (j = 0; j < n; ++j) 
    {
        for (i = 0; i < n; ++i)
        {
            sum = sum + a[i][j];
        }

        printf("Sum of %d = %d\n", j, sum);
        sum = 0;

    }
 	return 0;
}


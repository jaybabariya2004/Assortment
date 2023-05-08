#include<stdio.h>

int  main(){

	int i,j,sum=0;
	
	int a[3][3]={1,2,3,4,5,6,7,8,9};

	printf("Enter a first array\n");
	
	for(i=0; i<=2; i++){
		
		for(j=0; j<=2; j++){
			
			if(i==j){
				
				sum+=a[i][j];
				
			}
			
			printf("%d ",a[i][j]);

		}
		
		printf("\n");

	}

		printf("The diagonal sum is a:%d",sum);


	return 0;
}

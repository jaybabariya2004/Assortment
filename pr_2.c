#include<stdio.h>

int main(){
	
	int i,j,n,sum=0;
	
	printf("Enter a size : ");
	scanf("%d",&n);
	
	int a[n][n];
	
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			
			printf("Enter element [%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++){
		
		sum +=a[i] [n-i-1]; 
	}
	printf("%d\n",sum);
	
	
	return 0;
}

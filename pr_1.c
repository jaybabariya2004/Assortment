#include <stdio.h>

int main(){
    int a[1];
    int i, n;

    printf("Enter a size : ");
    scanf("%d", &n);

    printf("Enter a element : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Negative Array : ");
    for(i=0; i<n; i++)
    {
        if(a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }

    return 0;
}

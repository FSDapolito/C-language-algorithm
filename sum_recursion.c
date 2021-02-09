#include <stdio.h>
#include <stdlib.h>

int sum_ric(int [], int);

int main(){
    
    int *a,i,n;
    
    a = (int *)malloc(sizeof(int)) ;
    
    if(a==NULL)
        printf("\nFailed allocation\n");
    
    printf("Size of array : ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        printf("%do ELEMENT --> ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("\n\nSOMMA = %d\n",sum_ric(a,n));
    
   
    return 0;
}

int sum_ric(int a[], int n)
{
    if(n==1)
        return a[0];
    
    else
        return a[n-1] + sum_ric(a,n-1);
}

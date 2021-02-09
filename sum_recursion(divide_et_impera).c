#include <stdio.h>
#include <stdlib.h>

int sum_ric_DI(int [], int);


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
    
    printf("\n\nSOMMA = %d\n",sum_ric_DI(a,n));
    
   
    return 0;
}

int sum_ric_DI(int a[], int n)
{
    int  mediano;
    
    if(n==1)
        return a[0];
    
    else{
        mediano = (n-1) / 2 ;
        
        return sum_ric_DI(a,mediano+1) + sum_ric_DI(a+mediano+1,n-(mediano+1));
    }
}

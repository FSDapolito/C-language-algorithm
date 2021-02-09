#include <stdio.h>
#include <stdlib.h>

int max_arr_ric(int [],int);
int max_i(int , int);

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
    
    printf("\n\nMAX ELEMENT = %d\n",max_arr_ric(a,n));
    
   
    return 0;
}

int max_arr_ric(int a[],int n)
{
    int mediano;
    if(n==1)
        return a[0];
    
    else {
        mediano = (n-1) / 2;
        
        return max_i(max_arr_ric(a,mediano+1),max_arr_ric(a+mediano+1,n-(mediano+1)));
    }
    
}

int max_i(int a, int b)
{
    if(a>b)
        return a;
    
    else
        return b;
}

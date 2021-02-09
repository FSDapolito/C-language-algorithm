#include <stdlib.h>
#include <stdio.h>

int ric_bin_DI(int [], int , int , int );

int main ()
{
    int *a,i,n,chiave;
    int valore;
    a = (int *)malloc(sizeof(int));
    
    if(a==NULL)
        printf("\nFailed allocation\n");
    
    printf("Size of array: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++) {
        printf("%d ELEMENT --> ",i+1);
        scanf("%d",&a[i]);
    }
    

    printf("\nInserit the key: ");
    scanf("%d",&chiave);
    
    
    valore = ric_bin_DI(a,chiave,0,n);
    
    if(valore >=0)
        printf("\nYes,your key is IN\n");
    
    else
        printf("\nThe key is OUT\n");
    
    return  0;
}

int ric_bin_DI(int a[], int chiave, int primo, int ultimo)
{
    
    int mediano ;
    
    if(primo > ultimo)
        return -1;
    
    else
    {
        mediano = (primo + ultimo) / 2 ;
        
        if ( a[mediano] == chiave)
            return mediano;
        
        else if(a[mediano] > chiave)
            return ric_bin_DI(a,chiave,primo,mediano-1 );
        
        else
            return ric_bin_DI(a,chiave,mediano+1,ultimo);
    }
    
}

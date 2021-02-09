#include <stdio.h>
#include <stdlib.h>

void ord_ins(int [], int );

int main()
{
    int *a,n,i;
    
    
    a = (int *)malloc(sizeof(int));
    
    if(a==NULL){
        printf("\nFailed allocation\n");
    }
    
    printf("Size of array: ");
    scanf("%d",&n);
    
    
   
    
    for(i=0; i<n; i++)
    {
        printf("%d Element---> ",i+1);
        scanf("%d",&a[i]);
    }
    
    ord_ins(a,n);
    
    
    printf("\nAfter sort algorithm\n\n");
    
    for(i=0; i<n; i++)
    printf("%d Element---> %d\n",i+1,*(a+i));
    
    free(a); 
    
    return 0;
}

void ord_ins(int a[], int n)
{
    int i, j, el_da_ins;
    
    for(i=0; i<n; i++)
    {
        j=i-1;
        el_da_ins = a[i];
        while (j>=0 && el_da_ins < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = el_da_ins;
    }
}


#include <stdio.h>
#include <stdlib.h>


int min_val_ind(int [], int );
void ord_sel_min(int [], int );
void scambiare(int *,int*);

int main(){
    int *a,n,i;
    
    a=(int *)malloc(sizeof(int));
    
    if(a==NULL)
        printf("\nFailed allocation\n");
    
    printf("Size of array: ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        printf("%do ELEMENT--> ",i+1);
        scanf("%d",&a[i]);
    }
    
    ord_sel_min(a,n);
    
    printf("\nAfter sort algorithm\n"); 
    for(i=0; i<n; i++)
        printf("%do ELEMENT--> %d\n",i+1,*(a+i));
    
    
    
    return 0;
}

void ord_sel_min(int a[], int n)
{
    int i;
    
    for(i=0; i<n; i++)
    scambiare(&a[i],&a[min_val_ind(&a[i],n-i)+i]);
}

int min_val_ind(int a[], int n)
{
    int i, index=0;
    
    for(i=1; i<n; i++)
    if(a[i]<a[index])
        index=i;
    return index;
}

void scambiare (int *a, int*b)
{
    int temp;
    temp = *a; *a= *b; *b = temp ;
}

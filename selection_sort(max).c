#include <stdlib.h>
#include <stdio.h>

int max_val_ind(int [], int ) ; 
void scambiare (int *, int *) ; 
void ord_sel_max(int [], int ) ; 

int main () 
{
  int *a,i,n; 
  
  a = (int *) malloc (sizeof(int*)); 
  
  if(a==NULL)
  printf("\nFailed allocation\n"); 
  
  printf("Size of array: "); 
  scanf("%d",&n); 
  
  for(i=0; i<n; i++)
  {
    printf("%do ELEMENT---> ",i+1); 
    scanf("%d",&a[i]); 
   }
   
   ord_sel_max(a,n); 
   
   printf("\nArray after sort algorithm\n"); 
   
   for(i=0; i<n; i++)
   printf("%do ELEMENT---> %d\n",i+1,*(a+i)); 
   

  free(a); 


  return 0; 
}

void ord_sel_max(int a[], int n)
{
  int i; 
  
  for(i=n-1; i>0; i--)
  scambiare(&a[i],&a[max_val_ind(&a[0],i+1)]); 
 }
 
 int max_val_ind(int a[], int n)
 {
    int i,index= 0; 
    for(i=1; i<n; i++)
    if(a[i] > a[index])
    index = i; 
    
    return index; 
   }
 
 void scambiare(int *a, int *b) 
 {
  int temp; 
  temp = *a; *a= *b; *b = temp ; 
  }
 








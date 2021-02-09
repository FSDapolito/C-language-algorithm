#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 30

int ric_bin_DI_S(char *[], char [], int );

int main ()
{
    char *a[] = {"Michelle","Jennifer","Venice","Warren"},chiave[MAX];
    int n=4;
    int valore;
     
    printf("\nInserit the key: ");
    scanf("%s",chiave);
    
    
    valore = ric_bin_DI_S(a,chiave,n);
    
    if(valore >=0)
        printf("\nYes,your key is IN\n");
    
    else
        printf("\nThe key is OUT\n");
    
    return  0;
}

int ric_bin_DI_S(char *a[], char chiave[],int n)
{
    int mediano , primo , ultimo ;
    
    primo = 0;
    ultimo = n-1;
    
    while (primo <= ultimo)
    {
        mediano = (primo + ultimo) / 2 ;
        
        if(strcmp(chiave,a[mediano])==0)
            return mediano;
        
        else if(strcmp(chiave,a[mediano])<0)
            ultimo = mediano-1;
        
        else
            primo = mediano +1 ;
    }
    
    return -1;
}

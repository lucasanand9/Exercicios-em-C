#include<stdio.h>

int main(){
    int n1,n2;

    scanf("%i", &n1);
    scanf("%i", &n2);

    if (n1 == 0 || n2 == 0)
    {
    printf("Nao pode continuar");
    return 0;
    }else{
        if (n1%n2 == 0 || n2%n1 == 0)
        {
            printf("Eh multiplo");
        }else{
            printf("nao é multiplo");
        }
        
    }

    
    
    return 0;
}
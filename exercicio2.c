#include <stdio.h>

int main(){

    int n1,n2;

    scanf("%i", &n1);
    scanf("%i", &n2);

    if (n1>n2)
    {
        printf("%i eh maior \n", n1);
    }else if (n1<n2)
    {
        printf("%i eh maior \n", n2);
    }else{
        printf("Sao iguais \n");
    }
    
    return 0;

}
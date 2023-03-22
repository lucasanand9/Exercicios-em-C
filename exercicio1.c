#include <stdio.h>

int main(){
    int n1, n2;
    printf("Escolha o primeiro numero: ",'\n');
    scanf("%i", &n1);
    printf("Escolha um segundo numero: ",'\n');
    scanf("%i", &n2);

    int produto = n1*n2;
    printf("O produto eh: %i \n", produto);

    int diferenca = n1 - n2;
    printf("A diferenca eh: %i \n", diferenca);

    float quociente;
    int resto;
    if (n2 >= 0)
    {
        quociente = n1/n2;
        resto = n1%n2;

        printf("O quociente eh: %f ;\nO resto eh: %i \n", quociente, resto);
    }else{
        printf("Nao foi possivel realizar a divisao");
    }

    return 0;
    
}
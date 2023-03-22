#include<stdio.h>

int main(){

    int n1, n2, n3, media, produto;

    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);

    media = (n1+n2+n3)/3;
    printf("A media eh: %i \n", media);

    produto = n1*n2*n3;
    printf("O produto eh: %i \n", produto);
    //maior numero
    if (n1> n2 && n1>n3)
    {
        printf("O %i é maior \n", n1);
    }else if (n1 < n2 && n2>n3)
    {
        printf("O %i é maior \n", n2);
    }else if (n1 < n3 && n2<n3)
    {
        printf("O %i é maior \n", n3);
    }else
    {
        printf("Todos sao iguais \n");
    }
    //menor numero
    if (n1 < n2 && n1 < n3)
    {
        printf("O %i é menor \n", n1);
    }else if (n1 > n2 && n2<n3)
    {
        printf("O %i é menor\n", n2);
    }else if (n1 > n3 && n2>n3)
    {
        printf("O %i é menor \n", n3);
    }else
    {
        printf("Todos sao iguais \n");
    }
    //supera a media
    int maiorMedia = 0;
    
        if (n1 > media)
        {
            maiorMedia++;
        }
        if (n2>media)
        {
            maiorMedia++;
        }
        if (n3 > media)
        {
            maiorMedia++;
        }
    printf("%i maior que a media \n", maiorMedia);
  

}
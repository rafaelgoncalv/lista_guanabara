#include <stdio.h>
#include <locale.h>
#include <string.h>>

int main()
{
    char nome[21];

    setlocale(LC_ALL,"");
    printf("Digite o seu nome:")/
    scanf("%s",&nome);


    printf("\nOlá, %s!\nSeja bem-vindo \n",nome);

    getchar();

}

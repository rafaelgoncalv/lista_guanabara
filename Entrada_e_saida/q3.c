/*
    Nome: Rafael Gon�alves
    Descri��o: Crie um programa que leia o nome e o sal�rio de um funcion�rio, mostrando no
               final uma mensagem.

*/

#include <stdio.h> //Fun��o de entrada e sa�da
#include <locale.h> // Habilita o emprego de acentua��o em palavras

int main()
{
    // Declara��o de vari�veis
    char nome[21];
    float salario;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite o nome do funcion�rio:"); //Imprime
    scanf("%s",&nome); // Guarda o valor recebido numa regi�o da mem�ria
    printf("Digite o sal�rio:");
    scanf("%f",&salario);

    //Sa�da de dados
    printf("\nO funcion�rio %s tem um sal�rio de %.2f em Junho",nome,salario);

    getchar(); //Pausa o programa
}

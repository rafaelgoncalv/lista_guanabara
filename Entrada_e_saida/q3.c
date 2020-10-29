/*
    Nome: Rafael Gonçalves
    Descrição: Crie um programa que leia o nome e o salário de um funcionário, mostrando no
               final uma mensagem.

*/

#include <stdio.h> //Função de entrada e saída
#include <locale.h> // Habilita o emprego de acentuação em palavras

int main()
{
    // Declaração de variáveis
    char nome[21];
    float salario;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite o nome do funcionário:"); //Imprime
    scanf("%s",&nome); // Guarda o valor recebido numa região da memória
    printf("Digite o salário:");
    scanf("%f",&salario);

    //Saída de dados
    printf("\nO funcionário %s tem um salário de %.2f em Junho",nome,salario);

    getchar(); //Pausa o programa
}

/*
    Nome: Rafael Gon�alves
    Descri��o:   Crie um programa que leia o pre�o de um produto, calcule e mostre o seu
                 PRE�O PROMOCIONAL, com 5% de desconto.
*/

#include <stdio.h> //Fun��o de entrada e sa�da
#include <locale.h> // Habilita o emprego de acentua��o em palavras

int main(){

    //Declara��o de vari�veis

    float preco_ini,desc;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite o pre�o do produto:");
    scanf("%f",&preco_ini);

    //C�lculos matem�ticos

    desc = preco_ini - 0.05 *preco_ini; // F�rmula do desconto


    //Sa�da de dados
    printf("\nO pre�o inicial = R$%.2f",preco_ini);
    printf("\nO pre�o ap�s o desconto � igual a = R$%.2f \n",desc);


    getchar(); //Pausa o programa
}


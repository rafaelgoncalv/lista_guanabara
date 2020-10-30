/*
    Nome: Rafael Gonçalves
    Descrição:   Crie um programa que leia o preço de um produto, calcule e mostre o seu
                 PREÇO PROMOCIONAL, com 5% de desconto.
*/

#include <stdio.h> //Função de entrada e saída
#include <locale.h> // Habilita o emprego de acentuação em palavras

int main(){

    //Declaração de variáveis

    float preco_ini,desc;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite o preço do produto:");
    scanf("%f",&preco_ini);

    //Cálculos matemáticos

    desc = preco_ini - 0.05 *preco_ini; // Fórmula do desconto


    //Saída de dados
    printf("\nO preço inicial = R$%.2f",preco_ini);
    printf("\nO preço após o desconto é igual a = R$%.2f \n",desc);


    getchar(); //Pausa o programa
}


/*
    Nome: Rafael Gonçalves
    Descrição:  Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
                e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.
*/

#include <stdio.h> //Função de entrada e saída
#include <locale.h> // Habilita o emprego de acentuação em palavras

int main(){

    //Declaração de variáveis

    float reais;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite a quantia (em R$):");
    scanf("%f",&reais);

    //Saída de dados

    printf("\nR$%.2f equivale a US$%.2f \n",reais,reais/3.45);

    getchar(); //Pausa o programa
}


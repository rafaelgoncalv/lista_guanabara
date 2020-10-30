/*
    Nome: Rafael Gon�alves
    Descri��o:  Fa�a um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
                e mostre quantos d�lares ela pode comprar. Considere US$1,00 = R$3,45.
*/

#include <stdio.h> //Fun��o de entrada e sa�da
#include <locale.h> // Habilita o emprego de acentua��o em palavras

int main(){

    //Declara��o de vari�veis

    float reais;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite a quantia (em R$):");
    scanf("%f",&reais);

    //Sa�da de dados

    printf("\nR$%.2f equivale a US$%.2f \n",reais,reais/3.45);

    getchar(); //Pausa o programa
}


/*
    Nome: Rafael Gon�alves
    Descri��o:  Desenvolva um algoritmo que leia dois n�meros inteiros e mostre o somat�rio
                entre eles.


*/

#include <stdio.h> //Fun��o de entrada e sa�da
#include <locale.h> // Habilita o emprego de acentua��o em palavras

int main(){

    //Declara��o de vari�veis

    int a,b,soma;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite o valor de a:");
    scanf("%d",&a);
    printf("Digite o valor de b:");
    scanf("%d",&b);

    //C�lculos matem�ticos

    soma = a + b;

    //Sa�da de dados

    printf("\nA soma entre %d e %d � igual a %d",a,b,soma);


    getchar(); //Pauda o programa
}

/*
    Nome: Rafael Gonçalves
    Descrição:  Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
                entre eles.


*/

#include <stdio.h> //Função de entrada e saída
#include <locale.h> // Habilita o emprego de acentuação em palavras

int main(){

    //Declaração de variáveis

    int a,b,soma;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite o valor de a:");
    scanf("%d",&a);
    printf("Digite o valor de b:");
    scanf("%d",&b);

    //Cálculos matemáticos

    soma = a + b;

    //Saída de dados

    printf("\nA soma entre %d e %d é igual a %d",a,b,soma);


    getchar(); //Pauda o programa
}

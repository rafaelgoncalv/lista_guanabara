/*
    Nome: Rafael Gonçalves
    Descrição: Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
               sua terça parte.

*/

#include <stdio.h> //Função de entrada e saída
#include <locale.h> // Habilita o emprego de acentuação em palavras

int main(){

    //Declaração de variáveis

    float n;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite um número qualquer:");
    scanf("%f",&n);

    //Saída de dados

    printf("\nO número é %.2f",n);
    printf("\nO dobro de %.2f é %f",n,2*n); // O dobro
    printf("\nA terça parte de %.2f é %.2f",n,n/3); // A terça parte

    getchar(); //Pausa o programa
}

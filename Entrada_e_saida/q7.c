/*
    Nome: Rafael Gon�alves
    Descri��o: Crie um algoritmo que leia um n�mero real e mostre na tela o seu dobro e a
               sua ter�a parte.

*/

#include <stdio.h> //Fun��o de entrada e sa�da
#include <locale.h> // Habilita o emprego de acentua��o em palavras

int main(){

    //Declara��o de vari�veis

    float n;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite um n�mero qualquer:");
    scanf("%f",&n);

    //Sa�da de dados

    printf("\nO n�mero � %.2f",n);
    printf("\nO dobro de %.2f � %f",n,2*n); // O dobro
    printf("\nA ter�a parte de %.2f � %.2f",n,n/3); // A ter�a parte

    getchar(); //Pausa o programa
}

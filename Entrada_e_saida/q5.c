/*
    Nome: Rafael Gon�alves
    Descri��o: Fa�a um programa que leia as duas notas de um aluno em uma mat�ria e mostre
               na tela a sua m�dia na disciplina.

*/

#include <stdio.h> //Fun��o de entrada e sa�da
#include <locale.h> // Habilita o emprego de acentua��o em palavras

int main(){

    //Declara��o de vari�veis

    float nota1,nota2,media;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite nota1:");
    scanf("%f",&nota1);
    printf("Digite nota2:");
    scanf("%f",&nota2);

    //C�lculos matem�ticos

    media = (nota1 + nota2)/2;

    //Sa�da de dados

    printf("\nA m�dia entre %.2f e %.2f � igual %.2f",nota1,nota2,media);


    getchar(); //Pauda o programa
}

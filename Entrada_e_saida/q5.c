/*
    Nome: Rafael Gonçalves
    Descrição: Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
               na tela a sua média na disciplina.

*/

#include <stdio.h> //Função de entrada e saída
#include <locale.h> // Habilita o emprego de acentuação em palavras

int main(){

    //Declaração de variáveis

    float nota1,nota2,media;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite nota1:");
    scanf("%f",&nota1);
    printf("Digite nota2:");
    scanf("%f",&nota2);

    //Cálculos matemáticos

    media = (nota1 + nota2)/2;

    //Saída de dados

    printf("\nA média entre %.2f e %.2f é igual %.2f",nota1,nota2,media);


    getchar(); //Pauda o programa
}

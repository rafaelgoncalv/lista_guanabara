/*
    Nome: Rafael Gon�alves
    Descri��o:  Fa�a um algoritmo que leia a largura e altura de uma parede, calcule e
                mostre a �rea a ser pintada e a quantidade de tinta necess�ria para o servi�o,
                sabendo que cada litro de tinta pinta uma �rea de 2metros quadrados.
*/

#include <stdio.h> //Fun��o de entrada e sa�da
#include <locale.h> // Habilita o emprego de acentua��o em palavras

int main(){

    //Declara��o de vari�veis

    float largura,altura,area;
    int qtdtinta;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite a largura da parede (em metro):");
    scanf("%f",&largura);
    printf("Digite a altura da parede (em metro):");
    scanf("%f",&altura);

    //C�lculos matem�ticos
    area = largura * altura; // area
    qtdtinta = area/2; // quantidade de tinra

    //Sa�da de dados

    printf("\na area = %.2fm^2",area);
    printf("\n� de tintas = %d unidades \n",qtdtinta);

    getchar(); //Pausa o programa
}

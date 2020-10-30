/*
    Nome: Rafael Gonçalves
    Descrição:  Faça um algoritmo que leia a largura e altura de uma parede, calcule e
                mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
                sabendo que cada litro de tinta pinta uma área de 2metros quadrados.
*/

#include <stdio.h> //Função de entrada e saída
#include <locale.h> // Habilita o emprego de acentuação em palavras

int main(){

    //Declaração de variáveis

    float largura,altura,area;
    int qtdtinta;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite a largura da parede (em metro):");
    scanf("%f",&largura);
    printf("Digite a altura da parede (em metro):");
    scanf("%f",&altura);

    //Cálculos matemáticos
    area = largura * altura; // area
    qtdtinta = area/2; // quantidade de tinra

    //Saída de dados

    printf("\na area = %.2fm^2",area);
    printf("\nº de tintas = %d unidades \n",qtdtinta);

    getchar(); //Pausa o programa
}

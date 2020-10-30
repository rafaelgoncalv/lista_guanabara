/*
    Nome: Rafael Gonçalves
    Descrição:  Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
                segundo grau e mostre o valor de Delta.

*/

#include <stdio.h> //Função de entrada e saída

int main(){

    //Declaração de variáveis

    int a,b,c,delta; //ax +bx^2 +c

    //Entrada de dados

    printf("Digite os coeficente a, b e c:");
    scanf("%d%d%d",&a,&b,&c);

    //Cálculos matemáticos

    delta = b*b - 4*a*c; // Fórmula de delta

    //Saída de dados
    printf("\nf(x) = %dx^2 +%d*x + %d",a,b,c);
    printf("\ndelta = %d^2 - 4*%d*%d = %d \n",b,a,c,delta);


    getchar(); //Pausa o programa
}

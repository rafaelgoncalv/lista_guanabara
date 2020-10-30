/*
    Nome: Rafael Gon�alves
    Descri��o:  Desenvolva uma l�gica que leia os valores de A, B e C de uma equa��o do
                segundo grau e mostre o valor de Delta.

*/

#include <stdio.h> //Fun��o de entrada e sa�da

int main(){

    //Declara��o de vari�veis

    int a,b,c,delta; //ax +bx^2 +c

    //Entrada de dados

    printf("Digite os coeficente a, b e c:");
    scanf("%d%d%d",&a,&b,&c);

    //C�lculos matem�ticos

    delta = b*b - 4*a*c; // F�rmula de delta

    //Sa�da de dados
    printf("\nf(x) = %dx^2 +%d*x + %d",a,b,c);
    printf("\ndelta = %d^2 - 4*%d*%d = %d \n",b,a,c,delta);


    getchar(); //Pausa o programa
}

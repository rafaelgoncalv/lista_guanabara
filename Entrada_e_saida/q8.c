/*
    Nome: Rafael Gon�alves
    Descri��o: Desenvolva um programa que leia uma dist�ncia em metros e mostre os valores
               relativos em outras medidas.

*/

#include <stdio.h> //Fun��o de entrada e sa�da
#include <locale.h> // Habilita o emprego de acentua��o em palavras

int main(){

    //Declara��o de vari�veis

    float metro;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite uma medida (em metro):");
    scanf("%f",&metro);

    //Sa�da de dados

    printf("\n A dist�ncia de %.2f em metro corresponde a: \n",metro);

    printf("\n %f Km",metro/1000); //Convers�o das unidades de medida
    printf("\n %f Hm",metro/100);
    printf("\n %f Dm",metro/10);
    printf("\n %f dm",metro*10);
    printf("\n %f cm",metro*100);
    printf("\n %f mm \n",metro*1000);




    getchar(); //Pausa o programa
}

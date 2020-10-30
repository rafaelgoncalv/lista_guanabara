/*
    Nome: Rafael Gonçalves
    Descrição: Desenvolva um programa que leia uma distância em metros e mostre os valores
               relativos em outras medidas.

*/

#include <stdio.h> //Função de entrada e saída
#include <locale.h> // Habilita o emprego de acentuação em palavras

int main(){

    //Declaração de variáveis

    float metro;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite uma medida (em metro):");
    scanf("%f",&metro);

    //Saída de dados

    printf("\n A distância de %.2f em metro corresponde a: \n",metro);

    printf("\n %f Km",metro/1000); //Conversão das unidades de medida
    printf("\n %f Hm",metro/100);
    printf("\n %f Dm",metro/10);
    printf("\n %f dm",metro*10);
    printf("\n %f cm",metro*100);
    printf("\n %f mm \n",metro*1000);




    getchar(); //Pausa o programa
}

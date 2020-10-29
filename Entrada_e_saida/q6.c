/*
    Nome: Rafael Gonçalves
    Descrição:  Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
                sucessor.
*/

#include <stdio.h> //Função de entrada e saída
#include <locale.h> // Habilita o emprego de acentuação em palavras

int main()
{
    //Declaração de varáveis

    int n;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite um numero inteiro:"); //Imprime uma mensagem
    scanf("%d",&n); // Pega o valor e guarda na região da memória em que ela foi criada

    printf("\nO antecessor de %d é %d",n,n-1);
    printf("\nO sucessor de %d é %d",n,n+1);

    getchar();//Pausa o programa
}

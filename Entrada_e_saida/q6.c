/*
    Nome: Rafael Gon�alves
    Descri��o:  Fa�a um programa que leia um n�mero inteiro e mostre o seu antecessor e seu
                sucessor.
*/

#include <stdio.h> //Fun��o de entrada e sa�da
#include <locale.h> // Habilita o emprego de acentua��o em palavras

int main()
{
    //Declara��o de var�veis

    int n;

    //Entrada de dados

    setlocale(LC_ALL,"");
    printf("Digite um numero inteiro:"); //Imprime uma mensagem
    scanf("%d",&n); // Pega o valor e guarda na regi�o da mem�ria em que ela foi criada

    printf("\nO antecessor de %d � %d",n,n-1);
    printf("\nO sucessor de %d � %d",n,n+1);

    getchar();//Pausa o programa
}

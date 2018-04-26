#include <stdio.h>
#include <locale.h>

/*Faça um Programa que peça um número e então mostre a mensagem O número informado foi
[número].*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Insira um número inteiro:\n>> ");
    scanf("%d", &num);

    printf("\nO número informado foi %d.\n", num);

}

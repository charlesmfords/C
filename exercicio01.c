#include <stdio.h>
#include <locale.h>

/*Fa�a um Programa que pe�a um n�mero e ent�o mostre a mensagem O n�mero informado foi
[n�mero].*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Insira um n�mero inteiro:\n>> ");
    scanf("%d", &num);

    printf("\nO n�mero informado foi %d.\n", num);

}

/***********
Exercício 8
***********/

#include <stdio.h>

int main()
{
    int Input;
    printf("Digite um inteiro qualquer: ");
    scanf("%d", &Input);
    
    for(int i = 0; i <= 9; i++){
        int Tabuada = Input * i;
        printf("%d X %d = %d \n", Input, i, Tabuada);
    }
    
    return 0;
}
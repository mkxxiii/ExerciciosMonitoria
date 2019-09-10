/***********
Exercício 12
***********/

#include <stdio.h>

int main()
{
    //Esta flag é um auxiliar para controlar quando o progama irá parar
    int Flag = 0;

    int Input;
    int Soma = 0;

    while(Flag == 0){
        printf("Digite um Numero Positivo: ");
        scanf("%d", &Input);
        if(Input > 0){
            Soma = Soma + Input;
            printf("Soma realizada com sucesso\n\n\n");
            if(Input > 1000){
                //Troca a Flag para parar o programa
                Flag = 1;
            }
        }
    }

    printf("A soma de todos os seus numeros validos e: %d", Soma);
    return 0;
}

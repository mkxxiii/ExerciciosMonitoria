/***********
Exercício 7
***********/

#include <stdio.h>

int main()
{
    double MaiorValor, MenorValor, Input;
    
    for(int i = 1; i <= 15; i++){
        printf("Digite um Numero Real: ");
        scanf("%lf", &Input);
        if(i == 1){
            MaiorValor = Input;
            MenorValor = Input;
        }
        else{
            if(Input > MaiorValor){
                MaiorValor = Input;
            }
            
            if(Input < MenorValor){
                MenorValor = Input; 
            }
        }
    }
    
    printf("\nMaior Numero: %lf\n", MaiorValor);
    printf("Menor Numero: %lf\n", MenorValor);
    return 0;
}
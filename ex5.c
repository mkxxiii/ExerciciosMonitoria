/***********
Exercício 5
***********/

#include <stdio.h>

int main()
{
    char Sexo;
    double Altura, PesoIdeal;
    
    printf("Qual o seu Sexo?\n");
    printf("M - Masculino | F -Feminino\n ->");
    scanf("%c", &Sexo);
    
    //Valida o Sexo
    if(Sexo != 'M' && Sexo != 'm' && Sexo != 'F' && Sexo != 'f' ){
        printf("Favor informar um Sexo Válido!");
        return 1;
    }
    
    printf("Insira sua altura em m (metros): ");
    scanf("%lf", &Altura);
    
    if(Sexo == 'M' || Sexo == 'm'){
        PesoIdeal = (72.7 * Altura) - 58;
    }
    else{
        PesoIdeal = (62.1 * Altura) - 44.7;
    }
    
    printf("A Peso Ideal e: %.2lf Kg", PesoIdeal);
    return 0;
}
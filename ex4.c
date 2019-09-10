/***********
Exercício 4
***********/

#include <stdio.h>

int main()
{
    /* 
    O tipo de variavel 'double' serve para guardar numeros decimais
    com mais precisao que o tipo 'float'
       
    Para usar no printf e scanf: %lf
        scanf("%lf", &Variavel);
        printf("%lf", Variavel);
    */
    double CustoFabrica;
    printf("Digite o Custo de Fábrica do Carro: R$ ");
    scanf("%lf", &CustoFabrica);
    
    double Distribuidor = CustoFabrica * 0.28;
    double Imposto =  CustoFabrica * 0.45;
    double CustoConsumidor = CustoFabrica + Distribuidor + Imposto;
    
    /*
    Ao usar %.2lf, podemos dizer quantas casas decimais aquele valor
    assumir.
        %.2lf  - 2 casas decimais
        %.4lf - 4 casas decimais
    */
    
    printf("O carro custa ao todo: %.2lf", CustoConsumidor);
    return 0;
}
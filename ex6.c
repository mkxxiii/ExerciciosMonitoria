/***********
Exercício 6
***********/

#include <stdio.h>

int main()
{
    int CodigoCargo;
    double SalarioInicial, SalarioFinal, Aumento;
    
    printf("Digite o codigo do seu Cargo: ");
    scanf("%d", &CodigoCargo);
    
    printf("Digite seu salario atual: R$ ");
    scanf("%lf", &SalarioInicial);
    
    if(CodigoCargo == 101){
        Aumento = SalarioInicial * 0.1;
        SalarioFinal = SalarioInicial + Aumento;
    }
    else if(CodigoCargo == 102){
        Aumento = SalarioInicial * 0.2;
        SalarioFinal = SalarioInicial + Aumento;    
    }
    else if(CodigoCargo == 103){
        Aumento = SalarioInicial * 0.3;
        SalarioFinal = SalarioInicial + Aumento;    
    }
    else{
        Aumento = SalarioInicial * 0.4;
        SalarioFinal = SalarioInicial + Aumento;    
    }
    
    printf("Salário Atual: R$ %.2lf\n", SalarioInicial);
    printf("Aumento      : R$ %.2lf\n", Aumento);
    printf("novo Salário : R$ %.2lf\n", SalarioFinal);
    
    return 0;
}
#include<stdio.h>

int main(){
    float peso, altura, idade, ano, dia, var=0, var1=0, var2=0;
    scanf("%f",& peso);
    scanf("%f", &altura);
    scanf("%f",& idade);
    scanf("%f",& ano);
    scanf("%f",& dia);
    var = (peso + altura)/idade;
    var1 = (var + ano)*dia;
    idade = idade +7;
    var2 = (var1 - 33)*idade;
    
    
    printf("%f",var2);
    
    
}

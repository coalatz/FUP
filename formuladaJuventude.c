#include<stdio.h>

int main(){
    float peso, altura, idade, ano, dia, var=0, var1=0;
    scanf("%f",& peso);
    scanf("%f",& altura);
    scanf("%f",& idade);
    scanf("%f",& ano);
    scanf("%f",& dia);
    var = (peso + altura)/idade;
    var1 = (var + ano)*dia;
    printf("%f",var1);
}

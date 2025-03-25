#include<stdio.h>
#include<stdlib.h>


int main()
{
    int idade = 0;
    char sexo;
    printf("Quantos anos voce tem?\n");
    scanf("%d",&idade);
    printf("Me diga o seu sexo | M(asculino) F(eminino) |\n");
    scanf(" %c", &sexo);
    if(idade >= 18 && (sexo == 'M' || sexo == 'm'))
    {
        printf("Voce deve se alistar!!!\n");
    }
    if(idade >=18 && (sexo == 'F' || sexo == 'f'))
    {
        printf("Você pode se alistar\n");
    } 
    if(idade < 18)
    {
        printf("Voce nao pode se alistar!!!\n");
    }
return(0);
}
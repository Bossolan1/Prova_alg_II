#include<stdio.h>
#include<stdlib.h>

int main()
{
int dia = 0, mes = 0, ano = 0;


    printf("Em que dia você nasceu?\n");
    scanf("%d", &dia);
    printf("Em que mes você nasceu?\n");
    scanf("%d", &mes);
    printf("Em que ano você nasceu?\n");
    scanf("%d", &ano);
        
    if(ano <= 2025 && (mes >=1 && mes <= 12))
    {
        if(mes == 2)
        {
            if(ano % 4 == 0)
            {
                if(dia >= 1 && dia <= 29)
                {
                    printf("Data valida!\n");
                }
                else
                {  
                    printf("Data invalida!\n");
                }
            }
            else
            {
                if(dia >= 1 && dia <= 28)
                {
                    printf("Data valida\n");
                }
                else
                {  
                    printf("Data invalida!\n");
                }
            }            
        }
        if(mes % 2 == 0 && mes != 2)
        {
        printf("oi\n");
            if(dia >= 1 && dia <= 30)
            {
                printf("Data valida!");
            }
            else
            {  
                printf("Data invalida!\n");
            }
        }
        else if(mes != 2)
        {
        printf("oi 2\n");
            if(dia >= 1 && dia <= 31)
            {
                printf("Data valida!\n");
            }
            else
            {  
                printf("Data invalida!\n");
            }
        }
    }

return(0);
}
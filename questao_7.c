#include<stdio.h>
#include<stdlib.h>

int main()
{
int v1 = 0,v2 = 0,v3 = 0,b = 0,nul =0,n = 0;
    for(int i = 0; i < 20; i ++)
    {
        printf("Ola me diga qual sera seu voto \n|[1] = B | [2] = K | [3] = z | [123]nulo | [0]Branco\n");
        scanf("%d", &n);
        if(n == 1)
        {
            v1++;
        }
        if(n == 2)
        {
            v2++;
        }
        if(n == 3)
        {
            v3++;
        }
        if(n == 123)
        {
            nul++;
        }
        if(n == 0)
        {
            b++;
        }
    }
    printf("\t----------------------------------\n");
    printf("\t|           Resultado              |\n");
    printf("\t----------------------------------\n");
    printf("\t|Votos para B = %d                 |\n", v1);
    printf("\t|Votos para K = %d                 |\n", v2);
    printf("\t|Votos para Z = %d                 |\n", v3);
    printf("\t|Votos para Brancos = %d           |\n", b);
    printf("\t|Votos para Nulos = %d             |\n", nul);
    printf("\t------------------------------------\n");
return(0);
}
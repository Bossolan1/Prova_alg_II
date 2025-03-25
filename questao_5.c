#include<stdio.h>
#include<stdlib.h>

int main()
{
int n = 0 , d = 0, i = 2, aux = 0,p1 = 0,p2 = 0;
    printf("me diga um valor\n");
    scanf("%d", &n);
    while(n != 0)
    {
        aux = i;
        while(aux != 0)
        {
            if(i % aux == 0)
            {
                d++;
            }
            aux--;
        }
        if(d <= 2)
        {
        p1 = i;
        d = 0;
        i += 2;
        aux = i;
        while(aux != 0)
        {
            if(i % aux == 0)
            {
                d++;
            }
            aux--;
        }
        if(d <= 2 && i != 4)
        {
            p2 = i;
            n -= 1;
            printf("Primos gemeos detectado! %d %d faltam %d \n",p1 , p2, n);
        }   
        }
        i++;
        p1 = 0;
        p2 = 0;
        d = 0;
    }
return(0);
}
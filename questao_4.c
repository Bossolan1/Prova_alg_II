#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, aux = 0;
    printf("me diga 5 valores\n");
    scanf("%d %d %d %d %d", &a , &b ,&c , &d , &e);
    for(int i = 0; i < 5; i++)
    {
    if(a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if(b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    if(c > d)
    {
        aux = c;
        c = d;
        d = aux;
    }
    if(d > e)
    {
        aux = d;
        d = e;
        e = aux;
    }

    }
    printf("%d %d %d %d %d\n",a,b,c,d,e);
    printf("%d %d %d %d %d\n",e,d,c,b,a);
return(0);
}
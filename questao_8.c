#include<stdio.h>
#include<stdlib.h>


int main()
{
int v[5], aux;
    for(int i = 0; i < 5 ; i++)
    {
        printf("Me diga o %d° valor\n",i+1);
        scanf(" %d", &v[i]);
    }
    for(int i = 0; i< 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for(int i =0; i < 5; i++)
    {
        printf(" %d ",v[i]);
    }
    printf("\n");
return(0);
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
unsigned long long int nya = 0, fatoworial = 0;
    printf("Me diga um nuwumewwrowo\n");
    scanf("%llu", &nya);  
    fatoworial = nya;
    printf("%llu ",nya);
        for(int i = nya - 1; i > 1; i--)
        {
            printf("* %llu ", i);
            fatoworial *= i;
        }
        printf(" = %llu eh owo seuwu nyameru fatoworial\n", fatoworial);

return(0); 
}
#include<stdio.h>
int main()
{
    float tk;
    scanf("%f",&tk);
    if(tk>=5000)
    {
        printf("going to cox\n");
        if(tk>=6000)
        {
            printf("Let's go Saint Martin\n");
        }
        else
        {
            printf("Come Back Home\n");
        }
 
    }
    else
    {
        printf("Donot go\n");
    }


    return 0;
}
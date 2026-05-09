#include<stdio.h>
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\n",i);// if i put this line before if statement it works different then comes 5 becuase that time program dont know where he need to stop when it comes 5 and go to if then he know he need to stop
    }

    return 0;
}
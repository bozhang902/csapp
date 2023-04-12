#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;

    scanf("%d%d", &a,&b);
    if (a^b)
    {
        printf("a and b is not equal \n");
    }
    else
    {
        printf("a and b is equal \n");
    }
    
    return 0;
}



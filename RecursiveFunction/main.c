#include <stdio.h>

int function(int x);

int main()
{
    int i;              
    int n = 3;   

    for(i = 0; i <= n; i++)
        printf("f(%d) = %d\n", i, function(i));

    return 0;
}


int function(int x)
{
    if (x <= 0) 
        return 0;
    return (function(x - 1) + 2);
}
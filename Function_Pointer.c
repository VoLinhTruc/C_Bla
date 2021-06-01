int cong(int a, int b)
{
    return a+b;   
}

int tru(int a, int b)
{
    return a-b;   
}

int nhan(int a, int b)
{
    return a*b;   
}

int chia(int a, int b)
{
    return a/b;   
}


void (*phep_tinh[])() = {cong, tru, nhan, chia};


#include <stdio.h>

int main()
{
    int (*func)(int a, int b) = phep_tinh[1];
    printf("%d \r\n", func(2, 3));

    return 0;
}

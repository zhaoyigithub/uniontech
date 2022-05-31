#include <iostream>

int fun_add(int a, int b)
{
    printf("a=%d; b=%d\n",a, b);
    return a+b;
}

int main()
{
    int a=2;
    int b=3;
    int c=0;
    printf("hello world!\r\n");
    c = fun_add(a,b);
    printf("c=%d\n",c);
    return 0;
}

#include<stdio.h>
int main()
{
    char a[30];
    int b;
    scanf("Enter your name %[^\n] and your Age %d",a,&b);
    printf("Your name is %s and you are %d years old",a,b);
    return 0;
}
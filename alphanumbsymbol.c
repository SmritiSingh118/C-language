#include <stdio.h>
void main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);
    if (a>='A'&& a<='Z'||a>='a' && a<='z')
    {
        printf("it is alphabet");
    }
    else if (a>='0' && a<='90')
    {
        printf("it is number");
        
    }
    else
    {
        printf("it is special symbol");
    }
}

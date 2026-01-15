#include <stdio.h>
void main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);
    if (a=='a'|| a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='O' || a=='U' || a=='I')
    {
        printf("it is a vowel");
    
    }
    else if (a>='a' && a<='z' || a>='A' && a<='Z')
    {
        printf("it is consonant");
        
    }
    else
    {
        printf("invalid");
        
    }
}

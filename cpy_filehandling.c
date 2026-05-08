#include <stdio.h>

int main()
{
    FILE *inp;
    FILE *cop;
    inp=fopen("hello.txt","w");
    fprintf(inp,"HIII how are u");
    fclose(inp);
    inp=fopen("hello.txt","r");
    cop=fopen("bye.txt","w");
    char ch;
    while(fscanf(inp,"%c",&ch)!=EOF){
        fprintf(cop,"%c",ch);
    }
    fclose(inp);
    fclose(cop);
    cop=fopen("bye.txt","r");
    while(fscanf(cop,"%c","&ch")!=EOF){
        printf("%c",ch);
    }return 0;
}

#include <stdio.h>
int main()
{
float mynum[]={1.9,2.8,7.6};
int length= sizeof(mynum)/ sizeof(mynum[0]);
printf("%d", length);
return 0;
}

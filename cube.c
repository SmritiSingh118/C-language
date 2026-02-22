int cube(int);
#include <stdio.h>
int main(){
    int a;
    printf("enter th enumber");
    scanf("%d",&a);
    cube(a);
    return 0;
}
int cube(int a){
    int c;
    c=a*a*a;
    printf("%d",c);
    return 0;
}

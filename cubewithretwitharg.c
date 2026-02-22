int cube();
#include <stdio.h>
int main(){
    int a,z;
    printf("enter th enumber");
    scanf("%d",&a);
    z=cube(a);
    printf("cube is %d",z);
    return 0;
}
int cube(int a){
    int c;
    c=a*a*a;
   
    return c;
}

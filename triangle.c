#include <stdio.h>
int main()
{
  float s1,s2,s3;
printf("enter s1,s2 and s3");
scanf("%f%f%f",&s1,&s2,&s3);
if(s1==s2 && s1==s3)
{
  printf("equilateral triangle");
}
else if(s1==s1 || s1==s3 || s2==s3)
{
  printf("isosceles triangle");
}
else
{
printf("scalene triangle");
}
}

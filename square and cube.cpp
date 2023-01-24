#include<stdio.h>
#include<math.h>
int main()
{
float a,sq,cu;
printf("enter a number:");
scanf("%f",&a);
sq=pow(a,2);
printf("square of %f is %f\n",a,sq);
cu=pow(a,3);
printf("cube of %f is %f\n",a,cu);
}

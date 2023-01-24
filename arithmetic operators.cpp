#include<stdio.h>
#include<math.h>
int main(){
int a,s,m,d,p,x,y,op;
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
printf("1=add\n 2=sub\n 3=mul\n 4=div\n 5=pow\n");
printf("enter your choice:");
scanf("%d",&op);
switch(op){
case 1:
	a=x+y;
    printf("a(x,y):%d",a);
    break;
case 2:
	s=x-y;
    printf("s(x,y):%d",s);
    break;
case 3:
    m=x*y;
    printf("m(x,y):%d",m);
    break;
case 4:
    d=x/y;
    printf("d(x,y):%d",d);
    break;
case 5:
	p=pow(x,y);
    printf("p(x,y):%d",p);
    break;  
}
}
 


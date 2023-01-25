#include<stdio.h>
double square(double num){
	return(num*num);
}
int main(){
	int num;
	double n;
	printf("enter the number:");
	scanf("%d",&num);
	n=square(num);
	printf("the square of %d is %f",num,n);
}

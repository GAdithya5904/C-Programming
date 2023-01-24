#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){
	int i,fact=1,n;
	printf("enter the value:");
	if(scanf("%d",&n))
	{
	if(n>0)
	{
		for(i=1;i<=n;i++){
	    fact*=i;}
	    printf("the factorial of %d is %d",n,fact);}}
	else
	printf("the input is not integer:");  
	
	
}

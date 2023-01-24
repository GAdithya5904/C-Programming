#include<stdio.h>
#include<math.h>
int main(void){
	double age;
	printf("enter your age:");
	scanf("%lf",&age);
	if(age>=18){
		printf("you are eligible for voting");
	}
	else{
		printf("you are allowed to vote after %d years",18-age);
	}
}

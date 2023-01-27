#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int a,*p;
	printf("input a string:");
	scanf("%s",&str);
	a=strlen(str);
	p=&a;
	printf("the length of string is :%d",*p);
}

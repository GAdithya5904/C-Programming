#include<stdio.h>
struct library{
	char title[50];
	char authour[50];
	char subject[50];
	int id;
	int n;
}s;
int main(){
	int i;
	printf("enter the no.of books:");
	scanf("%d",&s.n);
	for(i=0;i<=s.n;i++){
	printf("enter the book title:");
	fgets(s.title,sizeof(s.title),stdin);
	printf("enter the authour:");
	fgets(s.authour,sizeof(s.authour),stdin);
	printf("enter the subject:");
	fgets(s.subject,sizeof(s.subject),stdin);
	printf("enter the id:");
	scanf("%d",&s.id);
	printf("sample output:\n");
	printf("book title:%s\n",s.title);
	printf("book authour:%s\n",s.authour);
	printf("book subject:%s\n",s.subject);
	printf("book id:%d\n",s.id);
}
}

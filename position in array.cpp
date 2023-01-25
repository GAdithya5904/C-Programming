#include<stdio.h>
int main(){
	int a[100],e,n,i;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched:\n");
	scanf("%d",&e);
	for(i=0;i<n;i++){
	if(a[i]==e){
		printf("given element %d is found at %dth position",e,i);
	}
	
	
}
}

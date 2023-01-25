#include<stdio.h>
#include<math.h>
int main(){
	int i,n,a[100],count=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements :\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			continue;
		}
		else{
			++count;
		}
		
			printf("total negative numbers is %d",count);
		
	}
}

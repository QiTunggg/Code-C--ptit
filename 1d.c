#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=n;j>=0;j--){
			if(j>i){
				printf(" ");
			} 
			else{
				printf("*");
			} 
		}
		printf("\n");
	}
}

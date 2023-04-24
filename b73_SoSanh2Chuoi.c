#include<stdio.h>
#include<string.h>
int my_strcmp(char x1[],char x2[]){
	int ketQua = 0;
	size_t len1 = strlen(x1);
	size_t len2 = strlen(x2);
	size_t min = len1<len2?len1:len2;
	int i;
	for( i = 0 ; i < min ; i++){
		ketQua = x1[i] - x2[i];
		if(ketQua!=0) break;
	}
	if(ketQua>0)
		return 1;
	else if(ketQua<0)
		return -1;
	else 
		return 0;
}

int main()
{
	char s1[50],s2[50];
	printf("\nNhap vao s1:");
	fgets(s1,sizeof(s1),stdin);
	printf("\nNhap vao s2:");
	fgets(s2,sizeof(s2),stdin);
	printf("Ket qua so sanh: %d",strcmp(s1,s2));
	printf("\n---------\n");
	printf("Ket qua so sanh*: %d",my_strcmp(s1,s2));
}	


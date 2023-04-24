#include<stdio.h>
#include<limits.h>
int a[100];
int n;
//A: 5 3 1 3 3 4 6 5
//B: 1 1 5 4 3 2 1 1 

void nhapMang(int x[100], int *n){
	int i;
	do {
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", n);
	}while(*n<1);
	for( i=0; i<*n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[100], int n){
	printf("\n");
	printf("Gia tri cua mang la: ");
	int i; 
	for( i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

int timMax(int x[100], int n){
	int max = x[0];
	int i; 
	for( i=0; i<n; i++){
		if(x[i]>max)
			max = x[i];
	}
	return max;
}
void inMangConKhongGiam(int x[100], int n){
	int b[100];
	int i,j; 
	for( i=0; i<n; i++){
		b[i]=1;
	}
	
	for( i=n-1; i>0; i--){
		if(x[i]>=x[i-1]){
			b[i-1]=b[i]+1;
		}
	}
	printf("\nMang B: ");
	xuatMang(b, n);
	
	int soLuong = timMax(b, n);
	for( i=0; i<n; i++){
		if(b[i]==soLuong){
			printf("\nMang khong giam dai nhat: ");
			for( j=i; j<soLuong+i; j++)
				printf("%d ", x[j]);
		}
	}
}


int main(){
	printf("-------\n");
	nhapMang(a, &n);
	xuatMang(a, n);
	inMangConKhongGiam(a, n);
}


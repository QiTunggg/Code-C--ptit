#include <stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int a[m][n],i,j;
	for ( i = 0; i < m; i++) {
		for ( j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	int cot1, cot2;
	scanf("%d %d", &cot1, &cot2);
	for ( i = 0; i < m; i++) {
		for ( j = 0; j < n; j++) {
			if (j == cot1 - 1) printf("%d ", a[i][cot2-1]);
			else if (j == cot2 - 1) printf("%d ", a[i][cot1-1]);
			else printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

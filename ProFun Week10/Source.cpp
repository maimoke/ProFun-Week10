#include<stdio.h>
int main()
{
	int m = 0, n = 0, a[100][100] = { NULL }, b[100][100] = {NULL}, i = 0, j = 0;
	scanf_s("%d %d", &m, &n);

	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
	scanf_s("%d",&a[i][j]);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &b[i][j]);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]+b[i][j]);
			printf("\n");

	}



	return 0;
}
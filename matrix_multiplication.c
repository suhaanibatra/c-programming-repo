#include <stdio.h>

int main(void)
{
	int r1,c1,r2,c2;
	int A[20][20], B[20][20];

	printf("Enter dimensions of first matrix: ");
	scanf("%d %d",&r1,&c1);

	printf("Enter dimensions of second matrix: ");
	scanf("%d %d",&r2,&c2);

	if(c1 != r2)
	{
		printf("Matrix multiplication not possible\n");
		return 1;
	}

	printf("Enter the elements for first matrix:\n");
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}

	printf("Enter the elements for second matrix:\n");
	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	int pro;
	printf("Matrix Multiplication is ::\n");
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			pro = 0;

			for(int k = 0; k < c1; k++)
			{
				pro += A[i][k] * B[k][j];
			}
			printf("%5d",pro);
		}
		printf("\n");
	}
	return 0;
}

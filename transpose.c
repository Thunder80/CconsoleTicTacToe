#include<stdio>

int main()
{
	int ch;

	int run = 1;
	while(run == 1)
	{
		int n, m;
		printf("Enter dimensions of array - ");
		scanf("%d %d", &n, &m);
		int a[n][m];
		int i, j;
		for(i = 0;i < n;i++)
		{
			for(j = 0;j < n;j++)
			{
				printf("Enter a no. ");
				scanf("%d", &a[i][j]);
			}
		}

		printf("1. Tranpose\n");
		printf("2. Principal diagonal elements\n");
		printf("3. Non-principal diagonal elements\n");
		printf("4. Boundary elements\n");
		printf("5. Exit\n");

		printf("Enter choice - ");
		scanf("%d", &ch);

		swtich(ch){
			case 1 : for(i =)
		}

	}
}
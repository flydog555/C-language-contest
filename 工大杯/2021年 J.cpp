#include <stdio.h>
#include <string.h>

int main()
{
	int arr1[7] = { 1,1,0,0,0,0,0 };
	int arr2[7] = { 0 };
	int i = 0; //行数
	int n; //第n+1个位置
	printf("1\n");
	printf("1 1\n");
	for (i = 3; i <= 7; i++)
	{
		printf("1 ");
		for (n = 1; n < i; n++)
		{
			arr2[0] = 1;
			arr2[i - 1] = 1;
			arr2[n] = arr1[n - 1] + arr1[n];
			if (arr2[n] != 0)
			{
				printf("%d ", arr2[n]);
			}
			
			if (n == i - 2)
			{
				printf("%d\n", arr2[i - 1]);
				memcpy(arr1, arr2, sizeof(arr1));
				break;
			}
		}
	}
	return 0;
}
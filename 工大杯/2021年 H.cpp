#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

float distance(int a, int b, int c, int d)
{
	float sum = sqrt(pow((a - c), 2) + pow((b - d), 2));
	return sum;
}

int main()
{
	int n,i;
	int a, b, c, d;
	float arr[10];
	int A = 0;
	int B = 0;
	int C = 0;
	int sign = 0;
	scanf("%d", &n);
	getchar();
	for (i = 1; i <= n; i++)
	{
		scanf("(%d,%d) (%d,%d)", &a, &b, &c, &d);
		getchar();
		arr[i - 1] = distance(a, b, c, d);
	}
	for (i = 0; i <= n-2; i++)
	{
		if (arr[i] == 0)
		{
			printf("OHHH\n");
			//sign = 1;
			break;
			
		}
		else
		{
			if (arr[i] < arr[i + 1])
			{
				A++;
			}
			else  if (arr[i] == arr[i + 1])
			{
				B++;
			}
			else if (arr[i] > arr[i + 1])
			{
				C++;
			}
		}
		
	}
	if (sign == 0)
	{
		if (A == n-1  && B == 0 && C == 0)
		{
			printf("NO");
		}
		else if (A == 0 && B == n-1  && C == 0)
		{
			printf("PARALLEL");
		}
		else if (A == 0 && B == 0 && C == n-1 )
		{
			printf("YES");
		}
		else
		{
			printf("COMPLICATED");
		}
	}
	
	return 0;
}
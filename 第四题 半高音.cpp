#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    char arr[8] = "CDEFGAB";
    char input;
    scanf("%c", &input);
    int t = 0;
    for (int a = 0;a<7;a++)
    {
        if (input == arr[2])
        {
            printf("F");
            break;
        }
        else
        {
            if (input == arr[6])
            {
                printf("C");
                break;
            }
            else
            {
                if (input == arr[t])
                {
                    printf("%c#", arr[t]);
                    break;
                }
                t++;
            }
        }
        
    }
    return 0;
}
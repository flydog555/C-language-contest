#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
int main()
{
    // 请在此输入您的代码
    char arr[8] = "CDEFGAB";
    char input;
    scanf("%c", &input);
    int t = 0; //t表示数组的位数
    for (int a = 0;a < 7;a++)
    {
        if (input == arr[2])//1特殊情况E
        {
            printf("F");
            break;
        }
        else if (input == arr[6])//2特殊情况B
        {
            printf("C");
            break;
        }
        else if (input == arr[t])//3正常情况
        {
            printf("%c#", arr[t]);//
            break;//直到匹配到正确的位数跳出循环
        }
        else
        {
            t++;//t的位数向后挪一位，再试一遍3
        }
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
int main()
{
    // ���ڴ��������Ĵ���
    char arr[8] = "CDEFGAB";
    char input;
    scanf("%c", &input);
    int t = 0; //t��ʾ�����λ��
    for (int a = 0;a < 7;a++)
    {
        if (input == arr[2])//1�������E
        {
            printf("F");
            break;
        }
        else if (input == arr[6])//2�������B
        {
            printf("C");
            break;
        }
        else if (input == arr[t])//3�������
        {
            printf("%c#", arr[t]);//
            break;//ֱ��ƥ�䵽��ȷ��λ������ѭ��
        }
        else
        {
            t++;//t��λ�����Ųһλ������һ��3
        }
    }
    return 0;
}
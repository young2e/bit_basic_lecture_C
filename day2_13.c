#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1. 1 ~ 50 �߿� 2�� ����� ã�Ƽ� ����Ͻÿ�.

int main()
{
    int num = 1,  mult = 2;

    while (num < 51)
    {
        // num % 2 ---> 2�� ���� ������
        // 2�� ���� �������� 0�� ���� 2�� �����.
        // 0�� ����, 1�� ���ε� �츮�� ã�°� 2�� ����̹Ƿ�
        // 0�� ������ �����Ͽ� ������ ������ �����.
        if (!(num % 2))
        //if(num % 2 == 0) - ���� �ڵ�� ������ �ǹ����� �ӵ��� ���� ��찡 �� ������.
        {
            printf("num = %d\n", num);
        }
        num++;
    }

    return 0;
}
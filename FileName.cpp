#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�������Ǵ�ӡ�á�* ����ɵ�X��ͼ����

int main()
{
    int a, i = 0, j = 0;
    while (scanf("%d", &a) != EOF)//���Զ�����
    {
        for (i = 0; i < a; i++)//��������
        {
            for (j = 0; j < a; j++)//��������
            {
                if (i == j || (i + j) == a - 1)//�൱��Խ���Ҫ��ӡ*
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");//ѭ����ɺ���
        }
    }


    return 0;
}
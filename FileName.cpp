#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//该任务是打印用“* ”组成的X形图案。

int main()
{
    int a, i = 0, j = 0;
    while (scanf("%d", &a) != EOF)//可以多次输出
    {
        for (i = 0; i < a; i++)//定义行数
        {
            for (j = 0; j < a; j++)//定义列数
            {
                if (i == j || (i + j) == a - 1)//相当与对角线要打印*
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");//循环完成后换行
        }
    }


    return 0;
}
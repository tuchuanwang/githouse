/*************************************************************************
	> File Name: train-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 16时57分51秒
 ************************************************************************/

#include<stdio.h>

void increment(int x)
{
    int y = 0;
    y = x + 1;
    printf("befer:%d  after:%d \n", x, y);
}

int main(int argc, char *argv[])
{
    int i = 1, j = 2;
    increment(i);
    increment(j);
    return 0;
}

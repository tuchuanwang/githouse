/*************************************************************************
	> File Name: ex3-4.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 16时46分39秒
 ************************************************************************/

#include<stdio.h>

void print_time(int hour, int minute)
{
    printf("%d:%d\n", hour, minute);
}

int main(int argc, char *argv[])
{
    print_time(23, 59);

    return 0;
}

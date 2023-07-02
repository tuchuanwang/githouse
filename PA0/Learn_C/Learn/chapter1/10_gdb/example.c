/*************************************************************************
	> File Name: example.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月01日 星期六 21时31分41秒
 ************************************************************************/

#include<stdio.h>

int add_range(int low, int high)
{
	int i, sum;
	sum = 0;
	i = 0;
	for (i = low; i <= high; i++)
		sum = sum + i;
	
	return sum;
}


int main(int argc, char *argv[])
{
		int result[100];
		result[0] = add_range(1, 10);
	    result[1] = add_range(1, 100);
		printf("result[0]=%d\nresult[1]=%d\n", result[0], result[1]);
		return 0;
}

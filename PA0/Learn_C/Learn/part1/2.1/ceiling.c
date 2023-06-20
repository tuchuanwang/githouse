/*************************************************************************
	> File Name: ceiling.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月19日 星期一 22时01分58秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
	int	x=15, n=4;
	printf("floor:%d/%d=%d \n",x,n,x/n);
	printf("%d/%d=%f \n",x,n,x/(n*1.0));

//ceiling
	int f;
	f=(x+n-1)/n;

	int g;
	printf("ceiling:%d/%d=%d \n",x,n,f);

	return 0;
}

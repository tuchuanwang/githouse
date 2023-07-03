/*************************************************************************
	> File Name: e1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月03日 星期一 20时56分17秒
 ************************************************************************/

//定长结构体
#include<stdio.h>

#define MAX_DATA 10
#define MAX_ROWS 10

struct Address {
	int id;
	int set;
	char name[MAX_DATA];
	char email[MAX-DATA];
};

struct Database {
	struct Address rows[MAX_ROWS];
};

int main(int argc, char *argv[])
{
	
	return 0;
}

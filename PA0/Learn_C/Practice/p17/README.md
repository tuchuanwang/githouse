练习17：堆和栈的内存分配

# 函数的解析： 	
### 1, 定长结构体

	struct Address rows[MAX_ROWS]

### 2,文件类型的指针	
	
		FILE *file

  声*明 file是指针，用来指向FILE类型的对象。
*file是指向文件结构体的指针变量，通过fp可找到存放某个文件信息的结构变量，根据这个结构变量的信息找到该文件，实施对文件的操作。file通常被成为一个指向文件的指针。

### 3, die(const char *message)
停止函数，小程序中如果出现错误可以直接消灭掉。

	perror()     头文件<stdio.h>
用来将上一个函数发生错误的原因输出到标准设备。

	erron  错误码 
Linux中系统调用的错误都存储在errno中，errno由操作系统维护，存储就近发生的错误，及下一次的错误会覆盖掉上一次的错误。
#### 打印错误信息： 可以参考[Linux errno详解]: https://www.cnblogs.com/Jimmy1988/p/7485133.html
#### 1) perror
		头文件：#include<stdio.h>
		函数原型： void perror(const char*s)
作用：打印系统错误信息
#### 2）strerror
		头文件 #include<stdio.h>
		函数原型: char *strerror(int errnum);
将错误码以字符串的信息显示出来

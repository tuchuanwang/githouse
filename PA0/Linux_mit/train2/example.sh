##########################################################################
# File Name: example.sh
# Author: WangZhen
# mail: 1240306894@qq.com
# Created Time: 2023年06月19日 星期一 15时59分51秒
#########################################################################
#!/bin/zsh
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH
######
#echo "Staring program at $(data)" #date

#echo "Running program $0 with $# arguments with pid $$"

#for filr in "$@"ldo
#	grep foobar "$file" > /dev/null 2> /dv/null

#	if[[]]

#!/bin/bash

echo "Starting program at $(date)" # date会被替换成日期和时间

echo "Running program $0 with $# arguments with pid $$"

for file in "$@"; do
    grep foobar "$file" > /dev/null 2> /dev/null
    # 如果模式没有找到，则grep退出状态为 1
    # 我们将标准输出流和标准错误流重定向到Null，因为我们并不关心这些信息
    if [[ $? -ne 0 ]]; then
        echo "File $file does not have any foobar, adding one"
        echo "# foobar" >> "$file"
    fi
done

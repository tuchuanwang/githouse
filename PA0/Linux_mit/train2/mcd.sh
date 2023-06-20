##########################################################################
# File Name: mcd.sh
# Author: WangZhen
# mail: 1240306894@qq.com
# Created Time: 2023年06月19日 星期一 15时34分34秒
#########################################################################
#!/bin/zsh
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH
mcd ()
{
	mkdir -p "$1"
	cd "$1"""
}

#include <stdio.h>



//program too determine time of the system using time syscall
//you can use %Y %M %D %S ... arguments to implement this syscall as well as you want!


int main()
{
	execlp("date","date",NULL);
	return 0;
}

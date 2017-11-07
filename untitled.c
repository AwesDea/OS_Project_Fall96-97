#include <stdio.h>

int main()
{
	execlp("top","-n 1",NULL);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("top -n 1 | grep \"CPU:\" | cut -d \" \" -f2 ");
	return 0;
}
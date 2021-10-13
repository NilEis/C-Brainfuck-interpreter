#include <stdio.h>
#include "include/interpreter.h"

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		return -1;
	}
	else if (argc > 2)
	{
		printf("%s\n", interpreter_init(argv[1]));
		return 0;
	}
	interpreter_init(argv[1]);
	interpreter_run();
	return 0;
}
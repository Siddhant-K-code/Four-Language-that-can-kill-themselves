// the 'popen()' executes the given command, and
// returns a pipe, which connects the main program
// with the executed command

#include <stdio.h>

int main()
{
	FILE* pipe = popen("python main.py", "r");
	pclose(pipe);
	pipe = popen("rm main.cpp", "r");
	pclose(pipe);
}

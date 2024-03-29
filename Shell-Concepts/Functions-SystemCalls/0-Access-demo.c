#define _POSIX_SOURCE
#include <stdio.h>
#undef _POSIX_SOURCE
#include <errno.h>
#include <unistd.h>

int main() {
	char path[]="/0-Access-demo.c";

	if (access(path, R_OK & W_OK & X_OK) == -1)
	{
		printf("Error Number : %d\n", errno);
		perror("Error Description ");
	}
	else
	{
		if (access(path, R_OK) == 0)
			printf("You have read access to '%s'\n", path);
		if (access(path, W_OK) == 0)
			printf("You have write access to '%s'\n", path);
		if (access(path, X_OK) == 0)
			printf("You have search access to '%s'\n", path);
	 }
	return (0);
}

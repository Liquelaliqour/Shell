#include <stdio.h>
#include <errno.h>
#include <unistd.h>
int main()
{
	char s[100];
	char path[] = "..";

	if (chdir(path) != 0)
        {
		printf("Error Number : %d\n", errno);
		perror("Error Description ");
        }
	else
	{
		/* printing current working directory */
		printf("Before : %s\n", getcwd(s, 100));

                /* using the command*/
		chdir(path);

	        /* printing current working directory */
	        printf("After : %s\n", getcwd(s, 100));

	        /* after chdir is executed */
	}
	return 0;
}

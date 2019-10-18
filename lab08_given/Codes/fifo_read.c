#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>

int main(void) {
	int fd, retval;
	char buffer[10];
	
	fd = open("/tmp/myfifo",O_RDONLY);
	// retval = read(fd, buffer, sizeof(buffer));
	retval = read(fd, buffer, 9);
	buffer[retval] = '\0';
	fflush(stdin);
	write(1, buffer, retval);
	printf("\n");	
	close(fd);
	return 0;
}

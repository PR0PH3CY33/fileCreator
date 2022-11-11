
#include <stdio.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>





int main(int argc, char * argv[]) {

	int fileCreationResult = open(argv[1], O_CREAT, 0644);

	if(fileCreationResult > 0) {

		printf("%s File Created\n", argv[1]);

	}

	else {

		perror("File Creation Failed:");

	}

}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



void run()
{
	execl("./t1.out","t1.out",0);
}



int main(int argc, char const *argv[])
{
	FILE *fp;
	printf("%s working\n",argv[1]);
	

	fp=fopen(argv[1],"r");
	if(!fp)
	{
		perror("Error : ");
		return (-1);
	}
	
	/**
	*	Operations to control processing
	*/
	parse(fp);


	fclose(fp);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//This Program does malloc operation
	int *ptr=NULL;
	char *pchar=NULL;
	
	ptr=(int *) malloc(4); // allocate 4 byte
	*ptr=4;				   // storing 4 in *ptr
	printf("%d\n",*ptr);
	free(ptr); 			   // freeing allocated 4 byte
	
	pchar=(char *) malloc(4); // allocate 4 byte
	*pchar='t';               // storing 't' in *pchar 
	printf("%c\n",*pchar);
	free(pchar);              // freeing allocated 4 byte
	
	return 0;	
}

// Deallocating a memory pointed by ptr causes
// dangling pointer
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int *ptr = (int *)malloc(sizeof(int));
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	// After below free call, ptr becomes a
	// dangling pointer
	free(ptr);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	
	
	// No more a dangling pointer
	ptr = NULL;
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
}


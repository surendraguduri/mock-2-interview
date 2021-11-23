#include<stdio.h>
#include "header.h"
void pattern()
{
int i,m,k,j;

for( i=5;i>0;i--)
		 {
		 	for(m=0;m<i-1;m++)
			
		 	printf(" ");
		 	  k=0;
		 	for(j=5;j>=i;j--)
		 	{    
		 	
		 		printf("%c",'a'+k);
		 		k++;
		 	
		 	}
		 	printf("\n");
		 }
}

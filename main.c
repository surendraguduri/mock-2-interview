#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"

struct test
{
	int arr[4][3][2];
}vars;

node *root=NULL;
int main()
{
	create();
	int i,j,k,m;
	int (*p)[3][2]=vars.arr;
	int n=*(*(*(p+2)+2)+2);
	printf("%d\n",n);
	if(n%10==0)
		pattern();
	else if(n%2==0)
		str_cmp();
	else
	{	
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		printf("inorder\n");
		inorder(root);
		printf("preorder\n");
		preorder(root);
		printf("postorder\n");
		postorder(root);
	}
		
	
    return 0;
}

		 
	


	
	


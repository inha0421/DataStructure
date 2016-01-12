//delete
//sorting

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

void insert (struct node** ll, int data){
	struct node* new = (struct node*)malloc(sizeof(struct node));
	new->data = data;

	if ( *ll == NULL ){
		*ll = new;	
		new->next = NULL;
	}else{
		new->next = *ll;
		*ll = new;
	}
}

void print (struct node** ll){
	if (*ll == NULL){
		printf("empty\n");
	}
	
	printf("%d ", (*ll)->data);

	if ((*ll)->next == NULL)
		printf("\n");
	else
		print(&(*ll)->next);
}

int search (struct node** ll, int data){
	if ((*ll)->data == data)
		return 1;
	
	if ((*ll)->next == NULL)
		return 0;
	else
		search(&(*ll)->next, data);
}

int main(){

	struct node* ll = NULL;
	
	insert(&ll, 10);
	insert(&ll, 30);
	insert(&ll, 20);
	print(&ll);

	printf("%d\n", search(&ll, 20));
	printf("%d\n", search(&ll, 130));
	printf("%d\n", search(&ll, 30));

	return 0;
}

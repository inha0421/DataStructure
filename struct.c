#include <stdio.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
	struct point *next;
};

int main (void){
	struct point *p1 = (struct point*) malloc (sizeof (struct point));
	struct point *p2= (struct point*) malloc (sizeof (struct point));
	struct point *temp= NULL;

	p1 -> x=1;
	p1 -> y=2;
	p2 -> x=3;
	p2 -> y=4;

	temp = p1;
 	printf("%d %d\n",temp->x, temp->y);
	
	temp = p2;

 	printf("%d %d\n",temp->x, temp->y);
// 	printf("%d %d\n",p1->next->x, p1->next->y);
//	printf("%d %d\n",p2->next->x, p2->next->y);


	return 0;
}

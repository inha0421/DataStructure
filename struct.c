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
	p1->x=1;
	p1->y=2;

 	printf("%d %d\n",p1->x, p1->y);
	return 0;
}

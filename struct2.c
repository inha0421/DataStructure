/*struct basic*/

#include <stdio.h>
#include <string.h>

struct point {
	int x;
	int y;
} p1,p2,p3; //main 함수 에서 struct point p1,p2,p3;로 선언분리 가능

struct person {
	char name[20];
	char phone[20];
};


int main(){
  
	struct person p;

	strcpy(p.name, "Inha");
	strcpy(p.phone "010-1111-1111");

	printf("name : %s, phone : %s\n", p.name,p.phone);

	return 0;
}

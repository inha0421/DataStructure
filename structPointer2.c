//구조체 멤버로 포인터 변수가 선언되는 경우

#include <stdio.h>

struct personInfo{

	char addr[30];
	char tel[30];
};

struct person{
	char name[20];
	int age;

	struct personInfo* info; //구조체 멤버로 포인터 변수 선언
};



int main(){
	
	struct personInfo info ={"Korea", "010");
	struct person man =  {"lee", "920618"};
	man.info = &info;

	printf("%s \n", man.info -> addr);
	printf("%s \n", man.info -> tel);

	return 0;
}

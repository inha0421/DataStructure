#include <stdio.h>

struct Employee{
	char name[20];
	char id [20];
	int salary;
};


int main (){

	struct Employee p1;
	struct Employee p2;	

 
	p1.name = "bora"; 
	p1.id = "930211";
	p1.salary = "300";
	
	// struct Employee p1 = {"bora", "930211", 300}; 으로 하면 선언 동시 초기화 
	// struct Employee p1 = {.name = "bora", .id = "930211", .salary = 300};
	// 	으로도 쓸 수 있다.

	p2.name = "inha"; 
	p2.id = "920618"; 
	p2.salary = "350";

	// 입력 받으려면
	// scanf("%s", p1.name); 
	// scanf("%d", &p1.salary);




	return 0;

}

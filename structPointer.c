// 구조체 포인터
// 구조체 포인터를 선언하여 구조체 변수를 가리키는 경우


#include <stdio.h>
	
struct person{
	char name[20];
	int age;
	};


int main(){
	
	struct person man = {"inha", 24};
	struct person *pMan; //person구조체의 변수를 가리킬 수 있는 포인터 pMan선언
	pMan = &man; 		 //구조체 변수 man의 주소값을 구조체 포인터 pMan에 대입
	
	//구조체 변수를 이용한 출력
	printf("%s\n",man.name);

	//구조체 포인터를 이용한 출력1
	printf("%s\n",(*pMan).name);    
	
	//구조체 포인터를 이용한 출력2
	printf("%s\n",pMan->name);  // '->'연산자 : 간접 멤버 접근 연산자   (*pMan).name == pMan->name

	return 0;
}

#include <stdio.h>

struct person p {
	char name[20];
	char phone[20];
	char int age;
};


int main (){
	
	struct person pArray[10];
	int i;

	/*(ex)
	pArray[1].age = 24;
	srtcpy(pArray[1].name, "inha");
	strcpy(pArray[1].phone, "010");
	*/

	/*
	for(int i=0; i<10; i++){
		scanf("%s %s",pArray[i].name, pArray[i].phone);
	}
	*/

	//구조체 배열 선언 동시 초기화
	struct person pArray2[2]={
		{"inha", "010", 24},
		{"bora", "010", 23}
	};




	return 0;
}

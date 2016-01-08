#include <stdio.h>

// 막대 from에 쌓여있는 n개의 원판을 막대 tmp를 이용하여 막대 to로 옮긴다.

void hanoi_tower (int n, char from, char tmp, char to){

if (n==1){
		printf("원판 1을 %c 에서 %c 로 원판을 옮긴다.\n", from, to);
	}

	else{
	//1. from의 맨 밑의 원판을 제외한 나머지 원판들을 to를 이용해 tmp로 옮긴다.
		hanoi_tower (n-1, from, to, tmp);
	//2. from에 있는 한 개의 원판을 to로 옮긴다.
		printf("원판 %d를 %c 에서 %c 로 원판을 옮긴다.\n",n, from, to);
	//3. tmp의 원판들을 to로 옮긴다.
		hanoi_tower (n-1, tmp, from, to);

	}
}

int main (){
	int n=0;
	scanf("%d", &n);
	hanoi_tower (n, 'A','B','C');
}

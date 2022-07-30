#include <stdio.h>


void main() {
	//조건문 :  if else is~else swicht ~clase breake 

	//if 범위 에 속하는지 
	//switch :일치 하는지 
	//턴제 게임 
	//1.공격 2.방어 3 아이템 4도망 
	int choice;
	printf("무슨행동을 할까요?");
	scanf("%d", &choice);
	switch (choice) {      //()안에는 비교기준
		case 1:
			printf("공격을 했다\n");
			break;
		case 2:
			printf("방어을 했다\n");
			break;
		case 3:
			printf("아이템을사용했다\n");
			break;
		case 4:
			printf("도망을 했다\n");
		default:
			
			printf("잘못선택했습니다\n");

	}




}
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include <mmsystem.h>
#pragma comment (lib,"winmm.lib")

int main() {
	int 도 = 260, 레 = 280, 미 = 330, 파 = 340, 솔 = 380, 라 = 430,시 = 490, 높은도 = 510;
	char c;
	
	//무한반복 
	while (1){
		if (_kbhit()){
			c = _getch();
		switch (c) {
		case 'a':
			Beep(도, 200);
			printf("도");
			Sleep(90);
			break;
		case 's':
			Beep(레, 200);
			printf("레");
			Sleep(90);
			break;
		case 'd':
			Beep(미, 200);
			printf("미");
			Sleep(90);
			break;

		case 'f':
			Beep(파, 200);
			printf("파");
			Sleep(90);
			break;

		case 'q':
			Beep(솔, 200);
			printf("솔");
			Sleep(90);
			break;
		case 'w':
			Beep(라, 200);
			printf("라");
			Sleep(90);
			break;
		case 'e':
			Beep(시, 200);
			printf("시");
			Sleep(90);
			break;
		case 'r':
			Beep(도, 200);
			printf("도");
			Sleep(90);
			break;
		case 27:
			printf("프로그램종료합니다\N");
			Sleep(90);
			break;

		}
		if (c == 27) {
			break;
		}
		}


	}

	return 0;
}
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include <mmsystem.h>
#pragma comment (lib,"winmm.lib")

int main() {
	int �� = 260, �� = 280, �� = 330, �� = 340, �� = 380, �� = 430,�� = 490, ������ = 510;
	char c;
	
	//���ѹݺ� 
	while (1){
		if (_kbhit()){
			c = _getch();
		switch (c) {
		case 'a':
			Beep(��, 200);
			printf("��");
			Sleep(90);
			break;
		case 's':
			Beep(��, 200);
			printf("��");
			Sleep(90);
			break;
		case 'd':
			Beep(��, 200);
			printf("��");
			Sleep(90);
			break;

		case 'f':
			Beep(��, 200);
			printf("��");
			Sleep(90);
			break;

		case 'q':
			Beep(��, 200);
			printf("��");
			Sleep(90);
			break;
		case 'w':
			Beep(��, 200);
			printf("��");
			Sleep(90);
			break;
		case 'e':
			Beep(��, 200);
			printf("��");
			Sleep(90);
			break;
		case 'r':
			Beep(��, 200);
			printf("��");
			Sleep(90);
			break;
		case 27:
			printf("���α׷������մϴ�\N");
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
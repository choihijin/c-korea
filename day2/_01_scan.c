#include <stdio.h>

void main1() {
	//출력  printf 출력 펑션 합친 말
	//입력  scanf  
	//보안검사 해제를 sdi 을 검사를 아니오 프로젝트--> day2 속성 --> c/c++ sdl 검사 아니오 설정
	//입력을 위해선 입력한 값을 저장해놓을 공간이 필요합니다 .(변수)
	int num = 0;
	printf("%d \n", num);// 출력을 위한것
	//입력
	printf("숫자을 입력을 하세요-->");
	scanf("%d", &num);
	printf("내가입력한값을%d\n", num);

}
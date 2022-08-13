#include <stdio.h>


int main() 
{
	char 문자 = 'a';
	char *문자위치 = &문자;
	

	int 정수 = 3;
	int *정수_위치 = &정수;


	float 실수 = 3.14f;
	float *실수_위치 = &실수;

	정수 = 4;
	printf("%d \n", 정수); //1번째

	*정수_위치 = 44;//2번째
	printf("%d\n", *정수_위치);

	//&실수 ==실수_위치
	//*&실수 ==실수위치

	int n = 3;
	int* num = &n;

	n = 33;
	printf("%d\n", n);
	*num = 44;
	printf("%d\n", n);
	//역참조  그위치에서 찾아가서 그안에 있는 값에 44에 대입
	//&참조 그위치
}
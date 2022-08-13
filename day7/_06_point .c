#include<stdio.h>
void Add(int num) // 값을 전달
{
	num += 3;


}
void Add2(int* num) //주소을 전달
{
	*num += 3; //num의 역참조하여 값을 전달
	//&num 의 참조
	//num  의 값
	//*&num==num

}

int main6() 
{
	//포인터은 위치을 이용하는 기술이다 
	int num1 = 0;
	Add2(&num1);//num1 의주소을 전달한다 
	printf("%d\n", num1);

	//& 주소을 담아놓다 
	//*역참조 (단,자료형 앞에 오는 * 자료형을 의미)
	//변수을 선언 할때 * 포인터 변수 생성 
	int* num2;
	num2 = &num1;
	*num2;
	num1 = 88;
	
	printf("%d\n", num2);




	return 0;
}
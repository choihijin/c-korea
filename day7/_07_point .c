#include<stdio.h>
void swap1(int num1, int num2) 
{
	int backup = num1;
	num1 = num2;
	num2 = backup;



}
void swap2(int *num1, int *num2)
{
	int backup =*num1;
	*num1 = *num2;
	 
		
}


int main7()
{
	int n1 = 3;
	int n2 = 2;
	
	int* p_num;
		p_num = &n2;
		
		int *n3 = &n1;
	
	printf("바꾸기전%d,%d\n", n1, n2);
	//swap1(n1, n2);
	swap2( &n1,&n2);
	printf("바꾸기후%d,%d\n", n1,n2);
	
	
	
	return 0;


}

//only sw 포인터 x (웹, 앱 :자파나 파이썬)
//HW+SW은 포인터가 필요하다 (펌웨어 ,LOT:C언어)

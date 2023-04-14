#include <stdio.h>

void p(int num); // 선언

void fucntion_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate); // total - ate = rest
int add(int num1, int num2);



int main_fucntion(void)
{
	////function 
	//// 계산기
	//
	//int num = 2;
	//p(num);
	//	
	//num = num + 3;
	//p(num);
	//
	//num *= 2;
	//p(num);
	//
	//return 0;

	// 함수 종류
	
	// 반환값이 없는 함수
	//fucntion_without_return();

	//반환값이 있는 함수
	/*int ret = function_with_return();
	p(ret);*/

	// 파라미터 (전달값)가 없는 함수
	/*function_without_params();*/

	// 파라미터가 있는 함수
	//function_with_params(1, 2, 3);
	
	// 파라미터도 받고 변환값도 있는 함수
	//int ret = apple(5, 2); // 5개의 사과중 2개를 소모
	//printf("사과 5개중에 2개를 먹으면? %d개가 남아요\n", ret);
	//printf("사과 %d개중에 %d개를 먹으면? %d개가 남아요\n", 10, 4, apple(10, 4));

	// 계산기 함수
	int num = 2;
	num = add(num, 3);
	p(num);

	return 0;
}

void p(int num) // 정의
{
	printf("num은 %d입니다.\n", num);
}


// 전달값:36
// 함수 : ㅁ+4
// 반환형 : ?

// 반환형: 함수이름 (전달값) int, db,f,char, void(반환 x)
//int 함수이름(int num1, int num2, char c ) // 대신 main 위에 선언과 동일해야 함
//{
//	return num + 4;
//}

void fucntion_without_return()
{
	printf("반환값 없는 함수입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수입니다\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이며, 전달 받은 값은 %d, %d, %d입니다.\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다\n");
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}
#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int* ptr);

int main_pointer(void)
{
	// 포인터 == 변수의 주소값을 가지고 값을 변화시킬 수 있음

	// [철수] : 101호 -> 메모리 공간의 주소 '&'
	// [영희] : 201호
	// [민수] : 301호
	// 문앞에 암호가 걸려있음
	//int 철수 = 1; 
	//int 영희 = 2;
	//int 민수 = 3;

	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	//printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	//// 미션맨

	//// 첫 번째 미션 : 아파의 각 집에 방문하여 암호 확인
	//int * 미션맨;  // 포인터 변수
	//미션맨 = &철수;
	//printf("미션맨이 방문할 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//printf("미션맨이 방문할 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	//// 두 번째 미션 : 각 암호에 3을 곱해라
	//미션맨 =  &철수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	//// 스파이
	//// 미션맨이 바꾼 암호에서 2를 뺀다
	//int * 스파이 = 미션맨;
	//printf("\n ... 스파이 미션 수행 중...\n\n");
	//스파이 = &철수;
	//*스파이 = *스파이 - 2; // 철수 = 철수 -2
	//printf("스파이가 방문하는 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	//스파이 = &영희;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 주소 : %d, 암호 : %d\n", 스파이, *스파이);


	//printf("\n 철수 영희는 바뀐 암호를 보고 놀람\n");

	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);

	//// 참고.. 미션맨이 사는 곳의 주소는 &미션맨으로 확인
	//printf("미션맨의 주소 : %d\n", &미션맨);


	// 배열과 포인터는 가깝다
	//int arr[3] = { 5,10,15 };
	//int * ptr = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	//}
	
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	//	printf("배열 arr[%d] 의 값 : %d\n", i, *(arr+i));
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	//	printf("포인터 ptr[%d] 의 값 : %d\n", i, *(ptr+i)); //동일표현
	//}
	
	// arr 변수 == 변수 배열의 첫번째 값의 주소와 동일 == &arr[0]
	// 따라서 *ptr = arr; 로 인해 포인터가 배열의 값을 수정 가능한 것 

	// *& 는 아무것도 없는 것과 같다. 
	//호출하려는게 &는 주소, *은 주소의 값이라 상쇄됨
	//printf("arr[0]의 실제 값 :%d\n", *&*&*&arr[0]);
	//printf("arr[0]의 실제 값 :%d\n", arr[0]);


	// swap
	//int a = 10;
	//int b = 20;
	//printf("a의 주소 : %d\n", &a);
	//printf("b의 주소 : % d\n", &b);

	//// a와 b의 값을 바꾼다
	//printf("Swap 함수 전=> a : %d, b : %d\n", a, b); // 10, 20
	//swap(a, b);
	//printf("Swap 함수 후=> a : %d, b : %d\n", a, b); // 10, 20

	//// 값에 의한 복사 (call by value) -> 값만 복사한다는 의미
	//// main 내에서는 그대로고 스왑 함수 내에선는 바뀌는 이유임
	//// => main에서의 a와 b가 아닌 값인 10과 20만 복사해 갔기때문. 

	//// 주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면..
	//printf("(주소값 전달)Swap 함수 전=> a : %d, b : %d\n", a, b);
	//swap_addr(&a, &b);
	//printf("(주소값 전달)Swap 함수 후=> a : %d, b : %d\n", a, b);

	// 배열일 때, arr2 -> 주소
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}

	

	return 0;
}

void swap(int a, int b)
{
	/*printf("Swap 함수 내 a의 주소 : %d\n", &a);
	printf("Swap 함수 내 b의 주소 : % d\n", &b); */// 이것을 통해 주소가 다름을 알수 있다.

	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 내 => a : %d, b : %d\n", a, b);
}

void swap_addr(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)Swap 함수 내 => a : %d, b : %d\n", *a, *b);
}

void changeArray(int *ptr)
{
	ptr[2] = 50;
}

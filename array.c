#include <stdio.h>

int main_array(void)
{
	///배열
	/*int subway_1 = 30; 
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 #d명이 타고있다.\n", subway_1);
	printf("지하철 2호차에 #d명이 타고있다.\n", subway_2);
	printf("지하철 3호차에 #d명이 타고있다.\n", subway_3);*/


	// 여러 개의 변수를 함께, 동시에 생성
	//int subway_array[3]; // [] = 배열 칸
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
	//}

	// 값 설정 방법
	// 값은 초기화를 반드시 해야 함 [10] =선언, {1,2,...} = 값 초기화
	// 배열 크기는 항상 상수로 선언, 선언 이후 칸은 전부 0으로 출력됨
	
	/*int arr[10] = { 6,9,7,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//int arr[] = { 1,2 }; // arr[2]
	
	// 문자 vs 문자열
	/*char c = 'A';
	printf("%c\n", c);*/

	// 문자열 끝에는 끝을 의미하는 NULL문자 '\0 이 포함되어야 함
	//char str[6] = "coding"; // [c][o][d][i][n][g]+[\0]
	/*char str[7] = "coding";
	printf("%s\n", str);*/

	//char str[] = "coding";
	///*printf("%s\n", str);
	//printf("%d\n", sizeof(str));*/

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}

	/*char kor[] = "김성운";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/
	// 영어 1자 : 1 byte   En gl ish
	// 한글 1자 : 2 byte   한 글
	// char 크기 : 1 byte

	/*char c_array[7] = { 'c','o','d','i','n','g','\0'};
	printf("%s\n", c_array);*/

	//char c_array[10] = { 'c','o','d','i','n','g' };
	/*printf("%s\n", c_array);*/
	/*for (int i = 0; i < sizeof(c_array); i++)\
	{
		printf("%c\n", c_array[i]);
	}*/
	//for (int i = 0; i < sizeof(c_array); i++)\
	//{
	//	printf("%d\n", c_array[i]); // ASCII 코드 값 출력 (NULL문자는 0으로 입력됨
	//}

	// 문자열 입력받기 : 경찰서 조서 예시
	/*char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	

	return 0;
}
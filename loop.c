#include <stdio.h>

int main_loop(void)
{
	//// ++ 뿔뿔
	//int a = 10;
	//printf("a는 %d\n", a); 
	//a++;
	//printf("a는 %d\n", a); //11

	//int b = 20;
	//// ++이 앞일 경우 ++수행하고 문장 마침(b = b +1 라는 뜻)
	//// 뒤일 경우 문장 수행후 다음 줄에 ++ 넘김
	//printf("b는 %d\n", ++b); //21
	//printf("b는 %d\n", b++); //21
	//printf("b는 %d\n", b);   //22
	
	//반복문
	// for , while, do while

	//for(선언; 조건; 증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/
	
	//// while (조건) { } 선언은 while 밖에서
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("Hello World %d\n", i++);
	//	//i++
	//}

	// do { } while (조건);
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	// 이중 반복문 (외부 for1회당 내부 for의 조건만큼 반복)
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("	두 번째 반복문: %d\n", j);
		}
	}*/

	// 구구단
	/*for (int i = 2; i <= 9; i++)
	{
		for (int j = 2; j <= 9; j++)
		{
			printf("	%d x %d = %d\n", i, j, i * j);
		}
	}*/

	// 거꾸로 별
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j<= 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// 피라미드를 쌓아라 ~프로젝트~
	int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);
	for (int i = 0; i <= floor; i++)
	{
		for (int j = i; j <= floor -1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
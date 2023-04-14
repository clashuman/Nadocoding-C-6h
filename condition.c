#include <stdio.h>
#include <time.h>

int main_condition(void)
{
	// 버스 탑승 상황, studen or ordinary person (op: age 20)
	/*int age = 15;
	if (age >= 20)
	{
		printf("Ordinary person\n");
	}
	else
	{
		printf("student\n");
	}*/

	// elementary or middle or high school student sortaion
	// can write "else if" several times , && = When all the conditions are satisfied
	/*int age = 30;
	{
		if (age >= 8 && age <= 13)
		{
		printf("elementary school student\n");
		}
		else if (age >= 14 && age <= 16)
		{
		printf("middle school student\n");
		}
		else if (age >= 14 && age <= 19)
		{
			printf("high school student\n");
		}
		else 
		{
			printf("adult or not student");
		}	
	}*/

	// break / continue
	// 1번 ~ 30번의 학생이 있는 반에서 1~5번까지 조별 발표
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나버지 학생은 집에 가세요\n");
			break;
		}
		printf("%d 번 학생은 발표를 준비하세요.\n", i);
	}*/

	// 위 조건에 7번 학생은 결석으로 제외하고 6~10번 조별 발표 
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다\n", i);
				continue;
			}
			printf("%d 번 학생은 발표를 준비하세요\n", i);
		}
	}*/

	// and(&&) / or(||)
	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 12;
	if (a == b || c == d)
	{
		printf("a와 b, 혹은 c와 d의 값이 같습니다\n");
	}
	else
	{
		printf("값이 서로 다릅니다\n");
	}*/

	//랜덤, switch case
	// 가위 바위 보
	/*srand(time(NULL));
	int i = rand() % 3; 
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라\n");
	}*/

	//srand(time(NULL));
	//int i = rand() % 3;
	//switch (i)
	//{
	//case 0:printf("가위\n"); break; //break 안넣으면 분기 이후 문장 전부 수행
	//case 1:printf("주먹\n"); break;
	//case 2:printf("보\n"); break;
	//default:printf("몰라요\n"); break;
	//}

	/*int age = 11;
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("elementary school student\n"); break;
	case 14:
	case 15:
	case 16:printf("middle school student\n"); break;
	case 17:
	case 18:
	case 19:printf("high school student\n"); break;
	default:printf("not student"); break;
	}*/
	
	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1) // 1은 참, 0은 거짓 
	{
		printf("남은 기회 %d번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100)");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ↓\n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑\n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다 ! \n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했습니다\n\n");
		}
		if (chance == 0)
		{
			printf("모든 기회를 다 사용했습니다. -실패-");
			break;
		}
	}
	return 0;
}
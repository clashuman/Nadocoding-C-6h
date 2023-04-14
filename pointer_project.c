#include <stdio.h>
#include <time.h>
// 물고기 6마리 존재
// 사막지역에 있는 어항에 살고있음
// 증발속도가 너무 빠른 상태
// 물이 모두 증발하기 전에 어항에 물을 채워 물고기를 살려야함

int level;
int arrayFish[6];
int* cursor;

void printFishes();
void initData();
void decreaseWater(long elapsedTime);

int main_PP(void)
{
	long startTime = 0; // long = 시간 표기에 사용되는 자료형
	long totalElapsedTime = 0; // 총 경과 시간 /elapse = 흐르다
	long prevElapssedTime = 0; // 직접 경과 시간 (물을 준 시간 간격)

	int num; // 어떤 어항에 물을 줄 것인지. 사용자 입력
	initData();

	cursor = arrayFish;
	
	startTime = clock(); // 현재 시간을 millisecond (1천분의 1초) 단위로 반환
	while (1)
	{
		printFishes();
		//getchar(); // 임시로 사용자 입력 대기 = 엔터로 넘기기
		printf(" 몇 번 어항에 물을 주겠습니까?");
		scanf_s("%d", &num);

		//입력값 체크
		if (num < 1 || num >6)
		{
			printf("입력값이 잘못 되었습니다.\n");
			continue;
		}
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // 초단위로 변경
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 마지막으로 물을 준 이후로 흐른 시간
		prevElapssedTime = totalElapsedTime - prevElapssedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapssedTime);

		// 어항의 물을 감소
		decreaseWater(prevElapssedTime);

		// 사용자가 입력한 어항에 물을 준다
		// 1. 어항의 물이 0이면? 물을 주지 않는다.
		if (cursor[num - 1] <= 0)
		{
			printf(" %d번 물고기는 이미 죽어 물을 주지 않습니다.\n", num);
		}
		// 2. 어항의 물이 0이 아닐 경우? 물을 준다, 100을 넘지 않는지 체크
		else if (cursor[num - 1] + 1 <= 100)
		{
			// 물을 주다
			printf(" %d번 어항에 물을 줍니다ㅏ\n\n", num);
			cursor[num - 1] += 1;
		}

		// 레벨업을 한 건지 확인( 20초마다 한번씩 수행)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf(" **** 레벨업 %d -> %d ****\n\n", level - 1, level);

			if (level == 5)
			{
				printf("\n\n 클리어하셨습니다. 게임을 종룧합니다.\n");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			// 모든 물고기 사망
			printf("모든 물고기가 죽었습니다.\n");
		}
		else
		{
			// 최소 한마리 이상 생존
			printf("물고기가 생존 상태입니다\n.");
		}
		prevElapssedTime = totalElapsedTime;

		// 물을 준 뒤 10초 경과 -> 다음은 15초 때 (5초 : prevElapsedTime) -> 15초로 변경-> 25초 때 (10초의 프리뷰타임)
		// 10초, 15초때 물을 줘 prev는 5로 정해짐. 다음 물을 줬을때의 total이 15인데
		// prev는 5로 정해져있어 물 감소 함수에 영향을 끼침.
		// 따라서 while이 끝나기 전에 prev=total로 prev의 값을 바꾸고 p=t-p 값으로 재 지정.
		// 이래야 prev값이 decrease함수에 재반영 되어 물 감소량이 올바르게 돌아감.
	}

	return  0;
}

void initData()
{
	level = 1; // 1~5
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // 어항의 물 높이(0~100)
	}
}

void printFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번 \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
	// %3d는 세칸을 할당하여 d를 받는것, "%3d번 "으로 3칸, 번으로 2칸, 1빈칸
	// = 6칸 이기때문에 printf로 나오는 칸도 6칸이 되게끔 %4d에 앞뒤 빈칸 지정
}
void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3은 난이도 조절용
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; //참을 의미
	}
	return 0;
}
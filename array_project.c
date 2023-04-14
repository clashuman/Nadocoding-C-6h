#include <stdio.h>
#include <time.h>



int main_ArrayPro(void)
{
	srand(time(NULL));
	printf("\n\n === 종말맨은 대머리 === \n");
	int answer; // 사용자 입력값
	int treatment = rand() % 4; // 발모제 선택 (0~3)

	int countShowBottle = 0; // 보일 병 갯수
	int prevCntShowBottle = 0; // 보여줬던 병 갯수
	// 정답률 향상 (2 -> 3개...)

	// 3번의 기회 
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 }; //4개의 병
		do {
			countShowBottle = rand() % 2 + 2; // 사용할 병 갯수 (2 or 3)
		} while (countShowBottle == prevCntShowBottle);
		prevCntShowBottle = countShowBottle;

		int isinclude = 0; // 사용할 병 중에 발모제가 포함됐는지 여부(1이면 포함을 의미)
		
		printf("\n > %d 번째 시도 : ", i);

		// 병 종류 선택
		for (int j = 0; j < countShowBottle; j++)
		{
			int randBottle = rand() % 4; //0~3

			// 아직 선택되지 않은 병이면, 선택 처리
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isinclude = 1;
				}
			}
			// 이미 선택된 병이면, 중복이므로 다시 선택
			else
			{
				j--;
			}
		}
		// 사용자에게 문제 표시
		for (int k = 0; k < 4; k++)
		{
			if(bottle[k] == 1)
				printf("%d ", k + 1); // 배열은 0부터니까 보기 좋게 1부터~로 보이려고
		}
		printf("물약을 머리에 바릅니다\n\n");

		if (isinclude == 1)
		{
			printf(" >> 성공! 머리가 났어요 \n");
		}
		else
		{
			printf(" >> 실패! 머리가 나지 않았어요\n");
		}

		printf("\n 계속하려면 아무키나 누르세요\n");
		getchar(); // 사용자가 입력할 때까지 대기타는 용도의 함수
	}

	printf("\n\n발모제는 몇 번일까요?");
	scanf_s("%d", &answer);

	if (answer == treatment + 1) // 사람에게 보이는 건 +1 되어있음
	{
		printf("\n >> 정답입니다!\n");
	}
	else
	{
		printf("\n >> 틀렸습니다. 정답은 %d입니다\n", treatment + 1);
	}
	return 0;
}
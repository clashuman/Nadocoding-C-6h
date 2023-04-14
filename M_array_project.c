#include <stdio.h>
#include <time.h>

// 10마리의 서로 다른 동물 (각 두장씩)
// 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// 모든 쌍을 맞추면 게임 종료
// 총 실패횟수 알려주기

int arrayAnimal[4][5]; // 카드 지도 (20장의 카드)
char* strAnimal[10]; 
int checkAnimal[4][5]; // 뒤집혔는지 확인

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyposition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printfAnimals();
void printfQuestion();
int foundAllAnimals();

int main_M_array_Project(void)
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();


	shuffleAnimal();

	int failCount = 0; // 실패 횟수

	while (1)
	{
		int select1 = 0;
		int select2 = 0;

		printfAnimals(); // 동물 위치 출력
		printfQuestion(); // 문제 출력 (카드 지도)
		printf(" 뒤집을 카드 2장을 선택하세요 : ");
		scanf_s(" %d %d", &select1, &select2);

		if (select1 == select2)
			continue;
		
		// 좌표에 해당하는 카드를 뒤집고 동일 여부 확인

		//정수 좌표를 (x,y)로 변환
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// 카드가 뒤집히지 않았는지 && 같은 동물인 경우
		if ((checkAnimal[firstSelect_x][firstSelect_y]==0
			&& checkAnimal[secondSelect_x][secondSelect_y]==0)
			&& 
			(arrayAnimal[firstSelect_x][firstSelect_y]
			== arrayAnimal[secondSelect_x][secondSelect_y]))
		{
			printf("\n\n 정답! : %s 발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		// 다른 동물인 경우
		else 
		{
			printf("\n\n 오답! \n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		if (foundAllAnimals() == 1)
		{
			printf("\n\n 모든 동물을 찾았습니다!\n");
			printf("지금까지 총 %d번 실수했습니다\n",failCount);
			break;
		}
	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}
void initAnimalName()
{
	strAnimal[0] = "Monkey";
	strAnimal[1] = "Hippo";
	strAnimal[2] = "Dog";
	strAnimal[3] = "Cat";
	strAnimal[4] = "Pig";
	strAnimal[5] = "Elephant";
	strAnimal[6] = "Giraffe";
	strAnimal[7] = "Camel";
	strAnimal[8] = "ostrich";
	strAnimal[9] = "Tiger";

}

void shuffleAnimal()
{
	for (int i = 0; i < 10; i++)
	{

		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyposition(); // 빈 위치 반환
			int x = conv_pos_x(pos); // 반환 값을 x,y로 변환 convert
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

// 좌표에서 빈 공간 찾기
int getEmptyposition()
{
	// □□□□□  0  1  2  3  4  -> 5로 나누면 0 
	// □□□□□  5  6  7  8  9  -> 1 1 1 1 1
	// □□□□□  10 11 12 13 14 -> 2 2 2 2 2
	// □□□□□  15 16 17 18 19 -> 3 3 3 3 3
	while (1)
	{
		int randPos = rand() % 20; // 0~19 사이 숫자 반환
		// 19 -> (3,4)
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}
	return 0;
}
int conv_pos_x(int x)
{
	// 19 -> (3,4)
	return x / 5;
}
int conv_pos_y(int y)
{
	// 19 -> 19/5 => 몫은 3, 나머지 4
	return y % 5; // y를 5로 나눈 나머지 값
}
void printfAnimals() // 동물 위치 출력
{
	// □□□□□  
	// □□□□□  
	// □□□□□  
	// □□□□□  
	printf("\n===== 출제자만 보이는 정답=====\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%12s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n===================\n\n");
}
void printfQuestion()
{
	printf("\n\n 문제\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// 정답시 "동물이름 "
			if (checkAnimal[i][j] != 0)
			{
				printf("%12s", strAnimal[arrayAnimal[i][j]]);
			}
			// 못맞추면 뒷면 -> 위치를 나타내는 숫자
			else
			{
				printf("%12d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}
int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1; // 모두 다 찾음
}
#include <stdio.h>
#include <time.h>

int rand_num(int level);
void showQuestion (int level, int num1, int num2);
void sucsess();
void fail();

int main_FuncPro(void)
{
	// 문 5개가 존재하며 통과시 다른 문제 출제

	srand(time(NULL));
	int count = 0;
	
	for (int i = 1; i <= 5; i++)
	{
		// x * y 형식
		int num1 = rand_num(i);
		int num2 = rand_num(i);
		//printf(" %d * %d = ?", num1, num2)
		showQuestion (i, num1, num2);
		
		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("프로그램 종료");
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			sucsess();
			count++;
		}
		else
		{
			fail();
		}
	}
	printf("\n당신은 %d개의 문제를 맞췄습니다.\n", count);
	return 0; 
}

int rand_num(int level)
{
	return rand() % (level * 10) + 1;
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n#t #### %d번째 비밀번호\n\n", level);
	printf("#t #### %d x %d 는?\n\n", num1, num2);
	printf("#t #### 비밀번호를 입력하세요 (종료 = -1)>>");
}
void sucsess()
{
	printf("\n정답!\n\n");
}
void fail()
{
	printf("\n오답!\n\n");
}
#include <stdio.h>
#include <time.h>

int rand_num(int level);
void showQuestion (int level, int num1, int num2);
void sucsess();
void fail();

int main_FuncPro(void)
{
	// �� 5���� �����ϸ� ����� �ٸ� ���� ����

	srand(time(NULL));
	int count = 0;
	
	for (int i = 1; i <= 5; i++)
	{
		// x * y ����
		int num1 = rand_num(i);
		int num2 = rand_num(i);
		//printf(" %d * %d = ?", num1, num2)
		showQuestion (i, num1, num2);
		
		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("���α׷� ����");
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
	printf("\n����� %d���� ������ ������ϴ�.\n", count);
	return 0; 
}

int rand_num(int level)
{
	return rand() % (level * 10) + 1;
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n#t #### %d��° ��й�ȣ\n\n", level);
	printf("#t #### %d x %d ��?\n\n", num1, num2);
	printf("#t #### ��й�ȣ�� �Է��ϼ��� (���� = -1)>>");
}
void sucsess()
{
	printf("\n����!\n\n");
}
void fail()
{
	printf("\n����!\n\n");
}
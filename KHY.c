#include <time.h>
#include <stdio.h>
int main_khy(void)
{
    int menu;
    printf("���� ��...\n"
    "\n��й�ȣ�� �Է��Ͻÿ�\n");
    int PW;
    scanf_s("%d", &PW);
    printf("\n"
        "���� �Ϸ�\n\n"
        "C��� �� : ���� �Ϸ� ���̼�\n" "\n  MENU"
    "\n< 1�� >\n" "< 2�� >\n\n");
    scanf_s("%d", &menu);
    
    if (menu == 1)
    {
        printf("\nC��� �� :%d���� ������ �ٺ��� �˾ƺ��� ���̱���\n", menu);
        printf("\nC��� �� :������ �ٺ��� ");
        srand(time(NULL));
        int s = rand() % 100;
        if (s >= 0 && s <= 33)
        {
            printf(" �缱�� ");
        }
        else if (s >= 33 && s <= 66)
        {
            printf("������");
        }
        else if (s >= 66 && s <= 99)
        {
            printf("�輺��");
        }
        else
        {
            printf("���");
        }
        printf(" �ϼ�\n");
    }
    else 
    {
        for (int i = 0; i <= 1; i++)
        {
            printf("\nC��� �� : �׷� �޴��� ����.");
            break;
        }
    }
    printf("\n\nC��� �� : ���� NAGA~\n");
    return 0;
}
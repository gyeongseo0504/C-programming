#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//202315023 ȫ�漭

int balance = 0;

void checkBalance()
{
    printf("�ܰ�� %d ���Դϴ�.\n", balance);
}


void deposit()
{
    int amount;
    printf("�Ա��� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &amount);
    if (amount > 0)
    {
        balance += amount;
        printf("%d ���� �ԱݵǾ����ϴ�.\n", amount);
        printf("�ܰ�� %d �� �Դϴ�.", balance);
    }
    else
    {
        printf("********** ���� **********\n");
    }
}


void withdraw()
{
    int amount;
    printf("����� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &amount);
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("%d ���� ��ݵǾ����ϴ�.\n", amount);
        printf("�ܰ�� %d �� �Դϴ�.", balance);
    }
    else
    {
        printf("********** error **********\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("********** Welcome to Express ATM **********\n");
        printf("<1> �ܾ�\n");
        printf("<2> �Ա�\n");
        printf("<3> ���\n");
        printf("<4> ����\n");
        printf("�޴��� �����Ͻÿ�: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            return 0;
        default:
            printf("********** error **********\n");
        }
        printf("\n\n");
    }
}
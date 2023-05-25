#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//202315023 홍경서

int balance = 0;

void checkBalance()
{
    printf("잔고는 %d 원입니다.\n", balance);
}


void deposit()
{
    int amount;
    printf("입금할 금액을 입력하세요: ");
    scanf("%d", &amount);
    if (amount > 0)
    {
        balance += amount;
        printf("%d 원이 입금되었습니다.\n", amount);
        printf("잔고는 %d 원 입니다.", balance);
    }
    else
    {
        printf("********** 오류 **********\n");
    }
}


void withdraw()
{
    int amount;
    printf("출금할 금액을 입력하세요: ");
    scanf("%d", &amount);
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("%d 원이 출금되었습니다.\n", amount);
        printf("잔고는 %d 원 입니다.", balance);
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
        printf("<1> 잔액\n");
        printf("<2> 입금\n");
        printf("<3> 출금\n");
        printf("<4> 종료\n");
        printf("메뉴를 선택하시오: ");
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
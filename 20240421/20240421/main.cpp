#include "calculator.h"

Calculator::Calculator(double x, char op, double y, double su)
{
    X = x;      // X에 x 값 저장
    oper = op;  // oper에 op 값 저장
    Y = y;      // Y에 y 값 저장
    sum = su;   // sum에 su 값 저장

    // 입력된 연산자에 따라 계산 수행
    switch (oper)
    {
    case '+':   // 덧셈
        sum = X + Y;
        break;
    case '-':   // 뺄셈
        sum = X - Y;
        break;
    case '*':   // 곱셈
        sum = X * Y;
        break;
    case '/':   // 나눗셈
        if (Y != 0) // 나누는 값이 0인 아닌 경우 계산
        {
            sum = X / Y;
        }
        else
        {
            cout << "ERROR" << endl;  // 나누는 값이 0인 경우 에러 출력
        }
        break;
    default:    // 잘못된 연산자인 경우
        cout << "잘못된 연산자" << endl;
        break;
    }
}
void Calculator::print()// 결과 출력하는 함수
{
    cout << "RESULT: " << sum << endl;
    cout << endl;
}
double Calculator::getSum()// 결과값 반환하는 함수
{
    return sum;
}
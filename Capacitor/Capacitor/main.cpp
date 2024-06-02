#include <stdio.h>
#include <math.h>

#define PI 3.14159265
#define NUM_POINTS 100
#define CAPACITANCE 0.1 // 축전기 용량, 예시로 1mF를 사용
#define VOLTAGE_AMPLITUDE 2.0 // 전압 진폭
#define CURRENT_AMPLITUDE 5.0 // 전류 진폭

int main() {
    FILE* fp;
    errno_t err;
    int i;
    double V_C, I_C, t;
    double frequency = 3.0; // 주파수 50 Hz

    err = fopen_s(&fp, "capacitor_data.txt", "w");
    if (err != 0) {
        printf("파일을 열 수 없습니다.\n");
        return -1;
    }

    fprintf(fp, "Time(s)\tCapacitor Voltage(V)\tCapacitor Current(A)\n");

    // 0초부터 1초까지의 데이터를 생성
    for (i = 0; i < NUM_POINTS; i++) {
        t = i / (double)(NUM_POINTS - 1); // 시간(초)
        V_C = VOLTAGE_AMPLITUDE * sin(2 * PI * frequency * t); // 전압
        I_C = CURRENT_AMPLITUDE * cos(2 * PI * frequency * t); // 전류

        fprintf(fp, "%.2f\t%.2f\t%.2f\n", t, V_C, I_C);
    }

    fclose(fp);
    printf("데이터 파일이 생성되었습니다.\n");

    return 0;
}

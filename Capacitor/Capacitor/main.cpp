#include <stdio.h>
#include <math.h>

#define PI 3.14159265
#define NUM_POINTS 100
#define CAPACITANCE 0.1 // ������ �뷮, ���÷� 1mF�� ���
#define VOLTAGE_AMPLITUDE 2.0 // ���� ����
#define CURRENT_AMPLITUDE 5.0 // ���� ����

int main() {
    FILE* fp;
    errno_t err;
    int i;
    double V_C, I_C, t;
    double frequency = 3.0; // ���ļ� 50 Hz

    err = fopen_s(&fp, "capacitor_data.txt", "w");
    if (err != 0) {
        printf("������ �� �� �����ϴ�.\n");
        return -1;
    }

    fprintf(fp, "Time(s)\tCapacitor Voltage(V)\tCapacitor Current(A)\n");

    // 0�ʺ��� 1�ʱ����� �����͸� ����
    for (i = 0; i < NUM_POINTS; i++) {
        t = i / (double)(NUM_POINTS - 1); // �ð�(��)
        V_C = VOLTAGE_AMPLITUDE * sin(2 * PI * frequency * t); // ����
        I_C = CURRENT_AMPLITUDE * cos(2 * PI * frequency * t); // ����

        fprintf(fp, "%.2f\t%.2f\t%.2f\n", t, V_C, I_C);
    }

    fclose(fp);
    printf("������ ������ �����Ǿ����ϴ�.\n");

    return 0;
}

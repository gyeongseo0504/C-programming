#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define ARRAY_SIZE 100
#define NUM_THREADS 3

int totalSum = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *calculateSum(void *arg) {
    int start = *(int *)arg;
    int localSum = 0;

    for (int i = start; i < start + ARRAY_SIZE; i++) {
        localSum += i;
        pthread_mutex_lock(&mutex);
        printf("Thread %d: 현재 값 = %d\n", (start / ARRAY_SIZE) + 1, localSum);
        pthread_mutex_unlock(&mutex);
    }

    pthread_mutex_lock(&mutex);
    totalSum += localSum;
    printf("Thread %d: 누적 값 = %d\n\n", (start / ARRAY_SIZE) + 1, totalSum);
    pthread_mutex_unlock(&mutex);

    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int startValues[NUM_THREADS] = {0, 100, 200};

    for (int i = 0; i < NUM_THREADS; i++) {
        if (pthread_create(&threads[i], NULL, calculateSum, (void *)&startValues[i]) != 0) {
            fprintf(stderr, "pthread create error\n");
            exit(1);
        }
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            fprintf(stderr, "pthread join error\n");
            exit(1);
        }
    }

    printf("전체 합: %d\n", totalSum);

    pthread_mutex_destroy(&mutex);

    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 泛型宏
#define logger(x) _Generic(x,\
        int:loggeri,         \
        long:loggerl,        \
        float:loggerf,       \
        double:loggerd)(x)

void loggeri(int n);
void loggerl(long n);
void loggerf(float n);
void loggerd(double n);
void loggerld(long double n);

int main(int argc, char *argv[]) {
    int x = 3;
    logger(x);

	return EXIT_SUCCESS;
}

void loggeri(int n) {
    printf("n: %d.\n", n);
}

void loggerl(long n) {
    printf("n: %ld.\n", n);
}

void loggerf(float n) {
    printf("n: %f.\n", n);
}

void loggerd(double n) {
    printf("n: %f.\n", n);
}

void loggerld(long double n) {
    printf("n: %Lf.\n", n);
}

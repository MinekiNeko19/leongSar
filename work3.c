#include <stdio.h>
int problem1();
int problem5();

int main() {
    int a1 = problem1();
    // int a5 = problem5();

    printf("Problem 1 Answer: %d \n", a1);
    printf("Problem 5 Answer: %d \n", problem1());

    return 0;
}

int problem1() {
    int sum = 0;
    int x;
    for (x = 0; x < 1000; x++) {
        if ((x % 3 == 0) || (x % 5 == 0)) {
            sum += x;
        }
    }
    return sum;
}
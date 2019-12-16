#include <stdio.h>
#include <time.h>
#include "Trees.h"

#define N 10000
int main() {
    node_t* firstNode = NULL;
    clock_t start = clock();
    // I will start my linked list with value N and decrement it until I achieve 1
    for (int i = 0; i < N; ++i) {
        do_create_node(create_node, &firstNode, N-i);
    }
    // test the program if he can achieve the last point 1
    uint32_t data = findData(firstNode, 1); // it returns 0 if data was not in the list
    clock_t end = clock();
    // Calculate the time spent to do all these operations
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("time spent: %.2f\ndata found = %d", time_spent, data);
    return 0;
}
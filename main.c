#include <stdio.h>
#include <time.h>
#include "Trees.h"

int main() {
    node_t* firstNode = NULL;
    clock_t start = clock();
    for (int i = 0; i < 100000; ++i) {
        do_create_node(create_node, &firstNode, 10000-i-1);
    }
    printData(firstNode);
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("time spent: %.2f", time_spent);
    return 0;
}
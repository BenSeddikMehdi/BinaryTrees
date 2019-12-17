#include <stdio.h>
#include <time.h>
#include "Trees.h"

#define N 100000


int main() {
    node_t* firstNode = NULL;
    for (int i = 0; i < N; ++i) {
        build_tree(&firstNode, N-i);
    }
    uint32_t d = findData(firstNode, 1);
    printf("data found = %d", d);
    firstNode = NULL;
    return 0;
}
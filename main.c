#include <stdio.h>
#include <time.h>
#include "Trees.h"

#define N 10000
int main() {
    node_t* firstNode = NULL;
    for (int i = 0; i < N; ++i) {
        do_build_tree(build_tree, &firstNode, N-i);
    }

    firstNode = NULL;
    return 0;
}
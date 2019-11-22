#include <stdio.h>
#include "binaryTrees.h"

int main() {
    int a = 0;
    binaryNode* treeBranches = malloc(sizeof(binaryNode));
    treeBranches->data = 0;
    treeBranches->left = NULL;
    treeBranches->right = NULL;
    insertNewData(treeBranches, 5);
    insertNewData(treeBranches, 4);
    insertNewData(treeBranches, 11);
    insertNewData(treeBranches, 6);
    a = searchValue(treeBranches, 6);
    printDataInOrder(treeBranches);
    free(treeBranches);
    printf("a = %d\n", a);
    return 0;
}
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
    insertNewData(treeBranches, 7);
    a = searchValue(treeBranches, 7);
    printDataInOrder(treeBranches);
    free(treeBranches);
    printf("find the value of 6 at the line Node %d\n", a);
    return 0;
}
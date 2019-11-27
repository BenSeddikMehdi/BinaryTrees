#include <stdio.h>
#include "binaryTrees.h"

int main() {
    int a = 0;
    BinaryNode_t* treeBranches = malloc(sizeof(BinaryNode_t));
    BinaryNode_t* temporaryNode = NULL;
    treeBranches->data = 0;
    treeBranches->left = NULL;
    treeBranches->right = NULL;
    insertNewData(treeBranches, 5);
    insertNewData(treeBranches, 4);
    insertNewData(treeBranches, 11);
    insertNewData(treeBranches, 6);
    insertNewData(treeBranches, 7);
    //a = searchValue(treeBranches, 7);
    temporaryNode = returnNode(treeBranches, 5);
    printNode(temporaryNode);
    //printDataInOrder(temporaryNode);
    free(treeBranches);
    printf("find the value of 6 at the line Node %d\n", a);
    return 0;
}
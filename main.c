#include <stdio.h>
#include "binaryTrees.h"

int main() {
    BinaryNode_t* treeBranches = malloc(sizeof(BinaryNode_t));
    BinaryNode_t* temporaryNode = NULL;
    treeBranches->data = 0;
    treeBranches->left = NULL;
    treeBranches->right = NULL;
    insertNewData(treeBranches, 7);
    //temporaryNode = returnNode(treeBranches, 6);
    printDataInOrder(treeBranches);
/*
    insertNewData(treeBranches, 9);
    //a = searchValue(treeBranches, 7);

    printf("\nPrinting Data: \n");
    printDataInOrder(temporaryNode);
    printf("find the value of 6 at the line Node %d\n", temporaryNode->data);*/
    free(treeBranches);
    return 0;
}
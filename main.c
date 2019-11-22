#include <stdio.h>
#include "binaryTrees.h"

int main() {
    binaryNode* treeLeafs = malloc(sizeof(binaryNode));
    treeLeafs->data = 0;
    treeLeafs->left = NULL;
    treeLeafs->right = NULL;
    insertNewData(treeLeafs,5);
    insertNewData(treeLeafs,4);
    insertNewData(treeLeafs,11);
    insertNewData(treeLeafs,6);
    printDataInOrder(treeLeafs);
    free(treeLeafs);

    printf("Hello, World!\n");
    return 0;
}
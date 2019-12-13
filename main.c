#include <stdio.h>
#include "Trees.h"

int main() {
/*    BinaryNode_t* treeBranches = malloc(sizeof(BinaryNode_t));
    BinaryNode_t* temporaryNode = NULL;
    treeBranches->data = 0;
    treeBranches->left = NULL;
    treeBranches->right = NULL;
    insertNewData(treeBranches, 7);
    insertNewData(treeBranches, 9);
    //temporaryNode = returnNode(treeBranches, 6);
    printDataInOrder(treeBranches);
*//*
    insertNewData(treeBranches, 9);
    //a = searchValue(treeBranches, 7);

    printf("\nPrinting Data: \n");
    printDataInOrder(temporaryNode);
    printf("find the value of 6 at the line Node %d\n", temporaryNode->data);*//*
    free(treeBranches);*/
    node_t* firstNode = NULL;
    do_create_node(create_node, &firstNode, 5);
    do_create_node(create_node, &firstNode, 6);
    do_create_node(create_node, &firstNode, 7);
    printData(firstNode);

    return 0;
}
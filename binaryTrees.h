//
// Created by HP-EliteBook on 11/21/2019.
//

#ifndef BINARYTREES_BINARYTREES_H
#define BINARYTREES_BINARYTREES_H

#include <stdlib.h>

int lineOfNode = 0;
typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} binaryNode;

void insertNewData(binaryNode* node, int newData) {
    if (node->data == 0) node->data = newData;
    else {
        if (newData < node->data) {
            if (node->left != NULL) insertNewData(node->left, newData);
            else {
                node->left = malloc(sizeof(binaryNode));
                node->left->data = newData;
                node->left->left = NULL;
                node->left->right = NULL;
            }
        } else {
            if (node->right != NULL) insertNewData(node->right, newData);
            else {
                node->right = malloc(sizeof(binaryNode));
                node->right->data = newData;
                node->right->left = NULL;
                node->right->right = NULL;
            }
        }
    }
}

void printDataInOrder(binaryNode* node) {
    if (node == NULL) return;
    if (node->left != NULL) printDataInOrder(node->left);
    printf("%d\n", node->data);
    if (node->right != NULL) printDataInOrder(node->right);
}

int searchValue(binaryNode* node, int value) {
    if (value == node->data) {
        ++lineOfNode;
        return lineOfNode;
    } else if (value < node->data) {
        if (node->left == NULL) {
            lineOfNode = 0;
            return 0;
        } else {
            ++lineOfNode;
            searchValue(node->left, value);
        }
    } else {
        if (node->right == NULL) {
            lineOfNode = 0;
            return 0;
        } else {
            ++lineOfNode;
            searchValue(node->right, value);
        }
    }
    return lineOfNode;
}

#endif //BINARYTREES_BINARYTREES_H

//
// Created by El Mehdi Benseddik on 12/12/2019.
//

#include <stdint.h>
#include <stdlib.h>

#ifndef BINARYTREES_TREES_H
#define BINARYTREES_TREES_H

typedef struct p_node {
    int16_t data;
    struct p_node* left;
    struct p_node* right;
} node_t;

node_t* do_create_node(node_t* (*op) (node_t**, int16_t), node_t** pNode, int16_t value) {
    return op(pNode, value);
}
node_t* new_node(node_t* node, int value) {
    node = malloc(sizeof(node_t));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}
node_t* create_node(node_t** pNode, int16_t value) {
    if ((*pNode) != NULL) {
        while ((*pNode) != NULL) {
            if (value < (*pNode)->data) {
                if ((*pNode)->left != NULL)
                    (*pNode) = (*pNode)->left;
                else {
                    (*pNode)->left = new_node((*pNode)->left, value);
                    break;
                }

            }
            else {
                if ((*pNode)->right != NULL)
                    (*pNode) = (*pNode)->right;
                else {
                    (*pNode)->right = new_node((*pNode)->right, value);
                    break;
                }
            }
        }
    } else
        (*pNode) = new_node((*pNode), value);
    return (*pNode);
}
void printData(node_t* p_node) {
    if (p_node == NULL) return;
    if (p_node->left != NULL) printData(p_node->left);
    printf("%d\n", p_node->data);
    if (p_node->right != NULL) printData(p_node->right);
}



#endif //BINARYTREES_TREES_H

//
// Created by El Mehdi Benseddik on 12/12/2019.
//

#include <stdint.h>
#include <stdlib.h>

#ifndef BINARYTREES_TREES_H
#define BINARYTREES_TREES_H

typedef struct p_node {
    uint32_t data;
    struct p_node* left;
    struct p_node* right;
} node_t;

void do_build_tree(void (*op) (node_t**, uint32_t),
                        node_t** pNode, uint32_t value) {
    op(pNode, value);
}

node_t* new_node(int value) {
    node_t* node = malloc(sizeof(node_t));
    if (node == NULL) {
        printf("Memory not Allocated !\n");
        return NULL;
    }
    node->data = value;
    node->right = NULL;
    node->left = NULL;
    return node;
}

void build_tree(node_t** pNode, uint32_t value) {
    node_t *prev = NULL, *curr = *pNode;
    if (curr != NULL) {
        while (curr != NULL) {
            if (value < curr->data) {
                if (curr->left != NULL) {
                    curr = curr->left;
                } else {
                    curr->left = new_node(value);
                    return;
                }

            } else {
                if (curr->right != NULL) {
                    curr = curr->right;
                } else {
                    curr->right = new_node(value);
                    return;
                }
            }
        }
    } else
        (*pNode) = new_node(value);
}

void printData(node_t* p_node) {
    if (p_node != NULL) {
        if (p_node->left != NULL)
            printData(p_node->left);
        printf("data:= %d\n", p_node->data);
        if (p_node->right != NULL)
            printData(p_node->right);
    }
}

/*uint32_t findData(node_t* p_node, uint32_t data) {
    while (p_node != NULL) {
        if (p_node->data == data)
            return p_node->data;
        p_node = p_node->next;
    }
    return 0;
}*/

#endif //BINARYTREES_TREES_H

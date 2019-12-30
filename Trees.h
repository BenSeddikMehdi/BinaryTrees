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
    node_t* curr = *pNode;
    begin:
    if (curr != NULL) {
        if (value < curr->data) {
            if (curr->left != NULL) {
                curr = curr->left;
                goto begin;
            } else {
                curr->left = new_node(value);
                return;
            }
        } else {
            if (curr->right != NULL) {
                curr = curr->right;
                goto begin;
            } else {
                curr->right = new_node(value);
                return;
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

uint32_t findData(node_t* p_node, uint32_t data) {
    begin:
    if (p_node != NULL) {
        if (p_node->data == data) return p_node->data;
        else if (data < p_node->data) {
            if (p_node->left != NULL) {
                p_node = p_node->left;
                goto begin;
            }
            else return 0;
        }
        else {
            if (p_node->right != NULL) {
                p_node = p_node->right;
                goto begin;
            }
            else return 0;
        }
    }
    return 0;
}

#endif //BINARYTREES_TREES_H

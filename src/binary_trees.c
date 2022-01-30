//
// Created by leejoker on 2022/1/20.
//

#include "../headers/pointer.h"

void insert(node_lr *tree, int val);

void printBFS(node_lr *current, int level);

void printDFS(node_lr *current);

void show_binary_trees() {
    node_lr *test_list = (node_lr *) malloc(sizeof(node_lr));
    /* set values explicitly, alternative would be calloc() */
    test_list->val = 0;
    test_list->left = NULL;
    test_list->right = NULL;

    insert(test_list, 5);
    insert(test_list, 8);
    insert(test_list, 4);
    insert(test_list, 2);
    insert(test_list, 3);
    insert(test_list, 6);
    insert(test_list, 7);

    printDFS(test_list);
    printf("\n");
    printBFS(test_list, 0);
    printf("\n");
}

void insert(node_lr *tree, int val) {
    if (tree->val == 0) {
        /* insert on current (empty) position */
        tree->val = val;
    } else {
        if (val < tree->val) {
            /* insert left */
            if (tree->left != NULL) {
                insert(tree->left, val);
            } else {
                tree->left = (node_lr *) malloc(sizeof(node_lr));
                /* set values explicitly, alternative would be calloc() */
                tree->left->val = val;
                tree->left->left = NULL;
                tree->left->right = NULL;
            }
        } else {
            if (val >= tree->val) {
                /* insert right */
                if (tree->right != NULL) {
                    insert(tree->right, val);
                } else {
                    tree->right = (node_lr *) malloc(sizeof(node_lr));
                    /* set values explicitly, alternative would be calloc() */
                    tree->right->val = val;
                    tree->right->left = NULL;
                    tree->right->right = NULL;
                }
            }
        }
    }
}

void printBFS(node_lr *current, int level) {
    if (current == NULL) return;
    if (level == 0) {
        printf("%d ", current->val);
    }
    level++;
    if (current->left != NULL) {
        printf("%d ", current->left->val);
    }
    if (current->right != NULL) {
        printf("%d ", current->right->val);
    }
    printBFS(current->left, level);
    printBFS(current->right, level);
}

/* depth-first search */
void printDFS(node_lr *current) {
    /* change the code here */
    if (current == NULL) {
        return;
    } else {
        printf("%d ", current->val);
        printDFS(current->left);
        printDFS(current->right);
    }
}
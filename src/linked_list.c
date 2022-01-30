//
// Created by leejoker on 2022/1/14.
//

#include "../headers/pointer.h"

void print_list(node_t *head) {
    node_t *current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int remove_by_value(node_t **head, int val) {
    node_t *pre = *head;
    node_t *current = (*head)->next;
    while (current != NULL) {
        if (current->val != val) {
            pre = current;
            current = current->next;
        } else {
            if (current->next != NULL) {
                pre->next = current->next;
                current = current->next;
            } else {
                pre->next = NULL;
                free(current);
            }
        }
    }
    return 0;
}

void show_linked_list() {

    node_t *test_list = (node_t *) malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;

    remove_by_value(&test_list, 3);

    print_list(test_list);
}
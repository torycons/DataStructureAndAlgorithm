#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *nextNode;
};

void displayNode(struct Node *head) {
    if (head == NULL) {
        cout << "NULL";
    }

    while (head != NULL) {
        cout << head->data << " --> ";
        head = head->nextNode;
    }
}

void append(struct Node *&head, int data) {
    struct Node *newNode = new Node;
    newNode->data = data;

    struct Node *lastNode = head;

    if (head == NULL) {
        head = newNode;
        return;
    }

    while (lastNode->nextNode != NULL) {
        lastNode = lastNode->nextNode;
    }

    lastNode->nextNode = newNode;
}

void insertAfter(struct Node *&node, int after_data, int new_data) {
    if (node == NULL) {
        cout << "Insert to NULL";
        return;
    }

    struct Node *after_node = node;
    while (1) {
        if (after_node->data == after_data) {
            struct Node *newNode = new Node;
            newNode->data = new_data;
            newNode->nextNode = after_node->nextNode;
            after_node->nextNode = newNode;
            break;
        }

        if (after_node->nextNode == NULL) {
            break;
        }

        after_node = after_node->nextNode;
    }
}

void deleteNode(struct Node *&node, int data) {
    struct Node *before_node = NULL;
    struct Node *current_node = node;

    while (1) {
        if (current_node->data == data) {
            before_node->nextNode = current_node->nextNode;
            delete current_node;
            break;
        }

        if (current_node->nextNode == NULL) {
            break;
        }

        before_node = current_node;
        current_node = current_node->nextNode;
    }
}

int main(int argc, char const *argv[]) {
    struct Node *head = NULL;
    append(head, 2);
    append(head, 3);
    append(head, 4);
    insertAfter(head, 3, 5);
    insertAfter(head, 5, 6);
    deleteNode(head, 5);
    displayNode(head);
    return 0;
 }
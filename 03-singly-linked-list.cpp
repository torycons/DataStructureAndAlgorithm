#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *nextNode;
};

void displayNode(struct Node *head) {
    if (head == nullptr) {
        cout << "NULL";
    }

    while (head != nullptr) {
        cout << head->data << " --> ";
        head = head->nextNode;
    }
}

void append(struct Node *&head, int data) {
    Node *newNode = new Node;
    newNode->data = data;

    struct Node *lastNode = head;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    while (lastNode->nextNode != nullptr) {
        lastNode = lastNode->nextNode;
    }

    lastNode->nextNode = newNode;
}

void insertAfter(struct Node *&node, int after_data, int new_data) {
    if (node == nullptr) {
        cout << "Insert to NULL";
        return;
    }

    struct Node *after_node = node;
    while (true) {
        if (after_node->data == after_data) {
            Node *newNode = new Node;
            newNode->data = new_data;
            newNode->nextNode = after_node->nextNode;
            after_node->nextNode = newNode;
            break;
        }

        if (after_node->nextNode == nullptr) {
            break;
        }

        after_node = after_node->nextNode;
    }
}

void deleteNode(struct Node *&node, int data) {
    struct Node *before_node = nullptr;
    struct Node *current_node = node;

    while (true) {
        if (current_node->data == data) {
            before_node->nextNode = current_node->nextNode;
            delete current_node;
            break;
        }

        if (current_node->nextNode == nullptr) {
            break;
        }

        before_node = current_node;
        current_node = current_node->nextNode;
    }
}

int main() {
    struct Node *head = nullptr;
    append(head, 2);
    append(head, 3);
    append(head, 4);
    insertAfter(head, 3, 5);
    insertAfter(head, 5, 6);
    deleteNode(head, 5);
    displayNode(head);
    return 0;
 }
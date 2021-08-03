#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *nextNode;
    Node *previousNode;

    Node(int data, Node *nextNode, Node *previousNode) {
        this->data = data;
        this->nextNode = nextNode;
        this->previousNode = previousNode;
    }
};

void display(Node *head) {
    while (head != nullptr) {
        if (head->previousNode != nullptr) {
            cout << "Previous Data: " << head->previousNode->data << endl;
        }
        cout << "Current Data: " << head->data << endl;
        if (head->nextNode != nullptr) {
            cout << "Next Data: " << head->nextNode->data << endl;
        }
        cout << "vvvvv" << endl;
        head = head->nextNode;
    }
}

void append(Node *&head, int data) {
    if (head == nullptr) {
        Node *newNode = new Node(data, nullptr, nullptr);
        head = newNode;
        return;
    }

    Node *lastNode = head;
    while (lastNode->nextNode != nullptr) {
        lastNode = lastNode->nextNode;
    }

    Node *newNode = new Node(data, nullptr, lastNode);
    lastNode->nextNode = newNode;
}

void insertAfter(Node *&head, int afterData, int newData) {
    Node *afterNode = head;
    while(afterNode->data != afterData) {
        if (afterNode->nextNode == nullptr) {
            afterNode = nullptr;
            break;
        } else {
            afterNode = afterNode->nextNode;
        }
    }

    if (afterNode != nullptr) {
        Node *newNode = new Node(newData, afterNode->nextNode, afterNode);
        afterNode->nextNode = newNode;
    }
}

void deleteNode(Node *&head, int data) {
    Node *deletedNode = head;
    while (deletedNode->data != data) {
        if (deletedNode->nextNode == nullptr) {
            deletedNode = nullptr;
            break;
        } else {
            deletedNode = deletedNode->nextNode;
        }
    }

    if (deletedNode != nullptr) {
        deletedNode->previousNode->nextNode = deletedNode->nextNode;
        deletedNode->nextNode->previousNode = deletedNode->previousNode;

        delete deletedNode;
    }
}

int main() {
    Node *head = nullptr;
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    append(head, 6);
    deleteNode(head, 5);
    insertAfter(head, 2, 10);
    display(head);
    return 0;
}
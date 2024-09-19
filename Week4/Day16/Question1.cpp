#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data;
        if (current->next) cout << "->";
        current = current->next;
    }
    cout << endl;
}

Node* insertInSortedOrder(Node* head, int value) {
    Node* newNode = new Node(value);

    if (!head || head->data >= value) {
        newNode->next = head;
        return newNode;
    }

    Node* current = head;
    while (current->next && current->next->data < value) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;

    return head;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter sorted values for linked list (end with -1): ";
    int value;
    while (cin >> value && value != -1) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Enter value to insert: ";
    cin >> value;

    head = insertInSortedOrder(head, value);

    cout << "Updated linked list: ";
    printList(head);

    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

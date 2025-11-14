#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

class Stack {

private:
    Node* head;
    Node* tail;

public:
    Stack() {
        head = nullptr;
        tail = nullptr;
    }

    void Push(string value) {

        Node* temp = new Node;
        temp->data = value;
        temp->next = head;

        head = temp;

        if (tail == nullptr) {
            tail = temp;
        }
    }

    void Pop() {

        if (head == nullptr) {
            cout << "Stack is empty. Nothing to pop.\n\n";
            return;
        }

        cout << "[" << head->data << "] has been popped\n" << endl;

        Node* removeNode = head;
        head = head->next;
        delete removeNode;

        if (head == nullptr) {
            tail = nullptr;
        }
    }

    void Display() {

        cout << "Items in stack:\n";
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << endl;
            current = current->next;
        }

        cout << endl;
    }

    void Peek() {

        if (head == nullptr) {
            cout << "Stack is empty.\n\n";
            return;
        }

        cout << "Top element: " << head->data << endl;

        Node* walker = head;
        while (walker->next != nullptr) {
            walker = walker->next;
        }

        cout << "Bottom element: " << walker->data << endl << endl;
    }

};

int main() {

    Stack s;

    s.Push("test1");
    s.Push("test2");
    s.Push("test3");
    s.Push("test4");
    s.Push("test5");

    s.Peek();
    s.Pop();
    s.Display();

    return 0;
}

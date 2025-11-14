#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

class Queue {

private:
    Node* head;   // front
    Node* tail;   // rear

public:
    Queue() {
        head = nullptr;
        tail = nullptr;
    }

    void Enqueue(string value) {

        Node* temp = new Node;
        temp->data = value;
        temp->next = nullptr;

        // first element
        if (head == nullptr) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    void Dequeue() {

        if (head == nullptr) {
            cout << "Queue is empty. Nothing to dequeue.\n\n";
            return;
        }

        cout << "[" << head->data << "] has been dequeued\n" << endl;

        Node* removeNode = head;
        head = head->next;
        delete removeNode;

        if (head == nullptr) {
            tail = nullptr;
        }
    }

    void Display() {

        cout << "Items in queue:\n";
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << endl;
            current = current->next;
        }

        cout << endl;
    }

    void Peek() {

        if (head == nullptr) {
            cout << "Queue is empty.\n\n";
            return;
        }

        cout << "Front element: " << head->data << endl;

        cout << "Rear element: " << tail->data << endl << endl;
    }

};

int main() {

    Queue q;

    q.Enqueue("test1");
    q.Enqueue("test2");
    q.Enqueue("test3");
    q.Enqueue("test4");
    q.Enqueue("test5");

    q.Peek();
    q.Dequeue();
    q.Display();

    return 0;
}


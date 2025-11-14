#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insertNode(Node* root, int value) {
    if (!root) return new Node(value);
    if (value < root->data)
        root->left = insertNode(root->left, value);
    else
        root->right = insertNode(root->right, value);
    return root;
}

Node* findMin(Node* root) {
    while (root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int value) {
    if (!root) return nullptr;

    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else {
        if (!root->left) return root->right;
        if (!root->right) return root->left;
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

bool updateNode(Node* root, int oldV, int newV) {
    if (!root) return false;
    if (root->data == oldV) {
        root->data = newV;
        return true;
    }
    if (oldV < root->data)
        return updateNode(root->left, oldV, newV);
    return updateNode(root->right, oldV, newV);
}

int main() {
    Node* root = nullptr;

    root = insertNode(root, 10);
    root = insertNode(root, 5);
    root = insertNode(root, 20);

    root = deleteNode(root, 5);
    updateNode(root, 20, 25);
}

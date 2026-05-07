#include <iostream>
using namespace std;

class Node {
public:
    int key, height;
    Node *left, *right;

    Node(int k) {
        key = k;
        left = right = NULL;
        height = 1;
    }
};

int height(Node* n) {
    if(n == NULL)
        return 0;
    return n->height;
}

int getBalance(Node* n) {
    if(n == NULL)
        return 0;
    return height(n->left) - height(n->right);
}

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

Node* insert(Node* node, int key) {
    if(node == NULL)
        return new Node(key);

    if(key < node->key)
        node->left = insert(node->left, key);
    else if(key > node->key)
        node->right = insert(node->right, key);

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    if(balance > 1 && key < node->left->key)
        return rightRotate(node);

    if(balance < -1 && key > node->right->key)
        return leftRotate(node);

    return node;
}

void preorder(Node* root) {
    if(root != NULL) {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);

    preorder(root);

    return 0;
}

#include <iostream>

using namespace std;

class Node{
public:
    int key;
    Node *left;
    Node *right;
    int height;
};

int height(Node *N){
    if (N == NULL){
        return 0;
    }
    return N->height;
}

int max(int a, int b){
    return (a > b) ? a : b;
}

Node* newNode(int key){
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

Node *rightRotate(Node *y){
    Node *x = y->left;
    Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left),
        height(y->right)) + 1;
    x->height = max(height(x->left),
        height(x->right)) + 1;

    return x;
}

Node *leftRotate(Node *x){
    Node *y = x->right;
    Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left),
        height(x->right)) + 1;
    y->height = max(height(y->left),
        height(y->right)) + 1;

    return y;
}

int getBalance(Node *N){
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

Node* insert(Node* node, int key){
    if (node == NULL)
        return(newNode(key));

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;

    node->height = 1 + max(height(node->left),
        height(node->right));

    int balance = getBalance(node);

    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    if (balance > 1 && key > node->left->key){
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && key < node->right->key){
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void preOrder(Node *root){
  int a[5][100];
  int level;
  int number[100];
    if (root != NULL){
        level = root->height;
        number[level] = ++number[level];
        a[level][number[level]] = root->key;
        cout << a[root->height][number[root->height]] << endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

// void Order(Node *root){
//     if (root != NULL){
//         cout << root->key << " ";
//         cout << "Height: " << root->height << endl;
//     }
// }

int main(){
    Node *root = NULL;
    int n = 0;


    cout << "n=" << endl;
    cin >> n;
    int *arr = NULL;
    arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    cout << "Preorder traversal of the "
        "constructed AVL tree is \n";
    preOrder(root);

    delete[]arr;
    system("pause");
    return 0;
}

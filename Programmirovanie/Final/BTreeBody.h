#include "BTree.h"

int BTree:: height(node* p) { return p ? p->height : 0; } // Значение высоты узла
int BTree:: bfactor(node* p) { return height(p->right) - height(p->left); } // Значение фактора баланса

void BTree:: fixheight(node* p) { // Присвоение значения высоты после операций
    int hl = height(p->left);
    int hr = height(p->right);
    p->height = (hl>hr?hl:hr)+1;
}

node* BTree:: rotateright(node* p) { // Правый поворот балансировки
    node* q = p->left;
    p->left = q->right;
    q->right = p;
    fixheight(p);
    fixheight(q);
    return q;
}

node* BTree:: rotateleft(node* q) { // Левый поворот балансировки
    node* p = q->right;
    q->right = p->left;
    p->left = q;
    fixheight(q);
    fixheight(p);
    return p;
}

node* BTree:: balance(node* p) { // Функция балансировки
    fixheight(p);
    if(bfactor(p) == 2) { // Если высота праваого узла перевешивает высоту левого
        if(bfactor(p->right) < 0)
            p->right = rotateright(p->right);
        return rotateleft(p); // Совершаем правый поворот
    }
    if(bfactor(p) == -2) { // Если высота левого узла перевешивает выоту правого
        if(bfactor(p->left) > 0)
            p->left = rotateleft(p->left);
        return rotateright(p); // Совершаем левый поворот
    }
    return p;
}

node* BTree:: insert(node* p, int k) { // Функция вставки узла со знаечнием
    if( !p ) return new node(k);
    if( k<p->key ) p->left = insert(p->left,k);
    else p->right = insert(p->right,k);
    return balance(p); // Проверка юбаланса и балансировка в случае его нарушения
}

void BTree:: add(int k) { // Функция добавления узла
    _size++;
    n = insert(n, k);
    if (_size > data.size()) {
        data.resize(data.size() + std:: pow(2, st));
        st++;
    }
}

node* BTree:: removemin(node* p) { // удаление минимального узла
    if(p->left == 0) return p->right;
    p->left = removemin(p->left);
    return balance(p);
}

node* BTree:: remove(node* p, int k) { // удаление узла
    if( !p ) return 0;
    if( k < p->key ) p->left = remove(p->left,k);
    else if( k > p->key ) p->right = remove(p->right,k);
    else //  k == p->key
    {
        node* q = p->left;
        node* r = p->right;
        delete p;
        if( !r ) return q;
        node* min = findmin(r);
        min->right = removemin(r);
        min->left = q;
        return balance(min);
    }
    clear();
    return balance(p);
}

int BTree:: find(node* n, int k, int idx=0) { // Функция поиска узла
    if (n == nullptr) return -1;
    if (n->key < k) return find(n->right, k, idx * 2 + 2);
    if (n->key > k) return find(n->left, k, idx * 2 + 1);
    return idx;
}

void BTree:: print_node(node* root, std:: vector<int>& nums, int idx = 0) { // Рекурсивная функция вывода узлов в массив чисел
    if (root == nullptr) return;
    nums[idx] = root->key;
    print_node(root->left, nums, idx * 2 + 1);
    print_node(root->right, nums, idx * 2 + 2);
}

void BTree:: print() { // Вывод массива, полученного с помощью print_node()
    print_node(n, data);
    int i = 1
    for (int val : data)
      i = i + 1;
      if
      if (val != 0) std:: cout << val << ' ';
}

BTree:: BTree(int k) { // Конструктор для дерево сразу с первым узлом (корнем)
    n = new node(k);
    data.resize(1);
    _size = 0;
}

BTree:: BTree() { // Конструктор для пустого дерева
    n = nullptr;
    data.resize(0);
    _size = 0;
}

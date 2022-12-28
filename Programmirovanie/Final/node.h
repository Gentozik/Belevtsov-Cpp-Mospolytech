struct node { // У каждого узла есть:
	int key; // значение
	int height; // высота
	node* left; // узел слева
	node* right; // узел справа
	node(int k) { key = k; left = right = 0; height = 1; }
};

#include <bits/stdc++.h>
#include "BTreeBody.h"

void instruction() {
	std:: cout << "| 1 - Add node \n";
	std:: cout << "| 2 - Print Tree-Balanced Sequence of Numbers \n";
	std:: cout << "| 3 - Delete node \n";
	std:: cout << "| 4 - Find node index \n";
	std:: cout << "| 5 - Finish program \n";
	std:: cout << "| 6 - Help \n";
}

int main() {

// Первоначальное заполнение дерева

	BTree* no = new BTree();
	int n; std:: cout << "Number amount: "; // Сколько узлов будет в начальном дереве.
	std:: cin >> n;
	std:: cout << "Write number sequence (with Enter): "; // Ввод самих чисел с новой строки.
	for (int i = 0; i < n; i++) { // Заполнение самого дерева
		int x; std:: cin >> x;
		no->add(x);
	}
	instruction();

// Начало работы с амим деревом

	std::string cmd;
	int x = 1;
	while (x != 5) {
		std:: cout << "Write a command:" << '\n'; // Ввод самой команды
		std:: cin >> x;
		switch ( x ) {
			case 1:
				std:: cout << "Enter a number: ";
				int y; std:: cin >> y;
				no->add(y);
				break;
			case 2:
				std:: cout << "Current TBNS: ";
				no->print();
				std:: cout << '\n';
				break;
			case 3:
				std:: cout << "Enter a number: ";
				std:: cin >> y;
				no->del(y);
				break;
			case 4:
				std:: cout << "Enter a number: ";
				std:: cin >> y;
				std:: cout << no->search(y) << std::endl ;
				break;
			case 5:
				std:: cout << "Shutting down... ";
				break;
			case 6:
				instruction();
				break;
			default:
				std:: cout << "Wrong command! Type 6 for instructions" << std::endl;
				break;
		}
	}
}

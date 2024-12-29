#include "BorrowManager.h"

void BorrowManager::initializeStock(string title, int quantity) {
	stock.insert(make_pair(title, quantity));
}

void BorrowManager::borrowBook(string title) {
	if (stock[title] == 0) {
		cout << "�뿩 ������ å�� �����ϴ�." << endl;
		return;
	}
	stock[title] -= 1;
}

void BorrowManager::returnBook(string title) {
	if (stock[title] == 3) {
		cout << "�뿩�� å�� �����ϴ�." << endl;
		return;
	}
	stock[title] += 1;
}

void BorrowManager::displayStock() {
	cout << "���� å �뿩 ��Ȳ" << endl;
	for (pair<string, int> element : stock)
		cout << element.first << ", ���� å : " << element.second << endl;
}
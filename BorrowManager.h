#ifndef _BORROW_MANAGER_H_
#define _BORROW_MANAGER_H_

#include "Preprocessor.h"
#include "Book.h"

class BorrowManager {
private:
	unordered_map<Book, int> stock;
public:
	void initializeStock(Book book, int quantity = 3);
	void borrowBook(Book book);
	void returnBook(Book book);
	void displayStock();
};

void BorrowManager::initializeStock(Book book, int quantity = 3) {
	stock.insert(make_pair(book, quantity));
}

void BorrowManager::borrowBook(Book book) {
	if (stock[book] == 0) {
		cout << "�뿩 ������ å�� �����ϴ�." << endl;
		return;
	}
	stock[book]--;
}

void BorrowManager::returnBook(Book book) {
	if (stock[book] == 3) {
		cout << "�뿩�� å�� �����ϴ�." << endl;
		return;
	}
	stock[book]++;
}

void BorrowManager::displayStock() {
	cout << "���� å �뿩 ��Ȳ" << endl;
	for (pair<Book, int> element : stock)
		cout << element.first.getTitle() << " By " << element.first.getAuthor() << ", ���� å : " << element.second << endl;
}

#endif
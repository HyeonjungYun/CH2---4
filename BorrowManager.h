#ifndef _BORROW_MANAGER_H_
#define _BORROW_MANAGER_H_

#include "Preprocessor.h"
#include "Book.h"

class BorrowManager {
private:
	unordered_map<string, int> stock;
public:
	void initializeStock(string title, int quantity = 3);
	void borrowBook(string title);
	void returnBook(string title);
	void displayStock();
};

void BorrowManager::initializeStock(string title, int quantity) {
	stock.insert(make_pair(title, quantity));
}

void BorrowManager::borrowBook(string title) {
	if (stock[title] == 0) {
		cout << "대여 가능한 책이 없습니다." << endl;
		return;
	}
	stock[title] -= 1;
}

void BorrowManager::returnBook(string title) {
	if (stock[title] == 3) {
		cout << "대여된 책이 없습니다." << endl;
		return;
	}
	stock[title] += 1;
}

void BorrowManager::displayStock() {
	cout << "현재 책 대여 상황" << endl;
	for (pair<string, int> element : stock)
		cout << element.first << ", 남은 책 : " << element.second << endl;
}

#endif
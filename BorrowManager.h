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
		cout << "대여 가능한 책이 없습니다." << endl;
		return;
	}
	stock[book]--;
}

void BorrowManager::returnBook(Book book) {
	if (stock[book] == 3) {
		cout << "대여된 책이 없습니다." << endl;
		return;
	}
	stock[book]++;
}

void BorrowManager::displayStock() {
	cout << "현재 책 대여 상황" << endl;
	for (pair<Book, int> element : stock)
		cout << element.first.getTitle() << " By " << element.first.getAuthor() << ", 남은 책 : " << element.second << endl;
}

#endif
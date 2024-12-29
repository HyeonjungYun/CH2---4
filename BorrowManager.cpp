#include "BorrowManager.h"

void BorrowManager::initializeStock(string title, int quantity) {
	stock.insert(make_pair(title, quantity));
}

void BorrowManager::borrowBook(string title) {
	if (stock[title] == 0) {
		cout << "대여 가능한 책이 없습니다." << endl;
		return;
	}
	stock[title] -= 1;
	cout << title << "책을 1권 대여했습니다." << endl;
}

void BorrowManager::returnBook(string title) {
	if (stock[title] == 3) {
		cout << "대여된 책이 없습니다." << endl;
		return;
	}
	stock[title] += 1;
	cout << title << "책을 1권 반납했습니다." << endl;
}

void BorrowManager::displayStock() {
	cout << "현재 책 대여 상황" << endl;
	for (pair<string, int> element : stock)
		cout << element.first << ", 남은 책 : " << element.second << endl;
}
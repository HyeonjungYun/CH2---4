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

#endif
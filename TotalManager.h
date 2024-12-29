#ifndef _TOTAL_MANAGER_H_
#define _TOTAL_MANAGER_H_

#include "BookManager.h"
#include "BorrowManager.h"

class TotalManager {
private:
	BookManager* bookManager;
	BorrowManager* borrowManager;
public:
	TotalManager(BookManager& bookManager, BorrowManager& borrowManager) : bookManager(&bookManager), borrowManager(&borrowManager) {}
	void addBook(Book book);
};

void TotalManager::addBook(Book book) {
	bookManager->addBook(book.getTitle(), book.getAuthor());
	borrowManager->initializeStock(book);
}

#endif
#ifndef _LIBRARY_MANAGER_H_
#define _LIBRARY_MANAGER_H_

#include "BookManager.h"
#include "BorrowManager.h"

class LibraryManager {
public:
	void InitializeBook(string title, string author, BookManager& bookManager, BorrowManager& borrowManager);
	void borrowBookByAuthor(string author, BookManager& bookManager, BorrowManager& borrowManager);
	void manageSystem();
};

#endif
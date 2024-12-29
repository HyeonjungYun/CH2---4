#ifndef _BOOK_MANAGER_H_
#define _BOOK_MANAGER_H_

#include "Preprocessor.h"
#include "Book.h"

class BookManager {
private:
	vector<Book> books;
public :
	void addBook(string title, string author);
	void displayAllBooks();
	void searchByTitle(string title);
	void searchByAuthor(string author);
	bool checkDuplication(string title);
	void printBook(Book book);
};

#endif
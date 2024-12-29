#ifndef _BOOK_H_
#define _BOOK_H_

#include "Preprocessor.h"

class Book {
private:
	string title;
	string author;
public:
	Book() : title("None"), author("None") {}
	Book(string title, string author) : title(title), author(author) {}
	string getTitle();
	string getAuthor();
};

#endif

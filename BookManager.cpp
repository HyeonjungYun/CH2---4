#include "BookManager.h"

bool BookManager::checkDuplication(string title) {
	for (Book book : books)
		if (title == book.getTitle()) return true;
	return false;
}

void BookManager::addBook(string title, string author) {
	books.push_back(Book(title, author));
}

void BookManager::printBook(Book book) {
	cout << "Title : " << book.getTitle() << " By " << book.getAuthor() << endl;
}

void BookManager::displayAllBooks() {
	for (Book book : books)
		printBook(book);
}

void BookManager::searchByTitle(string title) {
	cout << "���� å ��� : " << endl;

	for (Book book : books)
		if (book.getTitle() == title) {
			printBook(book);
			return;
		}

	cout << "��ġ�ϴ� å�� �����ϴ�." << endl;
}

void BookManager::searchByAuthor(string author) {
	bool isThereBook = false;
	for (Book book : books)
		if (book.getAuthor() == author) {
			printBook(book);
			isThereBook = true;
		}

	if (!isThereBook)
		cout << "��ġ�ϴ� å�� �����ϴ�." << endl;
}

vector<string> BookManager::boundBookByAuthor(string author) {
	vector<string> out;

	for (Book book : books)
		if (book.getAuthor() == author) 
			out.push_back(book.getTitle());

	return out;
}
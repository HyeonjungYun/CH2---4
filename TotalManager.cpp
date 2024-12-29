#include "TotalManager.h"

void TotalManager::addBook(string title, string author) {
	if (bookManager->checkDuplication(title)) {
		cout << "å �̸��� �ߺ��˴ϴ�." << endl;
		return;
	}
	bookManager->addBook(title, author);
	borrowManager->initializeStock(title);
}

void TotalManager::borrowBookByAuthor(string author) {
	vector<string> titles = bookManager->boundBookByAuthor(author);

	for (string title : titles)
		borrowManager->borrowBook(title);
}
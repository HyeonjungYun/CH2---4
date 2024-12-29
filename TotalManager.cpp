#include "TotalManager.h"

void TotalManager::addBook(string title, string author) {
	if (bookManager->checkDuplication(title)) {
		cout << "책 이름이 중복됩니다." << endl;
		return;
	}
	bookManager->addBook(title, author);
	borrowManager->initializeStock(title);
}
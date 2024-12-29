#include "TotalManager.h"

void TotalManager::addBook(string title, string author) {
	if (bookManager->checkDuplication(title)) {
		cout << "å �̸��� �ߺ��˴ϴ�." << endl;
		return;
	}
	bookManager->addBook(title, author);
	borrowManager->initializeStock(title);
}
#include "LibraryManager.h"

void LibraryManager::InitializeBook(string title, string author, BookManager &bookManager, BorrowManager &borrowManager) {
	if (bookManager.checkDuplication(title)) {
		cout << "å �̸��� �ߺ��˴ϴ�." << endl;
		return;
	}
	bookManager.addBook(title, author);
	borrowManager.initializeStock(title);
}

void LibraryManager::borrowBookByAuthor(string author, BookManager& bookManager, BorrowManager& borrowManager) {
	vector<string> titles = bookManager.boundBookByAuthor(author);

	for (string title : titles)
		borrowManager.borrowBook(title);
}

void LibraryManager::manageSystem() {
	BookManager bookManager;
	BorrowManager borrowManager;

	while (1) {
		string choice;
		cout << "1. å �űԵ��" << endl;
		cout << "2. å ���" << endl;
		cout << "3. ���� �뿩 ��Ȳ" << endl;
		cout << "4. å �������� å ã��" << endl;
		cout << "5. �۰� �̸����� å ã��" << endl;
		cout << "6. å �̸����� å �뿩" << endl;
		cout << "7. �۰� �̸����� å �뿩" << endl;
		cout << "8. ����" << endl;
		cout << "�Է� : ";
		getline(cin, choice);
		cout << choice << endl;

		if (choice == "1") {
			string title, author;
			cout << "Title : ";
			getline(cin, title);
			cout << "Author : ";
			getline(cin, author);
			InitializeBook(title, author, bookManager, borrowManager);
		}
		if (choice == "2") bookManager.displayAllBooks();
		if (choice == "3") borrowManager.displayStock();
		if (choice == "4") {
			string title;
			cout << "Title : ";
			getline(cin, title);
			bookManager.searchByTitle(title);
		}
		if (choice == "5") {
			string author;
			cout << "Author : ";
			getline(cin, author);
			bookManager.searchByAuthor(author);
		}
		if (choice == "6") {
			string title;
			cout << "Title : ";
			getline(cin, title);

			borrowManager.borrowBook(title);
		}
		if (choice == "7") {
			string author;
			cout << "Author : ";
			getline(cin, author);

			borrowBookByAuthor(author, bookManager, borrowManager);
		}
		if (choice == "8") break;
	}
}
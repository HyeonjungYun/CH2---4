#include "Preprocessor.h"
#include "BookManager.h"
#include "BorrowManager.h"
#include "TotalManager.h"

int main() {
	BookManager bookManager;
	BorrowManager borrowManager;
	TotalManager totalManager(bookManager, borrowManager);
	while (1) {
		string choice;
		cout << "1. 책 신규등록" << endl;
		cout << "2. 책 목록" << endl;
		cout << "3. 현재 대여 현황" << endl;
		cout << "4. 책 제목으로 책 찾기" << endl;
		cout << "5. 작가 이름으로 책 찾기" << endl;
		cout << "6. 책 이름으로 책 대여" << endl;
		cout << "7. 작가 이름으로 책 대여" << endl;
		cout << "8. 종료" << endl;
		cout << "입력 : ";
		getline(cin, choice);
		cout << choice << endl;

		if (choice == "1") {
			string title, author;
			cout << "Title : ";
			getline(cin, title);
			cout << "Author : ";
			getline(cin, author);
			totalManager.addBook(title, author);
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

			totalManager.borrowBookByAuthor(author);
		}
		if (choice == "8") break;
	}
}
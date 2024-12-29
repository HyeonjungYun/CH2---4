#include "Preprocessor.h"
#include "BookManager.h"

int main() {
	BookManager bookmanager;
	while (1) {
		int selNum;
		cout << "1.책 신규등록 2. 현재 책 출력 3.제목으로 책 찾기 4.작가이름으로 책 찾기 5.종료" << endl;
		cin >> selNum;

		if (selNum == 1) {
			string title, author;
			cout << "Title : ";
			cin >> title;
			cout << "Author : ";
			cin >> author;
			bookmanager.addBook(title, author);
		}
		if (selNum == 2) bookmanager.displayAllBooks();
		if (selNum == 3) {
			string title;
			cout << "Title : ";
			cin >> title;
			bookmanager.searchByTitle(title);
		}
		if (selNum == 4) {
			string author;
			cout << "Author : ";
			cin >> author;
			bookmanager.searchByAuthor(author);
		}
		if (selNum == 5) break;
		if (!(selNum >= 1 && selNum <= 5)) {
			cout << "잘못 입력하셨습니다." << endl;
			getchar();
			getchar();
		}
	}
}
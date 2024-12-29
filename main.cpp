#include "Preprocessor.h"
#include "BookManager.h"

int main() {
	BookManager bookmanager;
	while (1) {
		int selNum;
		cout << "1.å �űԵ�� 2. ���� å ��� 3.�������� å ã�� 4.�۰��̸����� å ã�� 5.����" << endl;
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
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			getchar();
			getchar();
		}
	}
}
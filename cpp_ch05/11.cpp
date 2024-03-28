#include <iostream>
#include <string>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
	Book(const Book& book); // (2) �����Ϸ��� �����ϴ� ����Ʈ ������
};

// 11-(1) BookŬ������ ������, �Ҹ���, set()�Լ� �ۼ�
Book::Book(const char* title, int price) {
	this->title = new char[100];
	strcpy(this->title, title);
	this->price = price;
}
Book::~Book(){
	if (this->title) // �����Ҵ�� �޸𸮰� �ִٸ�
		delete[] title;
}
void Book::set(char* title, int price) {
	if (this->title) // title�� �Ҵ�� �޸𸮰� �ִٸ�
		delete[] title;
	this->title = new char[100];
	this->title = title;
	this->price = price;
}
// (2) �����Ϸ��� �����ϴ� ����Ʈ ���� ������ �ڵ�� �����ΰ�?
/*Book::Book(const Book& book) {
	this->title = book.title;
	this->price = book.price;
}
*/

int main() {
	Book cpp("��ǰ C++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}
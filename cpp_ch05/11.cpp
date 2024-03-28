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
	void show() { cout << title << ' ' << price << "원" << endl; }
	Book(const Book& book); // (2) 컴파일러가 삽입하는 디폴트 생성자
};

// 11-(1) Book클래스의 생성자, 소멸자, set()함수 작성
Book::Book(const char* title, int price) {
	this->title = new char[100];
	strcpy(this->title, title);
	this->price = price;
}
Book::~Book(){
	if (this->title) // 동적할당된 메모리가 있다면
		delete[] title;
}
void Book::set(char* title, int price) {
	if (this->title) // title에 할당된 메모리가 있다면
		delete[] title;
	this->title = new char[100];
	this->title = title;
	this->price = price;
}
// (2) 컴파일러가 삽입하는 디폴트 복사 생성자 코드는 무엇인가?
/*Book::Book(const Book& book) {
	this->title = book.title;
	this->price = book.price;
}
*/

int main() {
	Book cpp("명품 C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
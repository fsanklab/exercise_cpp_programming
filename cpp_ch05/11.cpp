#include <iostream>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

// 11-(1) Book클래스의 생성자, 소멸자, set()함수 작성
Book::Book(const char* title, int price) {
	this->title = title;
	this->price = price;
	// const char*  vs  char*차이점부터 공부하고 마저 하기

}
Book::~Book();
void Book::set(char* title, int price); 

int main() {

}
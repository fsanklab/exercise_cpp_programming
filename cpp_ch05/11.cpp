#include <iostream>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
};

// 11-(1) BookŬ������ ������, �Ҹ���, set()�Լ� �ۼ�
Book::Book(const char* title, int price) {
	this->title = title;
	this->price = price;
	// const char*  vs  char*���������� �����ϰ� ���� �ϱ�

}
Book::~Book();
void Book::set(char* title, int price); 

int main() {

}
#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person() : Person("�̸�����") {};
	Person(string name) { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person* p;
	string familyName;
	int size;
public:
	Family() : Family("�̸�����", 0) {};
	Family(string name, int size);
	void setName(int index, string name);
	void show();
	~Family();
};
Family::Family(string name, int size) {
	familyName = name;
	this->size = size;
	p = new Person[size];
}
void Family::setName(int index, string name) {
	p[index].setName(name);
}
void Family::show() {
	cout << familyName << "������ ������ ���� " << this->size << "�� �Դϴ�." << endl;
	for (int i = 0; i < size; i++) {
		cout << p->getName() << '\t';
		p++;
	}
	cout << endl;
}
Family::~Family() {
	delete[] p;
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Ms. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}
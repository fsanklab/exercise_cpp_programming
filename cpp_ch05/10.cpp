#include <iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
	Buffer& append(Buffer& b, string n);
};
Buffer& Buffer::append(Buffer& b, string n) {
	b.add(n);
	return b;
}

int main() {
	Buffer buf("Hello");
	Buffer& tmp = buf.append(buf, "Guys");
	tmp.print();
	buf.print();
}
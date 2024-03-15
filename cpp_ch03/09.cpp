#include <iostream>
using namespace std;

class Oval {
	int width, height;
public:
	Oval() : Oval(1, 1) {}
	Oval(int w, int h);
	~Oval();
	int getWidth() { return width; }
	int getHeight() { return height; }
	void set(int w, int h);
	void show();
};
Oval::Oval(int w, int h) {
	this->width = w;
	this->height = h;
}
Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl;
}
void Oval::set(int w, int h) {
	this->width = w;
	this->height = h;
}
void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}
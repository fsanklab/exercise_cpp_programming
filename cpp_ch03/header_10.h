#ifndef HEADER_10
#define HEADER_10

class Add {
	int a, b;
public:
	Add() : Add(1, 1) {}
	Add(int a, int b);
	void setValue(int a, int b);
	int caculate();
};

class Sub {
	int a, b;
public:
	Sub() : Sub(1, 1) {}
	Sub(int a, int b);
	void setValue(int a, int b);
	int caculate();
};

class Mul {
	int a, b;
public:
	Mul() : Mul(1, 1) {}
	Mul(int a, int b);
	void setValue(int a, int b);
	int caculate();
};

class Div {
	int a, b;
public:
	Div() : Div(1, 1) {}
	Div(int a, int b);
	void setValue(int a, int b);
	int caculate();
};
#endif 

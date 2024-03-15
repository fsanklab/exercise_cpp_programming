#include "header_10.h"

// Add 클래스 구현부
Add::Add(int a, int b) {
	this->a = a;
	this->b = b;
}
void Add::setValue(int a, int b) {
	this->a = a;
	this->b = b;
}
int Add::caculate() {
	return (this->a + this->b);
}

// Sub 클래스 구현부
Sub::Sub(int a, int b) {
	this->a = a;
	this->b = b;
}
void Sub::setValue(int a, int b) {
	this->a = a;
	this->b = b;
}
int Sub::caculate() {
	return (this->a - this->b);
}

// Mul 클래스 구현부
Mul::Mul(int a, int b) {
	this->a = a;
	this->b = b;
}
void Mul::setValue(int a, int b) {
	this->a = a;
	this->b = b;
}
int Mul::caculate() {
	return (this->a * this->b);
}

// Div 클래스 구현부
Div::Div(int a, int b) {
	this->a = a;
	this->b = b;
}
void Div::setValue(int a, int b) {
	this->a = a;
	this->b = b;
}
int Div::caculate() {
	return (this->a / this->b);
}
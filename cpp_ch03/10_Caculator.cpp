#include "header_10.h"

// Add Ŭ���� ������
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

// Sub Ŭ���� ������
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

// Mul Ŭ���� ������
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

// Div Ŭ���� ������
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
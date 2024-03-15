#include <iostream>
using namespace std;

class Account {
	string owner;
	int num, money;
public:
	Account() : Account("알수없음", 0, 0) {};
	Account(string o, int n, int m);
	void deposit(int n);
	int widthdraw(int n);
	int inquiry();
	string getOwner();
};
Account::Account(string o, int n, int m) {
	owner = o;
	num = n;
	money = m;
}
void Account::deposit(int n) {
	money += n;
}
int Account::widthdraw(int n) {
	money -= n;
	return n;
}
int Account::inquiry() {
	return money;
}
string Account::getOwner() {
	return owner;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.widthdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
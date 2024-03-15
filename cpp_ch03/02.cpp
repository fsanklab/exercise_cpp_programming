#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int year, month, day;
public:
	Date():Date(2000, 1, 1) {};
	Date(int y, int m, int d);
	Date(string str);
	void show();
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};
Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
Date::Date(string s) {
	char ch[100];
	strcpy(ch, s.c_str());
	year = stoi(strtok(ch, "/"));
	month = stoi(strtok(NULL, "/"));
	day = stoi(strtok(NULL, "/"));
}
void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << '\n';
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string str;
	int alphabet[26] = { 0 };
	int count = 0;
public:
	Histogram() : Histogram("") {};
	Histogram(string str) { this->str = str; this->str += '\n'; }
	void put(string str);
	void putc(char c);
	void print();
};
// Histogram 클래스 구현부
void Histogram::put(string str) {
	this->str += str;
}
void Histogram::putc(char c) {
	this->str += c;
}
void Histogram::print() {
	// 대문자->소문자 변환
	for (int i = 0; i < str.length(); i++)
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	// 알파벳 카운트 + alphabet[]에 카운팅
	int i = 0;
	while (str[i] != NULL) {
		if (isalpha(str[i])) count++;
		alphabet[str[i] - 97]++;
		i++;
	}

	// 카운팅 할 문장, 알파벳 수 출력
	cout << str << endl << endl;
	cout << "총 알파벳 수 " << count << endl << endl;

	// 히스토그램 출력
	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 97) << " (" << alphabet[i] << ")\t: ";
		for (int j = 0; j < alphabet[i]; j++)
			cout << "*";
		cout << '\n';
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}
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
// Histogram Ŭ���� ������
void Histogram::put(string str) {
	this->str += str;
}
void Histogram::putc(char c) {
	this->str += c;
}
void Histogram::print() {
	// �빮��->�ҹ��� ��ȯ
	for (int i = 0; i < str.length(); i++)
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	// ���ĺ� ī��Ʈ + alphabet[]�� ī����
	int i = 0;
	while (str[i] != NULL) {
		if (isalpha(str[i])) count++;
		alphabet[str[i] - 97]++;
		i++;
	}

	// ī���� �� ����, ���ĺ� �� ���
	cout << str << endl << endl;
	cout << "�� ���ĺ� �� " << count << endl << endl;

	// ������׷� ���
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
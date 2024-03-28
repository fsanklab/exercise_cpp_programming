#include <iostream>
#include <string>
using namespace std;

class Morse {
	string alphabet[26];	// ���ĺ��� �𽺺�ȣ ����
	string digit[10];		// ������ �𽺺�ȣ ����
	string slash, question, comma, period, plus, equal;		// Ư�������� �𽺺�ȣ ����
public:
	Morse();	// alphabet[], digit[] �ʱ�ȭ
	void text2Morse(string text, string& morse);	// ���� �ؽ�Ʈ --> �� ��ȣ
	bool morse2Text(string morse, string& text);	// �𽺺�ȣ --> ���� �ؽ�Ʈ
	bool isAlphabet(string str, int& index);
	bool isDigit(string str, int& index);
};
Morse::Morse() {
	// A ~ E
	alphabet[0] = ".-"; alphabet[1] = "-..."; alphabet[2] = "-.-."; alphabet[3] = "-.."; alphabet[4] = ".";
	// F ~ J
	alphabet[5] = "..-."; alphabet[6] = "--."; alphabet[7] = "...."; alphabet[8] = ".."; alphabet[9] = ".---";
	// K ~ O
	alphabet[10] = "-.-"; alphabet[11] = ".-.."; alphabet[12] = "--"; alphabet[13] = "-."; alphabet[14] = "---";
	// P ~ T
	alphabet[15] = ".--."; alphabet[16] = "--.-"; alphabet[17] = ".-."; alphabet[18] = "..."; alphabet[19] = "-";
	// U ~ Z
	alphabet[20] = "..-"; alphabet[21] = "...-"; alphabet[22] = ".--"; alphabet[23] = "-..-"; alphabet[24] = "-.--"; alphabet[25] = "--..";
	
	// 1 ~ 3
	 digit[0] = "-----"; digit[1] = ".----"; digit[2] = "..---"; digit[3] = "...--";
	// 4 ~ 9
	digit[4] = "....-"; digit[5] = "....."; digit[6] = "-...."; digit[7] = "--..."; digit[8] = "----.."; digit[9] = "----.";
	
	// / ~ =
	slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-"; plus = ".-.-."; equal = "-...-";
}
void Morse::text2Morse(string text, string& morse) {
	for (int i = 0; i < text.length(); i++) {
		// 0. ��ĭ�̶��
		if (text[i] == ' ') {
			morse += "   ";
			continue;
		}
		// 1. ���ĺ��̶��
		else if (isalpha(text[i]))
			morse += alphabet[text[i] - 97];
		// 2. ���ڶ��
		else if (isdigit(text[i]))
			morse += digit[text[i] - '0'];
		// 3. Ư�����ڶ��
		else if (text[i] == '/')
			morse += slash;
		else if (text[i] == '?')
			morse += question;
		else if (text[i] == ',')
			morse += comma;
		else if (text[i] == '.')
			morse += period;
		else if (text[i] == '+')
			morse += plus;
		else // equal�� ���
			morse += equal;
		if (text[i+1] != ' ')
			morse += ' ';
	}
	// �������� ����Ű ����
	morse += '\n';
	// ���
	cout << morse << endl;
}

bool Morse::morse2Text(string morse, string& text) {
	string word = "";
	int i = 0, index;
	while (1) {
		// 1. null���ڶ�� break;
		if (morse[i] == '\n') return true;

		// 2. ��ĭ�� �����ٸ�
		else if (morse[i] == ' ') {
			// word�� ������ �𽺺�ȣ�� �ܾ�� ��ȯ
				// 1. ���ĺ��̶��
			if (isAlphabet(word, index)) 
				text += (char)(index + 'a');

			// 2. ���ڶ��
			else if (isDigit(word, index))
				text += (char)(index + '0');

			// 3. Ư�����ڶ��
			else if (word == slash) text += '/';
			else if (word == question) text += '?';
			else if (word == comma) text += ',';
			else if (word == period) text += '.';
			else if (word == plus) text += '+';
			else text += '=';

			word = ""; // �ܾȯ ��, ���幮�ڿ� �ʱ�ȭ
			i++;

			// ���� ���ڵ� ��ĭ�� ��� (��ĭ 3��¥�� ���� ���)
			if (morse[i] == ' ') {
				text += ' ';
				i += 2; // ��ĭ �������ڷ� �ε��� �̵�
				word = ""; // �ܾȯ ��, ���幮�ڿ� �ʱ�ȭ
			}
		}

		// 3. ��ĭ�� �ƴ϶��
		else {
			word += morse[i]; 
			i++; // ��� �о����.
		}
	}
	text = "��ȯ ����";
	return false;
}
bool Morse::isAlphabet(string str, int& index) {
	for (int i = 0; i < 26; i++) 
		if (str == alphabet[i]) {
			index = i;
			return true;
		}
	return false;
}
bool Morse::isDigit(string str, int& index) {
	for (int i=0;i<10;i++)
		if (str == digit[i]) {
			index = i;
			return true;
		}
	return false;
}

int main() {
	Morse m;
	string str, morse = "";
	cout << "�Ʒ��� ���� �ؽ�Ʈ�� �Է��ϼ���. �� ��ȣ�� �ٲߴϴ�.\n";
	getline(cin, str);
	m.text2Morse(str, morse);

	str = ""; // �𽺺�ȣ->�����ڿ� ��ȯ�� ���� ���ڿ� �ʱ�ȭ
	cout << "�� ��ȣ�� �ٽ� ���� �ؽ�Ʈ�� �ٲߴϴ�.\n";
	if (m.morse2Text(morse, str))
		cout << str << endl;
	else
		cout << "��ȯ�� �����Ͽ����ϴ�.\n";
}
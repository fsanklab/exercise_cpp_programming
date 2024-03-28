#include <iostream>
#include <string>
using namespace std;

class Morse {
	string alphabet[26];	// 알파벳의 모스부호 저장
	string digit[10];		// 숫자의 모스부호 저장
	string slash, question, comma, period, plus, equal;		// 특수문자의 모스부호 저장
public:
	Morse();	// alphabet[], digit[] 초기화
	void text2Morse(string text, string& morse);	// 영문 텍스트 --> 모스 부호
	bool morse2Text(string morse, string& text);	// 모스부호 --> 영문 텍스트
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
		// 0. 빈칸이라면
		if (text[i] == ' ') {
			morse += "   ";
			continue;
		}
		// 1. 알파벳이라면
		else if (isalpha(text[i]))
			morse += alphabet[text[i] - 97];
		// 2. 숫자라면
		else if (isdigit(text[i]))
			morse += digit[text[i] - '0'];
		// 3. 특수문자라면
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
		else // equal의 경우
			morse += equal;
		if (text[i+1] != ' ')
			morse += ' ';
	}
	// 마지막에 엔터키 삽입
	morse += '\n';
	// 출력
	cout << morse << endl;
}

bool Morse::morse2Text(string morse, string& text) {
	string word = "";
	int i = 0, index;
	while (1) {
		// 1. null문자라면 break;
		if (morse[i] == '\n') return true;

		// 2. 빈칸을 만난다면
		else if (morse[i] == ' ') {
			// word에 저장한 모스부호를 단어로 변환
				// 1. 알파벳이라면
			if (isAlphabet(word, index)) 
				text += (char)(index + 'a');

			// 2. 숫자라면
			else if (isDigit(word, index))
				text += (char)(index + '0');

			// 3. 특수문자라면
			else if (word == slash) text += '/';
			else if (word == question) text += '?';
			else if (word == comma) text += ',';
			else if (word == period) text += '.';
			else if (word == plus) text += '+';
			else text += '=';

			word = ""; // 단어변환 후, 저장문자열 초기화
			i++;

			// 다음 문자도 빈칸인 경우 (빈칸 3개짜리 만난 경우)
			if (morse[i] == ' ') {
				text += ' ';
				i += 2; // 빈칸 다음문자로 인덱스 이동
				word = ""; // 단어변환 후, 저장문자열 초기화
			}
		}

		// 3. 빈칸이 아니라면
		else {
			word += morse[i]; 
			i++; // 계속 읽어들임.
		}
	}
	text = "변환 실패";
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
	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다.\n";
	getline(cin, str);
	m.text2Morse(str, morse);

	str = ""; // 모스부호->영문자열 변환을 위한 문자열 초기화
	cout << "모스 부호를 다시 영문 텍스트로 바꿉니다.\n";
	if (m.morse2Text(morse, str))
		cout << str << endl;
	else
		cout << "변환에 실패하였습니다.\n";
}
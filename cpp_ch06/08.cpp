#include <iostream>
using namespace std;

class Trace {
	static string tag[];
	static string msg[];
	static int tag_index;
	static int msg_index;
public:
	static void put(string t, string m);
	static void print(string t="");
};
string Trace::tag[100];
string Trace::msg[100];
int Trace::tag_index = 0;
int Trace::msg_index = 0;

void Trace::put(string t, string m) {
	tag[tag_index++] = t;
	msg[msg_index++] = m;
}
void Trace::print(string t) {
	if (t == "") {
		cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < tag_index; i++)
			cout << tag[i] << ':' << msg[i] << endl;
	}
	else {
		cout << "----- f()태그의 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < tag_index; i++)
			if (tag[i] == "f()")
				cout << tag[i] << ':' << msg[i] << endl;
	}
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}
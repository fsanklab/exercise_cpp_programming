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
		cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < tag_index; i++)
			cout << tag[i] << ':' << msg[i] << endl;
	}
	else {
		cout << "----- f()�±��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < tag_index; i++)
			if (tag[i] == "f()")
				cout << tag[i] << ':' << msg[i] << endl;
	}
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}
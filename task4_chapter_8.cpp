#include <iostream>
#include <cstring>
using namespace std;

struct stringy {
	char* str;
	int ct;
};


void set(stringy& st, const char* testing);
void show(const stringy& st, int n = 1);
void show(const char* test, int n = 1);

int main() {
	stringy beany;
	char testing[] = "Reality is not what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';

	show(testing);
	show(testing, 3);
	show("Done!");

	return 0;
}

void set(stringy& st, const char* testing) {
	int len = strlen(testing);
	char* str1 = new char[len];
	strcpy(str1, testing);
	st.str = str1;
	st.ct = len;
}

void show(const stringy& st, int n) {
	if (n == 2) {
		cout << st.str << endl;
		cout << st.str << endl;
	}
	else
		cout << st.str << endl;
}

void show(const char* test, int n) {
	if (n == 3) {
		cout << test << endl;
		cout << test << endl;
		cout << test << endl;
	}
	else
		cout << test << endl;

}
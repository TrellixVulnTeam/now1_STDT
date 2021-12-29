#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<int, string> coding;
	string letter, final_word;
	int code;
	cout << "String parts to codes: " << endl;
	do {
		cout << ">> ";
		cin >> letter >> code;
		if (letter != "-" && code != 0) {
			coding[code] = letter;
		}
	} while (letter != "-" && code != 0);
	cout << "Codes:" << endl;
	do {
		cout << ">> ";
		cin >> code;
		if (code > 0) {
			final_word += coding[code];
		}
	} while (code > 0);
	cout << "Result: \"" << final_word << "\"";
	return 0;
}
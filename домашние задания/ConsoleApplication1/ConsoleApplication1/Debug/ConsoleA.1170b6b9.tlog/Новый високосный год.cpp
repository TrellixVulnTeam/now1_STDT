#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a % 4 != 0) if (a % 100 != 0) {
		cout << "no";
	}
	if (a % 100 != 0) if (a % 4 == 0) {
		cout << "yes";
	}
	if (a % 100 == 0) if (a % 400 == 0) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	return 0;
}
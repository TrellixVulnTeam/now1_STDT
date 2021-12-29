#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <array>

using namespace std;

int main()
{
	array<string, 4> element_of_vector;
	array<string, 4> input_values;
	cout << "Enter customers info:" << endl;
	vector<array<string, 4>> info;
	string num1, num2, num3, num4;
	int max_name = 0, max_num = 0;
	while (true) {
		cout << ">> ";
		cin >> num1 >> num2 >> num3 >> num4;
		if ((num1 == "-") && (num2 == "-") && (num3 == "-") && (num4 == "-")) break;
		input_values = { num1, num2, num3, num4 };
		for (int i = 0; i < 4; ++i) {
			if (input_values.at(i)[0] == '#') {
				element_of_vector.at(0) = input_values.at(i);
				if (input_values.at(i).size() > max_num) max_num = input_values.at(i).size();
			}
			else if (input_values.at(i)[0] == '+') {
				element_of_vector.at(3) = input_values.at(i);
			}
			else if (input_values.at(i).size() == 2) {
				element_of_vector.at(2) = input_values.at(i);
			}
			else {
				element_of_vector.at(1) = input_values.at(i);
				if (input_values.at(i).size() > max_name) max_name = input_values.at(i).size();
			}
		}
		info.push_back(element_of_vector);
	}
	cout << "> Customers info <" << endl;
	for (int i = 0; i < info.size(); ++i) {
		cout << setw(max_num) << left << info.at(i).at(0) << " > "
			<< setw(max_name) << info.at(i).at(1) << " | tel: ("
			<< info.at(i).at(2) << ") " << info.at(i).at(3) << endl;
	}
}
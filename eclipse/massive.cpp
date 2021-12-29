#include <array>
#include <bitset>
#include <iostream>
#include <string>

const int size = 12;

bool checkAnswer(std::string answer) {
    if (answer == "yes" || answer == "ok") return true;
    return false;
}

void summAndAlterSumm(std::bitset<size>& bits, std::array<int, size>& myArr,
    int& summ) {
    for (int i = 0; i < size; ++i) {
        if (bits[i]) summ += myArr[i];
    }
}

int main() {
    int summ = 0, alterSumm = 0;
    const int size = 12;
    std::array<int, size> myArr;
    std::bitset<size> bits;
    std::cout << "Values:\n";

    for (int i = 0; i < size; ++i) {
        std::cout << i + 1 << ") ";
        std::cin >> myArr[i];
    }

    std::cout << "Include in summ:\n";

    for (int i = 0; i < size; ++i) {
        std::string answer;
        std::cout << i + 1 << ") ";
        std::cin >> answer;
        bits[i] = checkAnswer(answer);
    }

    summAndAlterSumm(bits, myArr, summ);
    bits.flip();
    summAndAlterSumm(bits, myArr, alterSumm);

    std::cout << "Sum: " << summ << "\n";
    std::cout << "Alter summ: " << alterSumm << "\n";

    system("pause");
    return 0;
}

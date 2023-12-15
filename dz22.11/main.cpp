#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void SetCp1251() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

void countCharacters(const string& str) {
    int letters = 0, digits = 0, others = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            letters++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else {
            others++;
        }
    }

    cout << "Літер: " << letters << endl;
    cout << "Цифр: " << digits << endl;
    cout << "Інших символів: " << others << endl;
}

int main() {
    SetCp1251();

    string inputString;
    cout << "Введіть рядок: ";
    getline(cin, inputString);

    countCharacters(inputString);

    return 0;
}
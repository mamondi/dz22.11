#include <iostream>
#include <Windows.h>

using namespace std;

void SetCp1251() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

void countCharacters(string& str) {
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
    cout << "Введіть рядок символів: ";
    getline(cin, inputString);

    countCharacters(inputString);

    return 0;
}
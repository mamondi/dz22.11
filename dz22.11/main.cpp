#include <iostream>
#include <Windows.h>
#include <sstream>
#include <string>

using namespace std;

void SetCp1251() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

int countWords(const string& str) {
    istringstream iss(str);
    int count = 0;
    string word;

    while (iss >> word) {
        count++;
    }

    return count;
}

int main() {
    SetCp1251();

    string inputString;
    cout << "Введіть рядок: ";
    getline(cin, inputString);

    int wordCount = countWords(inputString);

    cout << "Кількість слів: " << wordCount << endl;

    return 0;
}
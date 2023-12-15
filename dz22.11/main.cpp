#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void SetCp1251() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

int countOccurrences(const string& str, char ch) {
    return count(str.begin(), str.end(), ch);
}

int main() {
    SetCp1251();

    string inputString;
    cout << "������ ����� �������: ";
    getline(cin, inputString);

    char targetChar;
    cout << "������ ������� ������: ";
    cin >> targetChar;

    int occurrences = countOccurrences(inputString, targetChar);

    cout << "������ '" << targetChar << "' ����������� " << occurrences << " ���(�).\n";

    return 0;
}
#include <iostream>
#include <Windows.h>

using namespace std;

void SetCp1251() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

void replaceSpacesWithTabs(string& str) {
    for (char& ch : str) {
        if (ch == ' ') {
            ch = '\t';
        }
    }
}

int main() {
    SetCp1251();

    string inputString;
    cout << "������ ����� �������: ";
    getline(cin, inputString);

    replaceSpacesWithTabs(inputString);

    cout << "���������: " << inputString << endl;

    return 0;
}
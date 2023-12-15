#include <iostream>
#include <Windows.h>

using namespace std;

void SetCp1251() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    SetCp1251();

    string inputString;
    cout << "������ �����: ";
    getline(cin, inputString);

    if (isPalindrome(inputString)) {
        cout << "����� � ����������." << endl;
    } else {
        cout << "����� �� � ����������." << endl;
    }

    return 0;
}
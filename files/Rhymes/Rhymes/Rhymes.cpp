#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string term;
    char res[200];
    FILE* f;
    cout << "Введите слово: ";
    cin >> term;

    fopen_s(&f, "db.txt", "r");

    while (true) {
        fgets(res, 199, f);
        string temp = res;
        if (feof(f) != 0) {
            break;
        }
        if (term[term.length() - 2] == temp[temp.length() - 3] &&
            term[term.length() - 1] == temp[temp.length() - 2]) {
            cout << temp;
        }
    }
    fclose(f);
}
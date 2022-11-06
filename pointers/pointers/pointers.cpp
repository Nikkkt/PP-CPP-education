#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));

    //1
    int size1;
    cin >> size1;
    int* num1 = new int[size1];
    int* num2 = new int[size1];
    for (int i = 0; i < size1; i++) {
        *(num1 + i) = rand() % 2000 - 1000;
    }
    cout << "Num1: ";
    for (int i = 0; i < size1; i++) {
        cout << *(num1 + i) << " ";
    }
    for (int i = 0; i < size1; i++) {
        *(num2 + i) = *(num1 + i);
    }
    cout << endl << "Num2: ";
    for (int i = 0; i < size1; i++) {
        cout << *(num2 + i) << " ";
    }
    cout << endl;
    delete[] num1;
    delete[] num2;
    num1 = nullptr;
    num2 = nullptr;

    //2
    int size2, tmp;
    cin >> size2;
    int* num3 = new int[size2];
    for (int i = 0; i < size2; i++) {
        *(num3 + i) = rand() % 2000 - 1000;
        cout << *(num3 + i) << " ";
    }
    for (int i = 0; i < size2 / 2; i++) {
        tmp = *(num3 + i);
        *(num3 + i) = *(num3 + size2 - i - 1);
        *(num3 + size2 - i - 1) = tmp;
    }
    cout << endl;
    for (int i = 0; i < size2; i++) {
        cout << *(num3 + i) << " ";
    }
    cout << endl;
    delete[] num3;
    num3 = nullptr;

    //3
    int size3;
    cin >> size3;
    int* num4 = new int[size3];
    int* num5 = new int[size3];
    for (int i = 0; i < size3; i++) {
        *(num4 + i) = rand() % 2000 - 1000;
    }
    for (int i = 0; i < size3; i++) {
        *(num5 + i) = *(num4 + size3 - 1 - i);
    }
    cout << "Num1: ";
    for (int i = 0; i < size3; i++) {
        cout << *(num4 + i) << " ";
    }
    cout << endl << "Num2: ";
    for (int i = 0; i < size3; i++) {
        cout << *(num5 + i) << " ";
    }
    delete[] num4;
    delete[] num5;
    num4 = nullptr;
    num5 = nullptr;
}
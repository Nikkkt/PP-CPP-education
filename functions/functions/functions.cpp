#include <iostream>
#include <windows.h>
#include <conio.h>
#include <algorithm>
using namespace std;

HANDLE h = GetStdHandle(-11);

void SetCursor(int x, int y, int color) {
    COORD text;
    text.X = x;
    text.Y = y;
    SetConsoleCursorPosition(h, text);
    SetConsoleTextAttribute(h, color);
}

void line(int qnt, char symbol, int color, bool pos) {
    SetConsoleTextAttribute(h, color);
    if (pos == true) {
        for (int i = 0; i < qnt; i++) {
            cout << symbol;
        }
    }
    else {
        for (int i = 0; i < qnt; i++) {
            cout << symbol << endl;
        }
    }
    SetConsoleTextAttribute(h, 7);
}

void Rectangle(int width, int height, char frame, char fill, int frame_color, int fill_color, int x, int y) {
    int n = 0;
    COORD rectangle;
    rectangle.X = x;
    rectangle.Y = y + n;
    SetConsoleCursorPosition(h, rectangle);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || i == 0 || j == width - 1 || i == height - 1) {
                SetConsoleTextAttribute(h, frame_color);
                cout << frame;
            }
            else {
                SetConsoleTextAttribute(h, fill_color);
                cout << fill;
            }
        }
        n++;
        rectangle.Y = y + n;
        SetConsoleCursorPosition(h, rectangle);
    }
    SetConsoleTextAttribute(h, 7);
    cout << endl;
}

double CubeOfNumber(int number) {
    return pow(number, 3);
}

void IsItAPrimeNumber(int number) {
    int n = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            n++;
        }
    }
    if (n == 2) {
        cout << "It is a prime number" << endl;
    }
    else {
        cout << "It isn`t a prime number" << endl;
    }
}

int RangeSum(int start, int end) {
    return (start + end) * (end - start + 1) / 2;
}

double ArithmeticMeanOfArrayNumbers(int numbers[], int size) {
    double sum = 0;
    int n = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
        n++;
    }
    return sum / n;
}

void MaxAndMinInArray(int numbers[], int size) {
    int* min = min_element(numbers, numbers + size);
    int* max = max_element(numbers, numbers + size);
    cout << "Min:" << *min << endl << "Max:" << *max << endl;
}

double rounding(double number, int digits) {
    return round(number * pow(10, digits)) / pow(10, digits);
}

int main()
{
    //Task 1
    SetCursor(10, 5, 5);
    cout << "Hello world!" << endl;

    //Task 2
    line(5, '@', 12, true);

    //Task 3
    Rectangle(13, 7, '@', '#', 10, 8, 12, 8);

    //Task 4
    cout << CubeOfNumber(7) << endl;

    //Task 5
    IsItAPrimeNumber(101);

    //Task 6
    cout << RangeSum(8, 13) << endl;

    //Task 8
    int nums[] = { 2, 6, 4, 9, 24, 64, 78 };
    cout << ArithmeticMeanOfArrayNumbers(nums, 7) << endl;

    //Task 9
    MaxAndMinInArray(nums, 7);

    //Task 13
    cout << rounding(3.14157296, 3) << endl;
}
#include <iostream>
#include <iomanip>
using namespace std;

int random(int MIN, int MAX) {
    int k = MAX - MIN + 1;
    return MIN + rand() % k;
}

int main()
{
    //Task 1
    const int y = 5, x = 4;
    int numbers[y][x] = {};
    cout << "---------------------" << endl;
    while (true) {
        srand(time(NULL));
        for (int i = 0; i < y; i++) {
            cout << "|";
            for (int j = 0; j < x; j++) {
                numbers[i][j] = random(0, 100);
                cout << setw(3) << numbers[i][j] << " |";
            }
            cout << endl;
            cout << "---------------------" << endl;
        }
        break;
    }
    cout << endl;

    //Task 2
    const int size = 5;
    char stars[size][size] = {};

    //Part 1
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i <= j) {
                stars[i][j] = '*';
                cout << stars[i][j] << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    //Part 2
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            stars[i][j] = '*';
            if (i <= size - j - 1) {
                stars[i][j] = '*';
                cout << stars[i][j] << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
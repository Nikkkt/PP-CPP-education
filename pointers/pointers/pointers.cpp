#include <iostream>
using namespace std;

void first_task(int* arr1, int* arr2, int size1, int size2);
void second_task(int* arr, int size, int num);
void third_task(int* arr, int size, int index);

int main() {
    srand(time(NULL));

    ////1
    //int size1;
    //cin >> size1;
    //int* num1 = new int[size1];
    //int* num2 = new int[size1];
    //for (int i = 0; i < size1; i++) {
    //    *(num1 + i) = rand() % 2000 - 1000;
    //}
    //cout << "Num1: ";
    //for (int i = 0; i < size1; i++) {
    //    cout << *(num1 + i) << " ";
    //}
    //for (int i = 0; i < size1; i++) {
    //    *(num2 + i) = *(num1 + i);
    //}
    //cout << endl << "Num2: ";
    //for (int i = 0; i < size1; i++) {
    //    cout << *(num2 + i) << " ";
    //}
    //cout << endl;
    //delete[] num1;
    //delete[] num2;
    //num1 = nullptr;
    //num2 = nullptr;

    ////2
    //int size2, tmp;
    //cin >> size2;
    //int* num3 = new int[size2];
    //for (int i = 0; i < size2; i++) {
    //    *(num3 + i) = rand() % 2000 - 1000;
    //    cout << *(num3 + i) << " ";
    //}
    //for (int i = 0; i < size2 / 2; i++) {
    //    tmp = *(num3 + i);
    //    *(num3 + i) = *(num3 + size2 - i - 1);
    //    *(num3 + size2 - i - 1) = tmp;
    //}
    //cout << endl;
    //for (int i = 0; i < size2; i++) {
    //    cout << *(num3 + i) << " ";
    //}
    //cout << endl;
    //delete[] num3;
    //num3 = nullptr;

    ////3
    //int size3;
    //cin >> size3;
    //int* num4 = new int[size3];
    //int* num5 = new int[size3];
    //for (int i = 0; i < size3; i++) {
    //    *(num4 + i) = rand() % 2000 - 1000;
    //}
    //for (int i = 0; i < size3; i++) {
    //    *(num5 + i) = *(num4 + size3 - 1 - i);
    //}
    //cout << "Num1: ";
    //for (int i = 0; i < size3; i++) {
    //    cout << *(num4 + i) << " ";
    //}
    //cout << endl << "Num2: ";
    //for (int i = 0; i < size3; i++) {
    //    cout << *(num5 + i) << " ";
    //}
    //delete[] num4;
    //delete[] num5;
    //num4 = nullptr;
    //num5 = nullptr;

    //////////////////////////////////////////////////////////////
    ///////////////////////// 01.12.2022 /////////////////////////
    //////////////////////////////////////////////////////////////

    //1
    //int size1;
    //cout << "Enter size of array: ";
    //cin >> size1;
    //int* arr1 = new int[size1];
    //int* arr2 = arr1;
    //for (int i = 0; i < size1; i++) {
    //    *(arr1 + i) = rand() % 100;
    //}
    //for (int i = 0; i < size1; i++) {
    //    *(arr2 + size1 - i - 1) = *(arr1 + i);
    //}
    //cout << "Array 1: ";
    //for (int i = 0; i < size1; i++) {
    //    cout << *(arr1 + i) << "\t";
    //}
    //cout << endl << "Array 2: ";
    //for (int i = 0; i < size1; i++) {
    //    cout << *(arr2 + i) << "\t";
    //}
    //cout << endl;

    ////2
    //int size2;
    //cout << "Enter size of array: ";
    //cin >> size2;
    //int* arr3 = new int[size2];
    //for (int i = 0; i < size2; i++) {
    //    *(arr3 + i) = rand() % 100;
    //}
    //int min = *arr3, max = *arr3;
    //for (int i = 0; i < size2; i++) {
    //    if (min > *(arr3 + i)) {
    //        min = *(arr3 + i);
    //    }
    //    if (max < *(arr3 + i)) {
    //        max = *(arr3 + i);
    //    }
    //}
    //cout << endl << "Array: ";
    //for (int i = 0; i < size2; i++) {
    //    cout << *(arr3 + i) << "\t";
    //}
    //cout << endl << "Min: " << min << endl << "Max: " << max << endl << endl;

    ////3
    //int size3;
    //cout << "Enter size of array: ";
    //cin >> size3;

    //int* arr4 = new int[size3];
    //int bias;

    //cout << "Please, enter the bias: ";
    //cin >> bias;

    //for (int i = 0; i < size3; i++) {
    //    *(arr4 + i) = rand() % 100;
    //}
    //cout << "Old array: ";
    //for (int i = 0; i < size3; i++) {
    //    cout << *(arr4 + i) << "\t";
    //}

    //for (int j = 0; j < bias; j++) {
    //    int tmp = *(arr4 + size3 - 1);
    //    for (int i = size3 - 2; i >= 0; i--) {
    //        *(arr4 + i + 1) = *(arr4 + i);
    //    }
    //    *arr4 = tmp;
    //}
    //cout << endl << "New array: ";
    //for (int i = 0; i < size3; i++) {
    //    cout << *(arr4 + i) << "\t";
    //}

    //////////////////////////////////////////////////////////////
    ///////////////////////// 10.12.22 ///////////////////////////
    //////////////////////////////////////////////////////////////

    //1
    int size1, size2;
    cin >> size1;
    cin >> size2;
    int* first = new int[size1];
    for (int i = 0; i < size1; i++) {
        first[i] = rand() % 100;
        cout << first[i] << "\t";
    }
    cout << endl;
    int* second = new int[size2];
    for (int i = 0; i < size2; i++) {
        second[i] = rand() % 100;
        cout << second[i] << "\t";
    }
    cout << endl;
    first_task(first, second, size1, size2);

    //2
    int size3;
    cin >> size3;
    int* third = new int[size3];
    for (int i = 0; i < size3; i++) {
        third[i] = rand() % 100;
        cout << third[i] << "\t";
    }
    cout << endl;
    int rand_num = rand() % 100;
    second_task(third, size3, rand_num);

    //3
    int size4;
    cin >> size4;
    int* fourth = new int[size4];
    for (int i = 0; i < size4; i++) {
        fourth[i] = rand() % 100;
        cout << fourth[i] << "\t";
    }
    cout << endl;
    third_task(fourth, size4, 5);
}

void first_task(int* arr1, int* arr2, int size1, int size2) {
    int *arr_res = new int[size1 + size2];
    for (int i = 0; i < size1; i++) {
        *arr_res++ = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        *arr_res++ = arr2[i];
    }
    arr_res -= size1 + size2;
    for (int i = 0; i < size1 + size2; i++) {
        cout << *arr_res++ << "\t";
    }
    cout << endl;
}

void second_task(int* arr, int size, int num) {
    int* arr_res = new int[size + 1];
    for (int i = 0; i < size; i++) {
        *arr_res++ = arr[i];
    }
    *arr_res++ = num;
    arr_res -= size + 1;
    for (int i = 0; i < size + 1; i++) {
        cout << *arr_res++ << "\t";
    }
    cout << endl;
}

void third_task(int* arr, int size, int index) {
    for (int i = index - 1; i < size; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++) {
        cout << *arr++ << "\t";
    }
    cout << endl;
}
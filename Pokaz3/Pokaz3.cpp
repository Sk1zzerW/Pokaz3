#include <iostream>
using namespace std;

void copyReversedArray(int* src, int* dest, int size) {
    int* srcEnd = src + size - 1;
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(srcEnd - i);
    }
}

int main() {
    int size = 5;
    int srcArray[] = { 1, 2, 3, 4, 5 };
    int* destArray = new int[size];

    copyReversedArray(srcArray, destArray, size);

    cout << "массив задом наперёд ";
    for (int i = 0; i < size; i++) {
        cout << destArray[i] << " ";
    }
    cout << endl;

    delete[] destArray;
    return 0;
}

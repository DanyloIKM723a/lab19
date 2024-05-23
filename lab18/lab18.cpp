#include <iostream>

template <typename T>
void sortArray(T arr[], int size, bool ascending = true) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (ascending ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArr[] = { 5, 2, 9, 1, 5, 6 };
    double doubleArr[] = { 3.2, 2.1, 5.4, 1.5, 2.3 };

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    std::cout << "Original integer array: ";
    printArray(intArr, intSize);

    sortArray(intArr, intSize, true);
    std::cout << "Sorted integer array (ascending): ";
    printArray(intArr, intSize);

    sortArray(intArr, intSize, false);
    std::cout << "Sorted integer array (descending): ";
    printArray(intArr, intSize);

    std::cout << "Original double array: ";
    printArray(doubleArr, doubleSize);

    sortArray(doubleArr, doubleSize, true);
    std::cout << "Sorted double array (ascending): ";
    printArray(doubleArr, doubleSize);

    sortArray(doubleArr, doubleSize, false);
    std::cout << "Sorted double array (descending): ";
    printArray(doubleArr, doubleSize);

    return 0;
}

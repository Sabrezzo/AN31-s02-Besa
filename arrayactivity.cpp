#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void modifyElement(int arr[], int size) {
    int index, newValue;
    cout << "Enter the index of the element you want to modify: ";
    cin >> index;
    cout << "Enter the new value: ";
    cin >> newValue;
    if (index >= 0 && index < size) {
        arr[index] = newValue;
        cout << "Element modified successfully!" << endl;
        printArray(arr, size);
    } else {
        cout << "Invalid index. Please try again." << endl;
    }
}

void findMinMax(int arr[], int size) {
    int minVal = arr[0];
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Minimum value in the array: " << minVal << endl;
    cout << "Maximum value in the array: " << maxVal << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Initial array: ";
    printArray(arr, size);

    int choice;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Modify Element" << endl;
        cout << "2. Find Min and Max" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                modifyElement(arr, size);
                break;
            case 2:
                findMinMax(arr, size);
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
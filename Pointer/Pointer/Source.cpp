#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        swap(arr[i], arr[max_idx]);
    }
}

bool findValue(int* arr, int n, int value) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == value) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Masukkan " << n << " nilai: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Nilai dalam urutan descending: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int value;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> value;

    if (findValue(arr, n, value)) {
        cout << "Nilai " << value << " ditemukan dalam array." << endl;
    }
    else {
        cout << "Nilai " << value << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}

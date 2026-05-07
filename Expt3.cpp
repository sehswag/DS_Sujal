#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i=0;i<n;i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[100], n, key;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter sorted elements:\n";
    for(int i=0;i<n;i++)
        cin >> arr[i];

    cout << "Enter key: ";
    cin >> key;

    cout << "Linear Search Position: "
         << linearSearch(arr, n, key) << endl;

    cout << "Binary Search Position: "
         << binarySearch(arr, n, key) << endl;

    return 0;
}

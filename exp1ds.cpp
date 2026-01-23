#include <iostream>
using namespace std;

int main() {
    int a[10], n, i, choice;
    int sum, max, min, key, flag;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }

    while(1) {
        cout << "\n---- MENU ----\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Maximum\n";
        cout << "4. Find Minimum\n";
        cout << "5. Search Element\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Array elements: ";
            for(i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }

        else if(choice == 2) {
            sum = 0;
            for(i = 0; i < n; i++) {
                sum += a[i];
            }
            cout << "Sum = " << sum << endl;
        }

        else if(choice == 3) {
            max = a[0];
            for(i = 1; i < n; i++) {
                if(a[i] > max)
                    max = a[i];
            }
            cout << "Max = " << max << endl;
        }

        else if(choice == 4) {
            min = a[0];
            for(i = 1; i < n; i++) {
                if(a[i] < min)
                    min = a[i];
            }
            cout << "Min = " << min << endl;
        }

        else if(choice == 5) {
            cout << "Enter element to search: ";
            cin >> key;
            flag = 0;

            for(i = 0; i < n; i++) {
                if(a[i] == key) {
                    flag = 1;
                    break;
                }
            }

            if(flag == 1)
                cout << "Element found\n";
            else
                cout << "Element not found\n";
        }

        else if(choice == 6) {
            cout << "Exiting program...\n";
            break;
        }

        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
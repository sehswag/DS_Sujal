#include<iostream>
using namespace std;

int main() {

    int a[2][2], b[2][2];
    int i, j, k, choice;

    do {
        cout << "\n*** MATRIX MENU ***\n";
        cout << "1. Enter Two 2x2 Matrices\n";
        cout << "2. Addition\n";
        cout << "3. Subtraction\n";
        cout << "4. Multiplication\n";
        cout << "5. Transpose\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Matrix A:\n";
            for (i = 0; i < 2; i++)
                for (j = 0; j < 2; j++)
                    cin >> a[i][j];

            cout << "Enter Matrix B:\n";
            for (i = 0; i < 2; i++)
                for (j = 0; j < 2; j++)
                    cin >> b[i][j];
            break;

        case 2: 
            cout << "\nAddition (A + B):\n";
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    cout << a[i][j] + b[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 3: 
            cout << "\nSubtraction (A - B):\n";
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    cout << a[i][j] - b[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 4: 
            cout << "\nMultiplication (A x B):\n";
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    int sum = 0;
                    for (k = 0; k < 2; k++) {
                        sum += a[i][k] * b[k][j];
                    }
                    cout << sum << " ";
                }
                cout << endl;
            }
            break;

        case 5: 
            cout << "\nTranspose of Matrix A:\n";
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++)
                    cout << a[j][i] << " ";
                cout << endl;
            }

            cout << "\nTranspose of Matrix B:\n";
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++)
                    cout << b[j][i] << " ";
                cout << endl;
            }
            break;

        case 6:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice!!\n";
        }

    } while (choice != 6);

    return 0;
}

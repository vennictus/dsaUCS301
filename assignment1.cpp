//Question 1


// #include <iostream>
// #include <cctype>
// using namespace std;

// class ArrayOps {
//     int arr[100], size;

// public:
//     ArrayOps() { size = 0; }

//     void create() {
//         cout << "Enter number of elements: ";
//         cin >> size;
//         cout << "Enter elements: ";
//         for (int i = 0; i < size; i++)
//             cin >> arr[i];
//     }

//     void display() {
//         if (size == 0) {
//             cout << "Array is empty\n";
//             return;
//         }
//         cout << "Array elements: ";
//         for (int i = 0; i < size; i++)
//             cout << arr[i] << " ";
//         cout << endl;
//     }

//     void insert() {
//         int pos, val;
//         cout << "Enter position (0-based): ";
//         cin >> pos;
//         cout << "Enter value: ";
//         cin >> val;
//         if (pos < 0 || pos > size) {
//             cout << "Invalid position\n";
//             return;
//         }
//         for (int i = size; i > pos; i--)
//             arr[i] = arr[i - 1];
//         arr[pos] = val;
//         size++;
//     }

//     void deleteElem() {
//         int pos;
//         cout << "Enter position (0-based): ";
//         cin >> pos;
//         if (pos < 0 || pos >= size) {
//             cout << "Invalid position\n";
//             return;
//         }
//         for (int i = pos; i < size - 1; i++)
//             arr[i] = arr[i + 1];
//         size--;
//     }

//     void linearSearch() {
//         int key;
//         cout << "Enter value to search: ";
//         cin >> key;
//         for (int i = 0; i < size; i++) {
//             if (arr[i] == key) {
//                 cout << "Element found at position " << i << endl;
//                 return;
//             }
//         }
//         cout << "Element not found\n";
//     }
// };

// int main() {
//     ArrayOps a;
//     char choice;
//     do {
//         cout << "\n--- MENU ---\n";
//         cout << "(C)REATE\n(D)ISPLAY\n(I)NSERT\n(R)EMOVE\n(S)EARCH\n(E)XIT\n";
//         cout << "Enter choice: ";
//         cin >> choice;
//         choice = tolower(choice);

//         switch (choice) {
//             case 'c': a.create(); break;
//             case 'd': a.display(); break;
//             case 'i': a.insert(); break;
//             case 'r': a.deleteElem(); break;
//             case 's': a.linearSearch(); break;
//             case 'e': cout << "Exiting...\n"; break;
//             default: cout << "Invalid choice, please try again.\n";
//         }
//     } while (choice != 'e');
//     return 0;
// }

// ===================================================================================================

//Question 2


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[100], size;
//     cout << "Enter number of elements: ";
//     cin >> size;
//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];

//     for (int i = 0; i < size; i++) {
//         for (int j = i + 1; j < size; ) {
//             if (arr[i] == arr[j]) {
//                 for (int k = j; k < size - 1; k++)
//                     arr[k] = arr[k + 1];
//                 size--;
//             } else {
//                 j++;
//             }
//         }
//     }

//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

// ===================================================================================================

// Question 3


//The Program

// #include <cstdio>

// int main()
// {
//     int i;
//     int arr[5] = {1};
//     for (i = 0; i < 5; i++)
//         printf("%d", arr[i]);
//     return 0;
// }

//Output
// 10000

// ===================================================================================================

// Question 4

#include <iostream>
#include <string>
using namespace std;

int main() {
    string choice;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Reverse Array (R)\n";
        cout << "2. Matrix Multiplication (M)\n";
        cout << "3. Transpose of Matrix (T)\n";
        cout << "4. Exit (E)\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == "1" || choice == "R" || choice == "r") {
            int arr[100], n;
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) cin >> arr[i];
            for (int i = 0, j = n - 1; i < j; i++, j--) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            cout << "Reversed array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        } 
        else if (choice == "2" || choice == "M" || choice == "m") {
            int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2;
            cout << "Enter rows and cols of first matrix: ";
            cin >> r1 >> c1;
            cout << "Enter rows and cols of second matrix: ";
            cin >> r2 >> c2;

            if (c1 != r2) {
                cout << "Matrix multiplication not possible\n";
                continue;
            }

            cout << "Enter first matrix:\n";
            for (int i = 0; i < r1; i++)
                for (int j = 0; j < c1; j++)
                    cin >> a[i][j];

            cout << "Enter second matrix:\n";
            for (int i = 0; i < r2; i++)
                for (int j = 0; j < c2; j++)
                    cin >> b[i][j];

            for (int i = 0; i < r1; i++)
                for (int j = 0; j < c2; j++) {
                    c[i][j] = 0;
                    for (int k = 0; k < c1; k++)
                        c[i][j] += a[i][k] * b[k][j];
                }

            cout << "Resultant matrix:\n";
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++)
                    cout << c[i][j] << " ";
                cout << endl;
            }
        } 
        else if (choice == "3" || choice == "T" || choice == "t") {
            int a[10][10], trans[10][10], r, c;
            cout << "Enter rows and cols: ";
            cin >> r >> c;
            cout << "Enter matrix:\n";
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    cin >> a[i][j];

            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    trans[j][i] = a[i][j];

            cout << "Transpose:\n";
            for (int i = 0; i < c; i++) {
                for (int j = 0; j < r; j++)
                    cout << trans[i][j] << " ";
                cout << endl;
            }
        } 
        else if (choice == "4" || choice == "E" || choice == "e") {
            cout << "Exiting...\n";
            break;
        } 
        else {
            cout << "Invalid choice, try again.\n";
        }
    } while (true);

    return 0;
}


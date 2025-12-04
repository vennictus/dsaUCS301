//Question 1
// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j + 1]);
//         }
//     }
// }

// void merge(int arr[], int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;

//     int a[n1], b[n2];

//     for (int i = 0; i < n1; i++) a[i] = arr[l + i];
//     for (int i = 0; i < n2; i++) b[i] = arr[m + 1 + i];

//     int i = 0, j = 0, k = l;

//     while (i < n1 && j < n2) {
//         if (a[i] <= b[j])
//             arr[k++] = a[i++];
//         else
//             arr[k++] = b[j++];
//     }

//     while (i < n1) arr[k++] = a[i++];
//     while (j < n2) arr[k++] = b[j++];
// }

// void mergeSort(int arr[], int l, int r) {
//     if (l < r) {
//         int m = (l + r) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// int partition_(int arr[], int l, int r) {
//     int pivot = arr[r];
//     int i = l - 1;
//     for (int j = l; j < r; j++) {
//         if (arr[j] <= pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[r]);
//     return i + 1;
// }

// void quickSort(int arr[], int l, int r) {
//     if (l < r) {
//         int p = partition_(arr, l, r);
//         quickSort(arr, l, p - 1);
//         quickSort(arr, p + 1, r);
//     }
// }

// void print(int arr[], int n) {
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n], choice;
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     cout << "\n1. Selection Sort\n2. Insertion Sort\n3. Bubble Sort\n4. Merge Sort\n5. Quick Sort\n";
//     cout << "Enter choice: ";
//     cin >> choice;

//     switch (choice) {
//         case 1: selectionSort(arr, n); break;
//         case 2: insertionSort(arr, n); break;
//         case 3: bubbleSort(arr, n); break;
//         case 4: mergeSort(arr, 0, n - 1); break;
//         case 5: quickSort(arr, 0, n - 1); break;
//         default: cout << "Invalid"; return 0;
//     }

//     cout << "Sorted Array: ";
//     print(arr, n);

//     return 0;
// }





//Question 2
// #include <iostream>
// using namespace std;

// void improvedSelectionSort(int arr[], int n) {
//     int left = 0, right = n - 1;

//     while (left < right) {

//         int minIndex = left;
//         int maxIndex = left;

//         for (int i = left; i <= right; i++) {
//             if (arr[i] < arr[minIndex]) minIndex = i;
//             if (arr[i] > arr[maxIndex]) maxIndex = i;
//         }

//         swap(arr[left], arr[minIndex]);

//         if (maxIndex == left) maxIndex = minIndex;

//         swap(arr[right], arr[maxIndex]);

//         left++;
//         right--;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     improvedSelectionSort(arr, n);

//     cout << "Sorted Array: ";
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";

//     return 0;
// }

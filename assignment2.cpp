//Question 1
// #include <iostream>
// using namespace std;
//
// int binarySearch(int arr[], int n, int key) {
//     int low = 0, high = n - 1;
//
//     while (low <= high) {
//         int mid = (low + high) / 2;
//
//         if (arr[mid] == key)
//             return mid;
//         else if (arr[mid] < key)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }
//
// int main() {
//     int n, key;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     cin >> key;
//
//     int index = binarySearch(arr, n, key);
//     if (index != -1) cout << "Found at index " << index;
//     else cout << "Not found";
//
//     return 0;
// }




//Question 2
// #include <iostream>
// using namespace std;
//
// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = 7;
//
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//
//     return 0;
// }





//Question 3(a) linear search
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     int arr[n-1];
//     for (int i = 0; i < n-1; i++) cin >> arr[i];
//
//     for (int i = 1; i <= n; i++) {
//         if (arr[i-1] != i) {
//             cout << "Missing: " << i;
//             return 0;
//         }
//     }
//     return 0;
// }


//Question 3(b) binary search
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     int arr[n-1];
//     for (int i = 0; i < n-1; i++) cin >> arr[i];
//
//     int low = 0, high = n - 2;
//
//     while (low <= high) {
//         int mid = (low + high) / 2;
//
//         if (arr[mid] == mid + 1)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//
//     cout << "Missing: " << low + 1;
//
//     return 0;
// }


//Question 4(a) concatenate two strings
// #include <iostream>
// using namespace std;
//
// int main() {
//     string s1, s2;
//     cin >> s1 >> s2;
//     string result = s1 + s2;
//     cout << result;
//     return 0;
// }


//Question 4(b) reverse a string
// #include <iostream>
// using namespace std;
//
// int main() {
//     string s; cin >> s;
//     int n = s.length();
//
//     for (int i = 0; i < n/2; i++)
//         swap(s[i], s[n - i - 1]);
//
//     cout << s;
// }


//Question 4(c) remove vowels from a string
// #include <iostream>
// using namespace std;
//
// bool isVowel(char c) {
//     c = tolower(c);
//     return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
// }
//
// int main() {
//     string s, result="";
//     getline(cin, s);
//
//     for (char c : s)
//         if (!isVowel(c)) result += c;
//
//     cout << result;
//     return 0;
// }


//Question 4(d) sort an array of strings
// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// int main() {
//     int n; cin >> n;
//     string arr[n];
//
//     for (int i = 0; i < n; i++) cin >> arr[i];
//
//     sort(arr, arr + n);
//
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//
//     return 0;
// }


//Question 4(e) convert a string to lowercase
// #include <iostream>
// using namespace std;
//
// int main() {
//     char c;
//     cin >> c;
//     cout << char(tolower(c));
//     return 0;
// }



//Question 5(a)
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n; cin >> n;
//     int diag[n];
//
//     for (int i = 0; i < n; i++) cin >> diag[i];
//
//     // To access A[i][j]:
//     // if (i == j) return diag[i]; else return 0;
//
//     return 0;
// }


//Question 5(b)
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n; cin >> n;
//     int tri[3*n - 2]; // main + upper + lower
//
//     // Just a structure, no operations needed by question
//     return 0;
// }


//Question 5(c)
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n; cin >> n;
//     int size = n*(n+1)/2;
//     int L[size];
//
//     return 0;
// }



//Question 5(d)
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n; cin >> n;
//     int size = n*(n+1)/2;
//     int U[size];
//
//     return 0;
// }



//Question 5(e)
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n; cin >> n;
//     int size = n*(n+1)/2;
//     int S[size];
//
//     return 0;
// }



//Question 6(a)
// #include <iostream>
// using namespace std;
//
// struct Term {
//     int r, c, v;
// };
//
// int main() {
//     int n; cin >> n;
//     Term A[n], T[n];
//
//     for (int i = 0; i < n; i++) cin >> A[i].r >> A[i].c >> A[i].v;
//
//     for (int i = 0; i < n; i++) {
//         T[i].r = A[i].c;
//         T[i].c = A[i].r;
//         T[i].v = A[i].v;
//     }
//
//     for (int i = 0; i < n; i++)
//         cout << T[i].r << " " << T[i].c << " " << T[i].v << endl;
//
//     return 0;
// }



//Question 6(b)
// #include <iostream>
// using namespace std;
//
// struct Term { int r, c, v; };
//
// int main() {
//     int n, m;
//     cin >> n >> m;
//     Term A[n], B[m];
//
//     for (int i = 0; i < n; i++) cin >> A[i].r >> A[i].c >> A[i].v;
//     for (int i = 0; i < m; i++) cin >> B[i].r >> B[i].c >> B[i].v;
//
//     int i = 0, j = 0;
//     while (i < n && j < m) {
//         if (A[i].r == B[j].r && A[i].c == B[j].c) {
//             cout << A[i].r << " " << A[i].c << " " << A[i].v + B[j].v << endl;
//             i++; j++;
//         } else if (A[i].r < B[j].r || (A[i].r == B[j].r && A[i].c < B[j].c)) {
//             cout << A[i].r << " " << A[i].c << " " << A[i].v << endl;
//             i++;
//         } else {
//             cout << B[j].r << " " << B[j].c << " " << B[j].v << endl;
//             j++;
//         }
//     }
//
//     while (i < n) cout << A[i].r << " " << A[i].c << " " << A[i].v << endl, i++;
//     while (j < m) cout << B[j].r << " " << B[j].c << " " << B[j].v << endl, j++;
//
//     return 0;
// }



//Question 6(c)
// #include <iostream>
// using namespace std;
//
// // Simple brute force triplet multiplication
//
// struct Term { int r, c, v; };
//
// int main() {
//     int n, m;
//     cin >> n >> m;
//
//     Term A[n], B[m];
//
//     for (int i = 0; i < n; i++) cin >> A[i].r >> A[i].c >> A[i].v;
//     for (int i = 0; i < m; i++) cin >> B[i].r >> B[i].c >> B[i].v;
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (A[i].c == B[j].r) {
//                 cout << A[i].r << " " << B[j].c << " " << A[i].v * B[j].v << endl;
//             }
//         }
//     }
//
//     return 0;
// }



//Question 7
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] > arr[j]) count++;
//         }
//     }
//
//     cout << "Inversions: " << count;
//     return 0;
// }



//Question 8
// #include <iostream>
// #include <unordered_set>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//
//     for (int i = 0; i < n; i++) cin >> arr[i];
//
//     unordered_set<int> s;
//
//     for (int i = 0; i < n; i++)
//         s.insert(arr[i]);
//
//     cout << "Distinct count: " << s.size();
//
//     return 0;
// }

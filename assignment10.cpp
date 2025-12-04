//Question 1
// #include <iostream>
// #include <unordered_set>
// using namespace std;
//
// int main() {
//     int n; 
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//
//     unordered_set<int> s;
//
//     for (int i = 0; i < n; i++) {
//         if (s.find(arr[i]) != s.end()) {
//             cout << "true";
//             return 0;
//         }
//         s.insert(arr[i]);
//     }
//
//     cout << "false";
//     return 0;
// }




//Question 2
// #include <iostream>
// #include <unordered_set>
// using namespace std;
//
// int main() {
//     int n, m;
//     cin >> n >> m;
//
//     int A[n], B[m];
//     for (int i = 0; i < n; i++) cin >> A[i];
//     for (int i = 0; i < m; i++) cin >> B[i];
//
//     unordered_set<int> s;
//     for (int i = 0; i < n; i++) s.insert(A[i]);
//
//     for (int i = 0; i < m; i++) {
//         if (s.find(B[i]) != s.end())
//             cout << B[i] << " ";
//     }
//
//     return 0;
// }




//Question 3
// #include <iostream>
// #include <unordered_map>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//
//     unordered_map<int, int> freq;
//
//     for (int i = 0; i < n; i++)
//         freq[arr[i]]++;
//
//     for (auto &p : freq)
//         cout << p.first << " -> " << p.second << " times\n";
//
//     return 0;
// }



//Question 4
// #include <iostream>
// #include <unordered_map>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//
//     unordered_map<int,int> mp;
//
//     for (int i = 0; i < n; i++) mp[arr[i]]++;
//
//     for (int i = 0; i < n; i++) {
//         if (mp[arr[i]] == 1) {
//             cout << arr[i];
//             return 0;
//         }
//     }
//
//     cout << "No non-repeating element";
//     return 0;
// }





//Question 5
// #include <iostream>
// #include <unordered_set>
// using namespace std;
//
// struct Node {
//     int data;
//     Node* next;
// };
//
// bool detectLoop(Node* head) {
//     unordered_set<Node*> s;
//
//     while (head != NULL) {
//         if (s.find(head) != s.end())
//             return true;
//         s.insert(head);
//         head = head->next;
//     }
//     return false;
// }
//
// int main() {
//     Node* n1 = new Node{1, NULL};
//     Node* n2 = new Node{2, NULL};
//     Node* n3 = new Node{3, NULL};
//     Node* n4 = new Node{4, NULL};
//
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n2; // loop back
//
//     if (detectLoop(n1)) cout << "true";
//     else cout << "false";
//
//     return 0;
// }




//Question 6
// #include <iostream>
// #include <unordered_set>
// using namespace std;
//
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };
//
// Node* newNode(int val) {
//     return new Node{val, NULL, NULL};
// }
//
// bool findDup(Node* root, unordered_set<int>& s) {
//     if (root == NULL) return false;
//
//     if (s.find(root->data) != s.end()) return true;
//
//     s.insert(root->data);
//
//     return findDup(root->left, s) || findDup(root->right, s);
// }
//
// int main() {
//     Node* root = newNode(10);
//     root->left = newNode(5);
//     root->right = newNode(20);
//     root->left->left = newNode(5); // duplicate
//
//     unordered_set<int> s;
//
//     if (findDup(root, s)) cout << "Duplicates Found";
//     else cout << "No Duplicates";
//
//     return 0;
// }

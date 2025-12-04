//Question 1
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* createNode(int val) {
//     Node* n = new Node();
//     n->data = val;
//     n->left = n->right = NULL;
//     return n;
// }

// void preorder(Node* root) {
//     if (root == NULL) return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(Node* root) {
//     if (root == NULL) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void postorder(Node* root) {
//     if (root == NULL) return;
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main() {
//     Node* root = createNode(10);
//     root->left = createNode(5);
//     root->right = createNode(20);
//     root->left->left = createNode(3);

//     cout << "Pre-order: "; preorder(root); cout << endl;
//     cout << "In-order: "; inorder(root); cout << endl;
//     cout << "Post-order: "; postorder(root); cout << endl;

//     return 0;
// }




//Question 2
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* createNode(int val) {
//     Node* n = new Node();
//     n->data = val;
//     n->left = n->right = NULL;
//     return n;
// }

// Node* insertNode(Node* root, int val) {
//     if (root == NULL) return createNode(val);
//     if (val < root->data) root->left = insertNode(root->left, val);
//     else if (val > root->data) root->right = insertNode(root->right, val);
//     return root;
// }

// // Recursive Search
// Node* searchRec(Node* root, int key) {
//     if (root == NULL || root->data == key) return root;
//     if (key < root->data) return searchRec(root->left, key);
//     return searchRec(root->right, key);
// }

// // Non-Recursive Search
// Node* searchNonRec(Node* root, int key) {
//     while (root != NULL && root->data != key) {
//         if (key < root->data) root = root->left;
//         else root = root->right;
//     }
//     return root;
// }

// int findMin(Node* root) {
//     while (root->left != NULL) root = root->left;
//     return root->data;
// }

// int findMax(Node* root) {
//     while (root->right != NULL) root = root->right;
//     return root->data;
// }

// Node* inorderSuccessor(Node* root, Node* target) {
//     Node* succ = NULL;
//     while (root != NULL) {
//         if (target->data < root->data) {
//             succ = root;
//             root = root->left;
//         } else {
//             root = root->right;
//         }
//     }
//     return succ;
// }

// Node* inorderPredecessor(Node* root, Node* target) {
//     Node* pred = NULL;
//     while (root != NULL) {
//         if (target->data > root->data) {
//             pred = root;
//             root = root->right;
//         } else {
//             root = root->left;
//         }
//     }
//     return pred;
// }

// int main() {
//     Node* root = NULL;
//     int arr[] = {50, 30, 70, 20, 40, 60, 80};
//     for (int x : arr) root = insertNode(root, x);

//     Node* t = searchRec(root, 40);

//     cout << "Min: " << findMin(root) << endl;
//     cout << "Max: " << findMax(root) << endl;

//     Node* s = inorderSuccessor(root, t);
//     Node* p = inorderPredecessor(root, t);

//     if (s) cout << "Successor: " << s->data << endl;
//     if (p) cout << "Predecessor: " << p->data << endl;

//     return 0;
// }




//Question 3
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* newNode(int val) {
//     Node* n = new Node();
//     n->data = val;
//     n->left = n->right = NULL;
//     return n;
// }

// Node* insertNode(Node* root, int val) {
//     if (root == NULL) return newNode(val);
//     if (val < root->data) root->left = insertNode(root->left, val);
//     else if (val > root->data) root->right = insertNode(root->right, val);
//     return root;
// }

// Node* findMinNode(Node* root) {
//     while (root->left != NULL) root = root->left;
//     return root;
// }

// Node* deleteNode(Node* root, int key) {
//     if (root == NULL) return root;
    
//     if (key < root->data) root->left = deleteNode(root->left, key);
//     else if (key > root->data) root->right = deleteNode(root->right, key);
//     else {
//         if (root->left == NULL) {
//             Node* t = root->right;
//             delete root;
//             return t;
//         }
//         else if (root->right == NULL) {
//             Node* t = root->left;
//             delete root;
//             return t;
//         }
//         Node* t = findMinNode(root->right);
//         root->data = t->data;
//         root->right = deleteNode(root->right, t->data);
//     }
//     return root;
// }

// int maxDepth(Node* root) {
//     if (root == NULL) return 0;
//     return 1 + max(maxDepth(root->left), maxDepth(root->right));
// }

// int minDepth(Node* root) {
//     if (root == NULL) return 0;
//     return 1 + min(minDepth(root->left), minDepth(root->right));
// }

// int main() {
//     Node* root = NULL;
//     int arr[] = {10, 5, 1, 7, 40, 50};
//     for (int x : arr) root = insertNode(root, x);

//     root = deleteNode(root, 7);

//     cout << "Max Depth: " << maxDepth(root) << endl;
//     cout << "Min Depth: " << minDepth(root) << endl;

//     return 0;
// }





//Question 4
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* newNode(int val) {
//     Node* n = new Node();
//     n->data = val;
//     n->left = n->right = NULL;
//     return n;
// }

// bool isBSTUtil(Node* root, int minV, int maxV) {
//     if (root == NULL) return true;
//     if (root->data <= minV || root->data >= maxV) return false;
//     return isBSTUtil(root->left, minV, root->data) &&
//            isBSTUtil(root->right, root->data, maxV);
// }

// bool isBST(Node* root) {
//     return isBSTUtil(root, -100000, 100000);
// }

// int main() {
//     Node* root = newNode(10);
//     root->left = newNode(5);
//     root->right = newNode(20);

//     if (isBST(root)) cout << "True";
//     else cout << "False";

//     return 0;
// }




//Question 5
// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i) {
//     int largest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if (left < n && arr[left] > arr[largest]) largest = left;
//     if (right < n && arr[right] > arr[largest]) largest = right;

//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n) {
//     for (int i = n/2 - 1; i >= 0; i--) heapify(arr, n, i);

//     for (int i = n - 1; i >= 0; i--) {
//         swap(arr[0], arr[i]);
//         heapify(arr, i, 0);
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[100];

//     for (int i = 0; i < n; i++) cin >> arr[i];

//     heapSort(arr, n);

//     for (int i = 0; i < n; i++) cout << arr[i] << " ";

//     return 0;
// }




//Question 6
// #include <iostream>
// using namespace std;

// int heapArr[100];
// int heapSize = 0;

// void insertPQ(int val) {
//     heapArr[heapSize] = val;
//     int i = heapSize;
//     heapSize++;

//     while (i != 0) {
//         int parent = (i - 1) / 2;
//         if (heapArr[parent] < heapArr[i]) {
//             swap(heapArr[parent], heapArr[i]);
//             i = parent;
//         } else break;
//     }
// }

// int extractMax() {
//     if (heapSize == 0) return -1;

//     int root = heapArr[0];
//     heapArr[0] = heapArr[heapSize - 1];
//     heapSize--;

//     int i = 0;
//     while (true) {
//         int left = 2*i + 1;
//         int right = 2*i + 2;
//         int largest = i;

//         if (left < heapSize && heapArr[left] > heapArr[largest]) largest = left;
//         if (right < heapSize && heapArr[right] > heapArr[largest]) largest = right;

//         if (largest != i) {
//             swap(heapArr[i], heapArr[largest]);
//             i = largest;
//         } else break;
//     }

//     return root;
// }

// int main() {
//     insertPQ(30);
//     insertPQ(50);
//     insertPQ(20);
//     insertPQ(60);

//     cout << extractMax() << endl;
//     cout << extractMax() << endl;

//     return 0;
// }

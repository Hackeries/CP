// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//     int row, col, data;
//     Node* next;

//     Node(int r, int c, int d) : row(r), col(c), data(d), next(NULL) {}

// };

// Node* image_to_LL(vector<vector<int>>& matrix, int m, int n, int& LL_size) {
//     Node* head = NULL;
//     Node* current = NULL;
//     int count = 0;

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; ++j) {
//             if (matrix[i][j] == 1) {
//                 if (!head) {
//                     head = new Node(i, j, 1);
//                     current = head;
//                 } else {
//                     current->next = new Node(i, j, 1);
//                     current = current->next;
//                 }
//                 count++;
//             }
//         }
//     }

//     LL_size = ((count * 3) + 8) * 4;
//     return head;
// }


// int main() {
//     int m, n;
//     cout << "Enter size of image: ";
//     cin >> m >> n;

//     cout << "Enter image data:" << endl;
//     vector<vector<int>> image_data(m, vector<int>(n));
//     for (int i = 0; i < m; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cin >> image_data[i][j];
//         }
//     }

//     int LL_size;
//     Node* LL = image_to_LL(image_data, m, n, LL_size);

//     cout << "\nData Elements of Image are (B,C,Data):" << endl;
//     Node* current = LL;
//     while (current) {
//         cout << "(" << current->row << "," << current->col << "," << current->data << ")" << endl;
//         current = current->next;
//     }

//     int matrix_size = (m * n) * 4;
//     cout << "\nSize of Image in matrix-form is " << matrix_size << endl;
//     cout << "Size of Image in linked list form is " << LL_size << endl;

//     // ye humne memory free krri h coz new node bnayi thi
//     current = LL;
//     while (current) {
//         Node* temp = current;
//         current = current->next;
//         delete temp;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    char p[20];
    char s[] = "string";

    int length = strlen(s);
    for(int i=0;i<length;i++){
        p[i] = s[length - i];
    }
    cout << p << endl;
}
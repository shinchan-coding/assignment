// Print the following pattern
// Input: n = 5
// Output:
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i<= n-1 ; i++){
//         for(int j = 1;j < (n-i); j++){
//             cout << "  ";
//         }
//     for(int k = 1;k <= (2*i-1) ; k++){
//         cout << k << " ";
//     }
//     cout << endl;
//     }
// }
// Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i<= n-1 ; i++){
//         for(int j = 1;j < (n-i); j++){
//             cout << "  ";
//         }
//     for(int k = 1;k <= (2*i-1) ; k++){
//         cout << (char)(64+k) << " ";
//     }
//     cout << endl;
//     }
// }
// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i<= n-1 ; i++){
//         for(int j = 1;j < (n-i); j++){
//             cout << "  ";
//         }
//     for(int k = 1;k <= i ; k++){
//         cout << (char)(64+k) << " ";
//     }
//     for(int l = i-1;l >= 1;l--){
//         cout << (char)(64+l) << " ";
//     }
//     cout << endl;
//     }
// }
// Print the following pattern
// Input: n = 4
// Output:
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//         for(int j = 1; j <= 2*n-1 ; j++ ){
//             cout << (char)(64+j) << " ";
//         }
//         cout << endl;
//         for(int i = 1 ; i <= n-1;i++){
//         for(int j = 1; j <= (n-i) ; j++ ){
//             cout << (char)(64+j) << " ";
//         }
//         for(int k = 1; k <= i ; k++){
//             cout << "  ";
//         }
//         for(int m = 1; m <= i-1 ; m++){
//             cout << "  ";
//         }
//         for(int j = 1; j <= (n-i) ; j++ ){
//             cout << (char)(68+j) << " ";
//         }
//         cout <<endl;
//     }
// }
// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int j = 1; j <= n-1 ; j++ ){
//             cout << j << " ";
//         }
//         for(int i = n; i >= 1 ; i-- ){
//             cout << i << " ";
//         }
//         cout << endl;
//         for(int i = 1 ; i <= n-1;i++){
//         for(int j = 1; j <= (n-i) ; j++ ){
//             cout << j << " ";
//         }
//         for(int k = 1; k <= i ; k++){
//             cout << "  ";
//         }
//         for(int m = 1; m <= i-1 ; m++){
//             cout << "  ";
//         }
//         for(int j = n-i; j >= 1 ; j-- ){
//             cout << j << " ";
//         }
//         cout <<endl;
//     }
// }
// Print the following pattern
// Input : n = 5
// Output:
// *        *
//  *      *
//   *    *
//    *  *
//     *
// 
// #include <iostream>
// using namespace std;
// int main() {
//     int m, n;
//     cout << "Enter the number of rows (m): ";
//     cin >> m;
//     cout << "Enter the number of columns (n): ";
//     cin >> n;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";  
//         }
//         cout << "*";
//         if (i != 0) {
//             for (int j = 0; j < 2 * i - 1; j++) {
//                 cout << " ";
//            }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = m - 2; i >= 0; i--) {
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " "; 
//         }
//         cout << "*";
//         if (i != 0) {
//             for (int j = 0; j < 2 * i - 1; j++) {
//                 cout << " "; 
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// Print the following pattern
// Sample Input : n = 4
// Output :
//     1
//   2   2
//  3     3
// 4       4
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter value of n: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
//         cout << i;
//         if (i > 1) {
//             for (int j = 1; j <= 2 * (i - 1) - 1; j++) {
//                 cout << " ";
//             }
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }
// Print the following pattern
// Sample Input : n = 5
// Output :

//        * 
//       *** 
//     *  *  * 
//    *   *   * 
//   *    *    * 
//   ***********
//   *    *    * 
//    *   *   * 
//     *  *  * 
//       *** 
//        * 
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter value of n: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             if (j % 2 != 0) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             if (j % 2 != 0) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }

//         cout << endl;
//     }
//     return 0;
// }

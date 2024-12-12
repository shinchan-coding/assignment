//Take 2 integers input and print the greatest of them.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout <<"enter 1st integer:";
//     cin>>a;
//     cout <<"enter 2nd integer:";
//     cin>>b;
//     if(a>b){
//         cout <<"a is greater";
//     }
//     else
//     cout <<"b is greater";
// }
/*Given the radius of the circle predict whether numerically area 
of this circle is larger than the circumference or not.*/
 // #include<iostream>
 // using namespace std;
// int main(){
//     float r,CofC,AofC;
//     cout <<"enter the radius:";
//     cin >> r;
//     CofC = 2*3.14*r ;
//     AofC = 2*r*r ;
//     if(CofC>AofC){
//         cout << "circumference of circle is greater";
//     }
//     else
//     cout << "area of circle is greater";
// } 
/*Any year is input through the keyboard. 
Write a program to determine whether the year is a leap year or not.
 (Considering leap year occurs after every 4 years)
*/
// #include <iostream>
// using namespace std;
// int main(){
// int year;
// cout <<"enter year :";
// cin >> year;
// if(year%4 == 0){
//     cout << "year is leap year";
// }
// else
// cout << "year is not a leap year";
//}
/*Given the length and breadth of a rectangle, write a program to find whether 
numerically the area of the rectangle is greater than its perimeter.*/
// #include <iostream>
// using namespace std;
// int main(){
//     int l,b;
//     cout <<"length of reactangle:";
//     cin >>l;
//     cout <<"breadth of reactangle:";
//     cin >>b;
//     int PofR = 2*(l+b);
//     int AofR = l*b;
//     if (AofR > PofR){
//         cout <<"area of rectangle is greater";
//     }else{
//         cout << "perimeter of rectangle is greater";
//     }
// }
/*Write a program to input sides of a triangle and check whether a 
triangle is equilateral, scalene or isosceles triangle.*/
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b ,c;
//     cout << "enter 1st side of triangle:";
//     cin >> a;
//     cout << "enter 2nd side of triangle:";
//     cin >> b;
//     cout << "enter 3rd side of triangle:";
//     cin >> c;
//     if(a==b||b==c){
//         cout << "triangle is isosceles";
//     }
// else if(a==b&&b==c){
//         cout << "triangle is equilateral";
//     }
//     else
//         cout << "triangle is scalene";
// }
/*If the marks of A, B and C are input through the keyboard, 
write a program to determine the student scoring least marks. */
// #include<iostream>
// using namespace std;
// int main(){
//     int A,B,C,a,b,c;
//     cout<<"enter marks of A:";
//     cin >> a;
//     cout<<"enter marks of B:";
//     cin >> b;
//     cout<<"enter marks of C:";
//     cin >> c;
//     if(A<B || A<C){
//         cout <<"A has least marks";
//     }
//     else if(A>B || B<C){
//         cout <<"B has least marks";
//     }
//     else if(A>C || B>C){
//         cout << "C has least marks";
//         }
// }
//  Given a point (x, y), write a program to find out if it lies on the x-axis,
//  y-axis or at the origin, viz. (0, 0). 
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 0,y = 0;
//     if (x == 0 && y == 0){
//         cout << "points on origin";
//     }else if (x == 5 && y == 0){
//         cout << "axis on x";
//     }else if (x == 0 && y == 6){
//         cout << "axis on y";
//     }else {
//         cout << "error";
//     }
// }
// Given three points (x1, y1), (x2, y2) and (x3, y3), 
// write a program to check if all the three points fall on one straight line.
// #include <iostream>
// #include <cmath>
// using namespace std;
// bool areCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
//     int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
//     return (area == 0);
// }
// int main() {
//     int x1, y1, x2, y2, x3, y3;
//     cout << "Enter coordinates of point 1 (x1 y1): ";
//     cin >> x1 >> y1;
//     cout << "Enter coordinates of point 2 (x2 y2): ";
//     cin >> x2 >> y2;
//     cout << "Enter coordinates of point 3 (x3 y3): ";
//     cin >> x3 >> y3;
//     if (areCollinear(x1, y1, x2, y2, x3, y3)) {
//         cout << "The points are collinear (lie on the same straight line)." << endl;
//     } else {
//         cout << "The points are not collinear (do not lie on the same straight line)." << endl;
//     }
    
//     return 0;
// }
//  Write a C++ program to input any character and check whether it is the alphabet,
//   digit or special character.
#include <iostream>
#include <cctype>  
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
if (isalpha(ch)) {
        cout << ch << " is an alphabet." << endl;
    }
    else if (isdigit(ch)) {
        cout << ch << " is a digit." << endl;
    }
    else {
        cout << ch << " is a special character." << endl;
    }
    return 0;
}

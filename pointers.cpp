// // Write a program to find the product of two numbers using pointers.
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int b = 6;
//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     int product = (*ptr1)*(*ptr2);
//     cout << product;
// }
// int *p, q;
// p is a pointer and q is an integer. is answer
// p and q both are pointers.
// P and q both are integers.
// Syntax is incorrect.
// Find the output of the following code snippet.
// int a = 10, b = 20;
// int *ptr = &a;
// b = *ptr + 1;
// ptr = &b;
// cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;
// 11 11 10
// 10 10 10
// 11 10 11 is answer
// 10 11 10
// Find the output of the following code snippet.
// int a = 15, b = 20;
// int *ptr = &a;
// int *ptr2 = &b;
// *ptr = *ptr2;
// ptr now points to b
// ptr2 now points to a
// a gets value of b is answer
// b gets value of a
// Is the following program snippet correct?
// int a = 10, b = 20;
// int *ptr;
// *ptr = 5; no it is incorrect because pointer is null pointer which has garbage value
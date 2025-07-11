//
// Created by khaint02 on 11/07/25.
//
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int code1() {
    int n, a[100];
    cout << "Enter a value of array : "; cin >> n;
    for (int i = 0; i<n; i++) {
        cout << "A[" << i << "] =";
        cin >> a[i];
    }
    cout <<"arr vua nhap: ";
    for (int i = 0; i<n; i++) {
        cout << a[i] << " ";
    }
}

int code2() {
    int n; cout << "Enter a value of array : "; cin >> n;
    int a[n];
    for (int i = 0 ; i < n; i++) {
        cout << "A[" << i << "] =";
        cin >> a[i];
    }
    cout <<"arr vua nhap: ";
    for (int i = 0; i<n; i++) {
        cout << a[i] << " ";
    }
}

void nhap(int a[], int n)
{
    for (int i = 0; i<n ; i++) {
        cout << "A[" << i << "] =";
        cin >> a[i];
    }
}

void in(int a[], int n)
{
    cout << "mang vua nhap : ";
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    }

void change(int a[], int n) {
    for (int i = 0; i<n; i++) {
        a[i] = 8;
    }
}

void ex1(int a[1000], int n) {
    int i, j , min_idx;
    for (i =0 ; i< n -1; i++) {
        min_idx = i;
        for (j = i+1; j<n ; j++) {
            if ( a[j] < a[min_idx] ) {
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);
        }
}

int main() {
    int a[5] = {3,1,2,7,5};
    int n = 4;
    // cin >> n;
    in (a, n);
    ex1(a,n);

    in (a, n);
    // code2();
    return 0;
}
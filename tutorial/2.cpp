//
// Created by khaint02 on 08/07/25.
//
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
using namespace std;

void Ex_1() {
    int n; cin >> n;
    int sum = 0;
    for ( int i=1; i <= n; i++) {
        sum += i;
        cout << sum << endl;
    }
}

void Ex_2() {
    int n; cin >> n;
    int sum = 0;
    for ( int i = 1; i <= n; i++) {
        sum += i*i;
        cout << sum << endl;
    }
}

void Ex_3() {
    int n; cin >> n;
    int sum = 0;
    for ( int i = 1; i <= n; i+=0) {
        sum += i;
        cout << sum << endl;
    }
}
void Sum() {
    int n; cin >> n;
    int sum = 0;
    while (n != 0) {
        sum += n%10;
        n /= 10;
    }
    cout << sum << endl;
}
void Dem_so() {
    int n ; cin >> n;
    int cnt = 0;
    while (n != 0) {
        cnt++;
        n/=10;
    }
    cout << cnt << endl;
}
void Do_while() {
    int n;
    cin >> n;
    do {
        cout << n << endl;
        n++;
    }while (n<=3);
}
void Draw() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int Solve(int x, int y, int z) {
    cout << "28tech.com.vn" << endl;
    cout << x*2 <<","<< y*3 << ","<< z*4 <<endl;
    return x*y*z;
}

int ex3(int n) {
    int sum = 0;
    for (int i = 3; i <= n; i+=3) {
        // if ( i % 3 == 0) {
        //     sum += i;
        // }
        cout << i << endl;
        sum += i;
    }
    return sum;
}

double ex4(int n) {
    double sum = 0;
    for (int i=1; i<=n; i++ ) {
        sum += 1.0/i;
    }
    return sum;
}
void ex4_1(int n) {
    double sum = 0;
    for (int i=1; i<=n; i++ ) {
        sum += 1.0/i;
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
}

void ex5(int n) {
    double sum = 0;
    for (int i=1; i<=n; i++ ) {
        sum += 1.0/(2.0*i);
        cout << "i=" << i << " " << sum << endl;
    }
    cout << fixed << setprecision(2)<<sum << endl;
}

void ex6(int n) {
    double sum = 0;
    for (int i=1; i<=n; i++ ) {
        sum += pow(-1.0, (n*n) );
        cout << "i=" << i << " " << sum << endl;
    }
    cout <<sum << endl;
}
void ex7(){}
void ex8(){}
void ex9(){}
void ex10(){}
void ex11(){}
void ex12(){}

void ex13(){}
void ex14(){}
void ex15(){}
void ex16(){}
void ex17(){}
void ex18(){}
void ex19(){}
void ex20(){}
void ex21(){}
void ex22(){}
void ex23(){}
void ex24(){}
void ex25(){}

int main () {
    // Draw();
    // int a, b ,c;
    // cin >> a >> b >> c;
    // cout << Solve (a, b, c) << endl;
    int a; cin >> a;
    ex6(a);
    // double result = ex4(a);
    // cout << fixed << setprecision(2)<< result << endl;
    return 0;
}
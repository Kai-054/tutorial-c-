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
    //tpye 1
    double sum_a=0;
    double sum_b=0;
    for (int i=2; i<=n; i+=2 ) {
        sum_a += i ;
        cout << "i=" << i << " " << sum_a<< endl;
    }
    cout << "sum = "<<sum_a << endl;

    for (int i=-1; i>=-n; i-=2 ) {
        sum_b += i;
        cout << "i=" << i << " " << sum_b << endl;
    }
    cout << "sum 2 ="<< sum_b << endl;

    double total = sum_a+sum_b;
    cout <<"total = "<<total << endl;

    //type 2
    int even = 2;
    int odd = -1;
    double sum = 0;
    double sum2 = 0;
    while ( even <= n || abs(odd) <= n ) {
        if (even <= n) {
            sum += even;
            even +=2 ;
        }
        else {
            sum2 += odd;
            odd -= 2;
        }
    }
    double total_w = sum+sum2;
    cout <<"total _ while = "<<total_w << endl;
}

void ex7(int n) {
    double sum = 0;
    for (int i =2; i<=n; i+=2 ) {
        sum += i;
    }
    cout << "total=" << sum << endl;

    double sum_a = 0;
    int i = 2;
    while (i<=n) {
        sum_a += i;
        i += 2;
    }
    cout << "sum_A =" << sum_a << endl;
}

void ex8(int n) {
    double sum = 0;
    for ( int i = 1; i<=n; i+=2 ) {
        sum += i;
    }
    cout << "sum=" << sum << endl;
    double sum_b = 0;
    int i = 1;
    while (i <= n) {
        sum_b += i;
        i += 2;
    }
    cout << "sum_b=" << sum_b << endl;
}

void ex9(int n) {
    double sum = 0;
    for ( int i = 1; i<=n; i++ ) {
        sum += pow(i, 3);
    }
    cout << "sum=" << sum << endl;
}

void ex10(int n) {
    int b = 1 ;
    for ( int i = 1; i<=n; i++ )
    {
        b *= i;
    }cout << b << endl;

}

void ex11(int x, int y) {
    long long a;
    for (int i = 1; i<=y; i++) {
         a = pow(x, y);
    }
    cout << a << endl;
}

void ex12(int n) {
    int cnt = 0;
    while (n != 0) {
        cnt ++;
        n = n/10;
    }
    cout << cnt << endl;
}

void ex13(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n%10;
        n = n/10;
    }
    cout << sum << endl;
}

void ex14(int n) {
    int sum_even = 0;
    int sum_odd = 0;
    while (n != 0) {
        int i = n%10;
        n = n/10;
        if (i % 2 == 0) {
            sum_even += i;
        }
        else {
            sum_odd += i;
        }
    }cout << sum_even << " " << sum_odd << endl;
}

void ex15(long long n) {
    int cnt_even = 0;
    int cnt_odd = 0;
    long long i;
    while (n != 0) {
        i = n%10;
        n = n/10;
        if (i % 2 == 0) {
            cnt_even ++;
        }
        else {
            cnt_odd ++;
        }
    }
    cout <<"even=" <<cnt_even << " " << "odd=" << cnt_odd << endl;
}
void ex16(long long n ) {
    int cnt = 0;
    long long a;
    while (n > 1) {
        a = n%10;
        n = n/10;
        cout << a << " " << n << endl;
        if (a  == 2 || a  == 3 || a == 5 || a == 7) {
            cnt ++;
        }
    }cout << cnt << endl;
}
void ex17(long long n) {
    int cnt_even = 0;
    int cnt_odd = 0;
    long long i;
    while (n != 0) {
        i = n%10;
        n = n/10;
        if (i % 2 == 0) {
            cnt_even ++;
        }
        else {
            cnt_odd ++;
        }
    }
    if (cnt_even == cnt_odd) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

void ex18(long long n) {
    int cnt = 0;
    int sum = 0;
    for (long long a = 2; a <= n; a++) {
        // cout << a << endl;
        // int i = n%10;
        // n = n/10;
        // if ( a == 2 || a == 3 || a == 5 || a == 7) {
        //     cnt ++;
        }


        // int i = n%10;
        // n = n/10;

    }cout << cnt << endl;
    // while (n >= 2) {
    //     int i = n%10;
    //     n = n/10;
    //     if ( i == 2 || i == 3 || i == 5 || i == 7) {
    //         cnt ++;
    //     }
    // }cout << cnt << endl;
}

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
    // int a; cin >> a;
    long long  b; cin >> b;
    ex18(b);
    // double result = ex4(a);
    // cout << fixed << setprecision(2)<< result << endl;
    return 0;
}
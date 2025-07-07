//
// Created by khaint02 on 20/06/25.
//
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
using namespace std;

void bai1() {
long long a, b;
    cout << "bai 1" << endl;
    cin >> a >> b ;
    cout <<a/b<< " " << a%b << endl;
}

void bai2() {
 int a;
    cout << "bai 2" << endl;
    cin >> a;
    int result = pow(a, 3) + 3*pow(a, 2) + a + 1;
    cout << result << endl;
}

void bai3() {
    int a, b, c;
    cout << "bai 3" << endl;
    cin >> a >> b >> c ;
    int rs = a*(b+c) + b*(a+c);
    cout << rs << endl;
}

void bai4() {
    cout << "bai 4" << endl;
    long long a, b;
    cin >> a >> b ;
    long long sum = a + b;
    long long minus = a - b;
    double divide = (double)a/b;
    long long mult = a*b;
    cout << sum << " " << minus << " " << mult << " " << fixed << setprecision(2)  << divide << endl;

}

void bai5() {
    long long r;
    cout << "bai 5" << endl;
    cin >> r;
    double perimeter = 2 *M_PI* r;
    const double area = (double) M_PI * pow(r, 2);
    cout << fixed << setprecision(2) << perimeter << " " << area << endl;
}

void bai6() {
    long long x1, y1, x2, y2;
    cout << "bai 6" << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    double distance = sqrt(pow(x2-x1, 2 )+pow(y2-y1, 2));
    cout << "distance " << fixed << setprecision(2) << distance << endl;
}

void bai7() {
    long long c;
    cin >> c;
    double f = (double)c * 9 / 5 + 32;
    cout << fixed << setprecision(2) << f << endl;
}

void bai8() {
    cout << "bai 8" << endl;
    long long n ;
    cin >> n;
    long long sum = (n*(n+1))/2;
    cout << sum << endl;
}
void bai9() {
    cout << "bai 9" << endl;
    long long n ;
    cin >> n;
    long long sum = (n*n*(n*n+1))/4;
    cout << sum << endl;
}
void bai10() {}
void bai11() {}
void bai12() {}
void bai13() {}
void bai14() {}
void bai15() {}
void bai16() {}
void bai17() {}
void bai18() {}
void bai19() {}
void bai20() {}
void bai21() {}
void bai22() {}
void bai23() {}
void bai24() {}
void bai25() {}
void bai26() {}
void bai27() {}
void bai28() {}
void bai29() {}
void bai30() {}
void bai31() {}
void bai32() {}

int main() {
    // bai1();
    // bai2();
    // bai3();
    // bai4();
    // bai5();
    bai9();
    return 0;
}
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

void value_moth() {
    int n;
    cin >> n;
    if ((n==1)||(n==2)||(n==3)||(n==4)||(n==5)) {
        cout << "value moth 31 days" << endl;
    }
    else if ((n==6)||(n==7)||(n==8)||(n==9)||(n==10)) {
        cout << "value moth 63 days" << endl;
    }
    else {
            cout << "value moth 95 days" << endl;
        }
}

void structure_case() {
    int a ;
    cin >> a;
    switch (a) {
        case 1:
            cout << "value moth 1" << endl;
            break;
            case 2:
            cout << "value moth 2" << endl;
            break;
            case 3:
            bai1();
            break;
            case 4: case 5: case 6:
            cout << "value moth 3" << endl;
            break;
            default:
            cout << "error ! \n" << endl;
    }
}

void bai10() {
    int n;
    cin >> n;
    double rs  = 1 - 1.0/(n+1) ;
    cout << fixed << setprecision(2) << rs << endl;
}
void bai11() {
    int n;
    cin >> n;
    long long sum = 2.0*n*(n+1)/2;
    cout << sum << endl;
}
void bai12() {
    long long n;
    cin >> n;
    if (n%2==0) {
        long long sum = n /2;
        cout << sum << endl;
    }
    else {
        long long sum = (-n-1)/2;
        cout << sum << endl;
    }
}
void bai13() {
    int a,b ;
    cin >> a >> b ;
    int device = a/b * b;
    cout << device << endl;
}
void bai14() {
    int a ,b ;
    cin >> a >> b ;
    if (a%2 !=0) {
        int device = ((a / b) + 1) * b;
        cout << device << endl;
    }
    else {
        int device = a/b * b;
        cout << device << endl;
    }
}
void bai15() {
    int a;
    bool l1;
    cin >> a;
    l1 = a%3==0 && a%5==0 ;
    cout << l1 << endl;

}
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
    // bai9();
    // value_moth();
    // structure_case();
    bai15();
    return 0;
}
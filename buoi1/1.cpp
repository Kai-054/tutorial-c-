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
void bai16() {
    int a;
    cin >> a;
    if ( a % 400 == 0 || a % 4 == 0 && a % 100 != 0 ) {
        cout << "YES" << endl;
    }
    else if ( a <= 0 ) {
        cout << "INVALID" <<endl;
    }
    else {
        cout << "NO" << endl;
    }
}

void bai17() {
    int a , b;
    cin >> a >> b ;
    if ( a <=0 || b <= 0 || a > 12 ) {
        cout << "INVALID" <<endl;
    }
    else if (a == 1 || a == 3 || a==5 || a==7 || a==8 || a==10 || a==12) {
        cout << "31 days in years" << endl;
    }
    else if (a == 4 || a==6 || a==9 || a==11) {
        cout << "30 days in years" << endl;
    }
    else {
        if ( b % 400 == 0 || (b % 4 == 0 && b % 100 != 0 ) ) {
        cout <<  "29 days in years " << endl;
        }
        else {
            cout << "28 days in years " << endl;
        }


    }
}

void bai18() {
    char c ; cin >> c;
    if (c >= 97 && c <= 122) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" <<endl;
    }

}

void bai19() {
    char c; cin >> c;
    if (c >= 65 && c <= 90) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" <<endl;
    }
}
void bai20() {
    char c ; cin >> c;
    if ( c >= 65 && c <= 90 || c >= 97 && c <= 122) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

void bai21() {
    char c ; cin >> c;
    if ( c >= 48 && c <= 57 ) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
void bai22() {
    char c ; cin >> c;
    if ( c >= 'A' && c <= 'Z' ) {
        c += 32;
    }
    cout << c << endl;
}
void bai23() {
    char c ; cin >> c;
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
    cout << c << endl;
}

void bai24() {
    char c ; cin >> c;
    if (c >= 'A' && c <= 'Z') {
        if (c == 'Z') {
            c += 7;
            cout << c << endl;
            // exit;
        }
        c += 33;
        cout << c << endl;
    }
    else if (c >= '0' && c <= '9') {
        c += 60;
        cout << c << endl;
    }
    else {
        cout << "ERROR" << endl;
    }
}

void bai25() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= 0 || b<=0 || c <= 0 ) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
}
void bai26() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b>c && b+c>a && a+c>b) {
        if (a == b && b == c) {
            cout << "tam giac deu" << endl;
        }
        else if (a==b || a==c || b==c) {
            if (a*a == b*b + c*c|| b*b == a*a +c*c || c*c == a*a + b*b) {
                cout << "vuong can " << endl;
            }
            cout << "tam giac can" << endl;
        }
        else if (a*a == b*b + c*c|| b*b == a*a +c*c || c*c == a*a + b*b) {
            cout << "vuong  " << endl;
        }
        else {
            cout << "tam giac thuong " << endl;
        }
    }
    else {
        cout << "INVALID" << endl;
    }

}
void bai27() {
    int n;
    cin >> n;
    int year = n / 365;
    int mode = n % 365;
    int week = mode /7;
    int day= mode % 7;
    cout << year << " " << week  << " " << day << endl;

}
void bai28() {
    int a, b, c;
    cin >> a >> b >> c;
    double dental = pow(b, 2)-4*a*c;
    if ( dental < 0 ) {
        cout << "NO" << endl;
    }
    else if (dental == 0) {
        cout << fixed <<setprecision(2) << (float) -b/(2*a) << endl;
    }
    else if (a == 0 && b == 0 || c ==0) {
        cout << "luoi qua tu giai not di " << endl;
    }
    else {
        float x1 = (-b + sqrt(dental))/(2*a);
        float x2 = (-b - sqrt(dental))/(2*a);
        cout << fixed << setprecision (2) << x1 << " " << x2 << endl;
    }

}
void bai29() {
    double a, b;
    cin >> a >> b;
    int c = b - a;
    cout << c  << endl;
}

void bai30() {
    long long a, b, c;
    char d = 47 ;
    cin >> a >> b >> c;
    if (a/b==c || b/c==a || c/a==b) {
        cout << d << endl;
    }
    else {
        cout << "NOSOL" << endl;
    }
}
void bai31() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double e = (a+b+c*2+d*3)/7.0;
    if (e>=8) {
        cout << "very good" << endl;
    }
    else if (e >= 6.5) {
        cout << "good" << endl;
    }
    else if (e >= 5) {
        cout << "trung binh " << endl;
    }
    else if (e<5) {
        cout << "kem" << endl;
    }
}
void bai32() {
    long long a, b, c, d , e, min2;
    cin >> a >> b >> c >> d >> e;

    long long min1 = min({a, b, c, d, e});
    if (a == min1) {
        min2 = min({b, c, d, e});
    } else if (b == min1) {
        min2 = min({a, c, d, e});
    } else if (c == min1) {
        min2 = min({a, b, d, e});
    } else if (d == min1) {
        min2 = min({a, b, c, e});
    } else {
        min2 = min({a, b, c, d});
    }
    cout << min2 << endl;

}

int main() {
    // bai1();
    // bai2();
    // bai3();
    // bai4();
    // bai5();
    // bai9();
    // value_moth();
    // structure_case();
    bai32();
    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

void copyright() {

    cout << "============================================" << endl;

    cout << "  Was written by Buriko Hleb in ©2023 " << endl;

    cout << "============================================" << endl;;
}

void equation() {

    char a;

    char b;

    cout << "Input the first symbol(a): ";

    cin >> a;

    cout << "Input the second symbol(b): ";

    cin >> b;

    if (b + 3 >= a + 1) {

        cout << "1";
    }
    else {

        cout << "0";
    }
}

void getNumbers(float& x, float& y, float& z) {

    cout << "Enter the first number(x): ";

    cin >> x;

    cout << "Enter the second number(y): ";

    cin >> y;

    cout << "Enter the third number(z): ";

    cin >> z;


}

float s_calculation(float x, float y, float z) {

    float s = sin(x) / sqrt(abs(y * z / x + y)) + 3 * pow(y, 5);

    cout << "The sum of the three numbers is " << s << endl;

    return s;
}

void toHex(float x, float y, float z, float s) {

    cout << "The numbers in hexadecimal format are:" << endl;

    cout << "x = " << setiosflags(ios::hex) << (int)x << endl;

    cout << "y = " << setiosflags(ios::hex) << (int)y << endl;

    cout << "z = " << setiosflags(ios::hex) << (int)z << endl;

    cout << "s = " << setiosflags(ios::hex) << (int)s << endl;

}
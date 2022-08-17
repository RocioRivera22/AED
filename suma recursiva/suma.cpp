/* Sum.cpp
 * Suma recursiva
 *Rivera Rocio Micaela
 *2022
 */

#include <iostream>
using namespace std;

struct fraccion {
    int num;
    int den;
};

fraccion Simplificar(fraccion);

int mcd(int, int);

int main() {
    fraccion f, s;
    f.num = 1204;
    f.den = 23212;

    s = Simplificar(f);
    cout << "Simplificar(" << f.num << "/" << f.den << ") = ";
  	cout << s.num << "/" << s.den << endl;

    return 0;
}

fraccion Simplificar(fraccion f) {
    int d= mcd(f.num,f.den);
    f.num /= d;
    f.den /= d;
    return f;
}

int mcd(int a, int b) {
    if(a < b) return mcd(b,a);
    if(b == 0) return a;
    return mcd(b, a % b);
}

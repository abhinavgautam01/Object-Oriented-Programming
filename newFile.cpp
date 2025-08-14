#include<iostream>
using namespace std;
int main(){
    int a = 5;

    int b = a++;
    int c = b * 2;
    int d = c + a;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    int res = a += a++ * 2;
    cout << res << " " << a <<endl;
    
}
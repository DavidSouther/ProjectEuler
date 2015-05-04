#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int sumDigits(const int n){
    char a, b, c, d, e;
    int A, B, C, D, E;
    stringstream ss;
    ss << n;
    ss >> a;
    ss >> b;
    ss >> c;
    ss >> d;
    ss >> e;
    A = pow(a - 0x30, 5);
    B = pow(b - 0x30, 5);
    C = pow(c - 0x30, 5);
    D = pow(d - 0x30, 5);
    E = pow(e - 0x30, 5);
    return A + B + C + D + E;
}


int main(){
    int d;
    int s = 0;
    for(int i = 0 ; i <= 99999; i+=1){
        d = sumDigits(i);
        if(d == i){
            s += i;
            cout << i << ": " << s << endl;
        }
    }
}

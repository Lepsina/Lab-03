#include <iostream>
#include <string>
#include <typeinfo>
#include "class.h"

int main(){
    std::string strp = "1000", strm = "-1000";
    int ip = 1000, im = -1000;
    BigInt a = 100, b = 1000;
    
    std::cout << a + strp << ' ' << strp + a << ' ' << a + ip << ' ' << ip + a << ' ' << a + b << ' ' << b + a << "\n";
    std::cout << a + strm << ' ' << strm + a << ' ' << a + im << ' ' << im + a << ' ' << a + b << ' ' << b + a << "\n";
    std::cout << a - strp << ' ' << strp - a << ' ' << a - ip << ' ' << ip - a << ' ' << a - b << ' ' << b - a << "\n";
    std::cout << a - strm << ' ' << strm - a << ' ' << a - im << ' ' << im - a << ' ' << a - b << ' ' << b - a << "\n";
    std::cout << "--------------------------------\n";
    std::cout << typeid(a).name() << " : " << a << '\n';
    std::cout << typeid(int(a)).name() << " : " << int(a)  << '\n';
    std::cout << typeid(short(a)).name() << " : " << short(a)  << '\n';
    std::cout << typeid(long(a)).name() << " : " << long(a)  << '\n';
    std::cout << typeid(std::string(a)).name() << " : " << std::string(a)  << '\n';
}

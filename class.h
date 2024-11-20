#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <iostream>
#include <algorithm>


class BigInt{
    private:
        std::string value; 
        bool sign;
        
    public:
    //constructors
BigInt(); 
BigInt(bool sign, std::string str);
BigInt(std::string& str);
BigInt(const char* str);
BigInt(int num);
BigInt(short num);
BigInt(long num);
BigInt(char num);

    //operators
        friend BigInt operator+(const BigInt& left, const BigInt& right);
        friend BigInt operator-(const BigInt& left, const BigInt& right);
        BigInt& operator=(const BigInt& other);
        friend std::ostream& operator<<(std::ostream& out, const BigInt& num);
        friend std::istream& operator>>(std::istream& in, BigInt& num);
        
        operator std::string() const;
        operator int() const;
        operator short() const;
        operator long() const;
        operator char() const;
};
//+++++++++++++++++++++
BigInt operator+(int left, const BigInt& right);
BigInt operator+(std::string left, const BigInt& right);
BigInt operator+(short left, const BigInt& right);
BigInt operator+(long left, const BigInt& right);
BigInt operator+(char left, const BigInt& right);
BigInt operator+(const BigInt& left, int right);
BigInt operator+(const BigInt& left, std::string right);
BigInt operator+(const BigInt& left, long right);
BigInt operator+(const BigInt& left, short right);
BigInt operator+(const BigInt& left, char right);

//---------------------
BigInt operator-(int left, const BigInt& right);
BigInt operator-(std::string left, const BigInt& right);
BigInt operator-(short left, const BigInt& right);
BigInt operator-(long left, const BigInt& right);
BigInt operator-(char left, const BigInt& right);
BigInt operator-(const BigInt& left, int right);
BigInt operator-(const BigInt& left, std::string right);
BigInt operator-(const BigInt& left, long right);
BigInt operator-(const BigInt& left, short right);
BigInt operator-(const BigInt& left, char right);

std::string stringDif(const std::string& big, const std::string& small);
std::string stringSum(const std::string& adin, const std::string& dva);
bool firstBigger(const std::string& adin, const std::string& dva);



#endif
#ifndef ABSTRACT_ALGEBRA_BIGINT_H
#define ABSTRACT_ALGEBRA_BIGINT_H

#include <ostream>
#include <vector>
#include <string>


class BigInt {
    std::vector<int> nums;
    bool positive;
public:
    explicit BigInt(std::string);
    BigInt operator+(const BigInt&);
    BigInt operator-(const BigInt&);
    bool operator>(const BigInt&);
private:
    BigInt add(const BigInt&);
    BigInt subtract(const BigInt&);
};

std::ostream& operator<<(std::ostream&, const BigInt&);


#endif //ABSTRACT_ALGEBRA_BIGINT_H

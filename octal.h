#ifndef OCTAL_H
#define OCTAL_H

#include <iostream>
using namespace std;

class octal
{
public:
    friend ostream &operator<<(ostream &, const octal &);
public:
    octal(long = 0);
    octal operator+(const octal &) const;
private:
    short oct[35];
};

#endif //OCTAL_H
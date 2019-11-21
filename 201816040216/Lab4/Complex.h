// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
    public:
    Complex(double,double);
    void printComplex();
    Complex subtract(const Complex &);
    Complex add(const Complex &);
    void setComplexNumber(double,double);

    private:
        double realPart;
        double imaginaryPart;
};
#endif


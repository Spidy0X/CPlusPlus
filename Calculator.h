#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

class clCalculator
{

private:
    // Attributes
    double atrDivide;
    double atrMultiply;
    double atrMinus;
    double atrSum;
    double atrTotal;

public:
    // Methods
    double mthSum(double numb1, double numb2);
    double mthMultiply(double numb1, double numb2);
    double mthDivide(double numb1, double numb2);
    double mthMinus(double numb1, double numb2);
    //double mthTotal();

};

#endif
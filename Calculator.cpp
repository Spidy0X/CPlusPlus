#include "Calculator.h"


using namespace std;

double clCalculator::mthSum(double numb1, double numb2)
{
    double sum{};

    sum = numb1 + numb2;

    cout << sum << endl;

    return sum;

}

double clCalculator::mthMultiply(double numb1, double numb2)
{
    double multi{};

    multi = numb1 * numb2;

    cout << multi << endl;


    return multi;

}

double clCalculator::mthDivide(double numb1, double numb2)
{
    double divide{};

    divide= numb1 / numb2;

    cout << divide << endl;


    return divide;

}

double clCalculator::mthMinus(double numb1, double numb2)
{

    double minus{};

    minus = numb1 - numb2;

    cout << minus << endl;


    return minus;
}
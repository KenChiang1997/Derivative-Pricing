#include <iostream>
#include <cmath>
using namespace std;


// 1. Simple Example
// consider the mathematical function:
//    compoundInterest: R X R X Z --> R
// Algorithm give by the following:
//    compound interest(P, i, n) = P * (1 + i/100)^^n - P
// where P = Principle, i = annual percentage rate, n is the number of year


// we can seperate our function and declaration. In this way, other can view your code more easily.
double compud_Interest(double P, double i, int n);

int main(){
    
    double principle;
    double annual_interest_rate;
    int number_of_years;
    
    std::cout << "How much are you investing?"  <<std::endl;
    cin >> principle;
    std::cout << "what's the annual interest rate(%)?"  <<std::endl;
    cin >> annual_interest_rate;
    std::cout << "Lock out period for the investment periods?"  <<std::endl;
    cin >> number_of_years;
    

    std::cout << "The effective rate is equal to: " << compud_Interest(principle, annual_interest_rate, number_of_years);
}



double compud_Interest(double P, double i, int n){
    double interest = P * pow(1 + 0.01*i, n) - P;
    return interest;
}

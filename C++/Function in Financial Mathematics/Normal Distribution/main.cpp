//
//  main.cpp
//  Normal Distribution
//
//  Created by 江晨立 on 2023/5/27.
//
#include <cmath>
#include <iostream>
using namespace std;


// 3.9.1 recursive function to compute the sum of the numbers [1,n]
int recursive(int n){
    if (n==1){
        return 1;
    }
    return n + recursive(n-1);
}

// 3.9.2 write a recursive function that takes two integer parameters a and b and prints out all the number from a to b
void print_recursive_function(int a, int b){
    if (a > b) {
            return;
        }
        std::cout << a << " ";
    print_recursive_function(a + 1, b);
}

// 3.9.3 Fibonacci number xn = xn−1 + xn−2 if n ≥ 2. We define x0 = 1 and x1 = 1.
// Write a function fibonacci that evaluates the n-th Fibonacci number by recursion.
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}

// 3.9.4 Moro's algorithm for standard normal distribution
const double root2Pi = sqrt( 2.0 * 3.141592653589793 );

double standard_normal_cdf(double x){

    if (x<0) {
           return 1 - standard_normal_cdf(-x);
       }
       double k = 1/(1 + 0.2316419*x);
       double poly = k*(0.319381530 + k*(-0.356563782 + k*(1.781477937
                       + k*(-1.821255978 + 1.330274429*k))));
       double approx = 1.0 - 1.0/root2Pi * exp(-0.5*x*x) * poly;
       return approx;
}

// 3.9.6 For eeach n belong to N define function hn as follows
// h0(x, a0) = a0 hn(x,a0,a1,a2,...,an)=a0 +xhn−1(x,,a1,a2,...,an).
// We will call these “Horner functions” because they use the Horner method of evaluating a polynomial. Any polynomial in x can be rewritten as
// hn(x,a0,a1,a2,...an)
// for appropriate constants ai. The advantage of using h to evaluate the poly-
// nomial is that you don’t have to compute high powers of x.


int main() {
    // insert code here...
    int n = 10;
    int a = 1;
    
    // 3.9.1
    std::cout << "Answer = "<< recursive(n) << "\n" ;
    
    // 3.9.2
    std::cout << "Numbers from " << a << " to " << n << ": ";
    print_recursive_function(a, n);
    std::cout << std::endl;

    // 3.9.3 Fibonacci Number
    int x, i = 0;
    std::cout << "Input n for Fibonacci number:";
    cin >> x;
    while (i < x)
    {
        std::cout << fib(i) << " ";
        i++;
    }
    std::cout << "\n";
    
    // 3.9.4 Moro's algorithm
    double randon_variable_x;
    randon_variable_x = 50;
    std::cout << "THe probability of N(X<=" << randon_variable_x << ") = " << standard_normal_cdf(randon_variable_x) << std::endl;

}

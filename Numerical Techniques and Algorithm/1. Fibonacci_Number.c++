//
//  main.cpp
//  Fibonacci Number
//
//  Created by 江晨立 on 2023/5/28.
// The n-th Fibonacci number can be defined by xn = xn−1 + xn−2 if n ≥ 2. We define x0 = 1 and x1 = 1. Write functions of fibonacci using both recursive function and itterative function

#include <cmath>
#include <iostream>
using namespace std;


int Recursive_FibNumber(int n){
    if ((n==0)||(n==1)){
        return 1;
    }
    else{
        return Recursive_FibNumber(n-1) + Recursive_FibNumber(n-2);
    }
}

int Iterative_FibNumber(int n){
    // Linear Time
    int Fib = 0 ;
    int Previous_Fib = 0;
    
    for (int j = 0; j <= n; j++)
    {
        if (j < 1)
        {
            Fib = 1;
        }
        else{
            Fib = Fib + Previous_Fib; // New Fib is previous fib + pre-previous fib
            Previous_Fib = Fib - Previous_Fib; // update previous fib
        }
    }
    
    return Fib;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    int i = 0;
    
    // Recursive Function
    std::cout << "Enter N:";
    cin >> n;
    
    while(i<n)
    {
        std::cout << Recursive_FibNumber(i) << " ";
        i++;
    }
    std::cout << "\n";
    

    // Iterative Function
    int y = 0;
    std::cout << "Enter N:";
    cin >> n;

    while(y<n)
    {
        std::cout << Iterative_FibNumber(y) << " ";
        y++;
    }
    std::cout << "\n";
    
    return 0;
}

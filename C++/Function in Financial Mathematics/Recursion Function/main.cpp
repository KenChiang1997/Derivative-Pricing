//
//  main.cpp
//  Recursion Function
//
//  Created by 江晨立 on 2023/5/27.
//

// 2. Recursion
// In financial mathematics, lots of time we have to calculate in diferent periods, for example:
// x_{n} = n * x_{n-1}
// x_{n} = n!


#include <iostream>
#include <cmath>

int factorial(int n){
    if(n==0) {
        return 1;
    }
    return n * factorial(n -1);
}


int main() {
    // insert code here...
    int n = 3;
    std::cout << "Answer = "<< factorial(n)<< "\n" ;
}

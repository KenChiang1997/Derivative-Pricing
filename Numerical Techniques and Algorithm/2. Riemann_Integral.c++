#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


//** Here, we going to built a function to calculate integrate. what can you do to optimize this integrator?


double Function(double x)
{

    // put your function here ( for example a x^2 square root function )
    return x*x;
}

double Integrator(double a, double b, int N)
{
    // here we are going to use Riemann integrator
    double result = 0.0;
    double length = (b - a) / N;  // divide integral domain into N pieces of equal size.

    for (int i =0; i < N; i++)
    {
       result += Function(a + (i + 0.5) * length); 
    }

    result *= length;

    return result;
}


int main(){

    double a = -1;
    double b = 1;
    int N = 100;

    std::cout << Integrator(a, b, N) << std::endl;

    return 0;
}

// for optimization the code, 
// (1.) we want to do less computation in loop, and much computation outside the loop.
#include <iostream>

using namespace std;

double Probability_Integral_Transform(double probability[], double value[], double u)
{
    int i = 0;

    while (u > probability[i])
    {
        u -= probability[i];
        i++;
    }

    return value[i];
}

int main()
{
    double probability[] = {0.3, 0.3, 0.4};
    double value[] = {-1, 0, 1};

    // Generate a random number from a uniform distribution
    double u = 0.65;

    // // Apply probability integral transformation
    double transformedValue = Probability_Integral_Transform(probability, value, u);

    // // Print the generated random variable
    std::cout << "Transformed Value: " << transformedValue << std::endl;

    return 0;
}

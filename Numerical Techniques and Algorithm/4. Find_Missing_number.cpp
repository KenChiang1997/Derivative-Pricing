#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>
using namespace  std;




int findMax(set<int> my_set)
{
    // Function to find the maximum element -- Get the maximum element
    // ----------------------------------------------------------------------
    // 1. int max_element;: Declare a variable max_element to store the maximum element.
    // 2. if (!my_set.empty()): Check if the set is not empty.
    // 3. max_element = *(my_set.rbegin());: If the set is not empty, retrieve the maximum element. The rbegin() function returns a reverse iterator pointing to the last element of the set. By dereferencing it (*), we obtain the value of the last (maximum) element and assign it to max_element.
    // 4. return max_element;: Return the maximum element.
    // ----------------------------------------------------------------------
    int max_element;
    if (!my_set.empty())
        max_element = *(my_set.rbegin());
 
    // return the maximum element
    return max_element;
}

std::vector<int> findMissingNumber(int array[], int size) {
    
    std::vector<int> missingNumber;
    std::set<int> mySet(array, array + size);
    int MaxNumber = findMax(mySet);
    // Perform your logic to find the missing numbers and add them to the missingNumber vector

    for (int i = 1; i <= MaxNumber; i++)
    {
        if (mySet.find(i) != mySet.end()) {
        std::cout << "Element " << i << " is present in the set" << std::endl;
        }
        else {
            missingNumber.push_back(i);
            std::cout << "Element " << i <<" not found" << std::endl;
        }
    }

    return missingNumber;
}

int main() {
    int array[] = {1, 3, 4, 5, 6, 7, 8, 8, 8, 9, 12, 12 ,12 ,3};
    int size = sizeof(array) / sizeof(array[0]);
    std::set<int> mySet(array, array + size);

    // ----- performance the function -----
    std::vector<int> missingNumbers = findMissingNumber(array, size);
    std::cout << "First Element of Vector: " << missingNumbers[0] << std::endl;
    std::cout << "Number of Missing Size: " << missingNumbers.size() << std::endl;

    for (int i = 0; i < missingNumbers.size(); i++ )
    {
        std::cout << missingNumbers[i] << " ";
    }

    return 0;
}

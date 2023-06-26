import numpy as np 


def find_missing_integer(array):

    missing_numbers = []
    numbers_set = set(array)
    max_number = max(array)


    if (list(numbers_set)[0] == 1) and (len(list(numbers_set)) == 1):
        return np.nan

    for i in range(1,max_number):
        if i in numbers_set:
            pass 
        else:
            missing_numbers.append(i)

    return missing_numbers

array = [1, 3, 4, 5, 6, 7, 8, 8, 8, 9, 12, 12 ,12 ,3]
# array = [1, 1, 1]

find_missing_integer(array)
#include<cmath>
#include<vector>
#include<iostream>

using namespace std;


// adding date code/ robust across leap year!


bool isLeap(int y){

    if (y % 100 !=0 && y % 4 == 0 ||  y % 400 == 0)
    {
        return true;
    }

    return false;
}

int offsetDays(int d, int m, int y)
{
    int offset = d;
    
    switch ( m -1 )
    {
    case 11:
        offset += 30;
    case 10:
        offset += 31;
    case 9:
        offset += 30;
    case 8:
        offset += 31;
    case 7:
        offset += 31;
    case 6:
        offset += 30;
    case 5:
        offset += 31;
    case 4:
        offset += 30;
    case 3:
        offset += 31;
    case 2:
        offset += 28;
    case 1:
        offset += 31;
    }

    if (isLeap(y) && m>2)
    {
        offset += 1 ; 
    }

    return offset;
}


void ReverseOffsetDays(int offset, int y, int *d, int *m)
{

    int month[13] = { 0, 31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31 };

    if (isLeap(y))
        month[2] = 29;

    int i ;
    for (i = 1; i <= 12; i++)
    {

        if (offset < month[i])
        {
            break;
        }

        offset = offset - month[i];
    }

    *d = offset;
    *m = i;
}


void addDays(int d1, int m1, int y1, int x)
{

    
    std::cout << "Pass";
}

int main()
{

    // for example: current date is 2015/3/14, than we want to add x = 266 to this date
    int d = 14, m = 3, y = 2015;
    int x = 255;
    int adding_numbers = x;

    // transform the month and day to only day
    int offset1 = offsetDays(d, m ,y);
    std::cout << "Already went by how many days: "<< offset1 << std::endl; 

    // use offset date to locate year
    int remDays = isLeap(y)?(366 - offset1):(365 - offset1);
    std::cout << "Remanding days for the year: " << remDays << std::endl;

    // check whether adding x days will resulting in plus one in the year variable
    int y2, offset2;
    if( x <= remDays) // if not than we only plus the offset number with "x". 
    {
        y2 = y;
        offset2 = offset1 + x;
    }
    else // if yes, we have to minus the remDays, and plus one to year, and check whether the remand year is still greater than the full year date.
    {
        x -= remDays;
        y2 = y + 1;
        int y2days = isLeap(y2)?366:365;

        while (x>= y2days)
        {
            x -= y2days;
            y2++;
            y2days = isLeap(y2)?366:365;
        }

        offset2 = x;
    }

    // reverse offset day function
    std::cout << "The original date is:\n" <<
        "y = " << y <<
        "\nm = " << m <<
        "\nd = " << d << std::endl;


    int m2, d2;
    ReverseOffsetDays(offset2, y2, &d2, &m2);
    std::cout << "After adding "<< adding_numbers <<" date, the original date become:\n" <<
        "y2 = " << y2 <<
        "\nm2 = " << m2 <<
        "\nd2 = " << d2 << std::endl;


    return 0;
}

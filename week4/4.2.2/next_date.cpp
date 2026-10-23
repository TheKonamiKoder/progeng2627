#include <iostream>

bool leap_year(int year){
    bool ly = false;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                ly = true;
            }
            else
            {
                ly = false;
            }
        }
        else
        {
            ly = true;
        }
    }
    else
    {
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)
    
    if (m1 == 1 && d1 == 31)
    {
        d2 = 1; m2 = 2; y2 = y1;
    }
    else if (m1 == 2 && d1 == 28 && !leap_year(y1))
    {
        d2 = 1; m2 = 3; y2 = y1;
    }
    else if (m1 == 2 && d1 == 29 && leap_year(y1))
    {
        d2 = 1; m2 = 3; y2 = y1;
    }
    else if (m1 == 3 && d1 == 31)
    {
        d2 = 1; m2 = 4; y2 = y1;
    }
    else if (m1 == 4 && d1 == 30)
    {
        d2 = 1; m2 = 5; y2 = y1;
    }
    else if (m1 == 5 && d1 == 31)
    {
        d2 = 1; m2 = 6; y2 = y1;
    }
    else if (m1 == 6 && d1 == 30)
    {
        d2 = 1; m2 = 7; y2 = y1;
    }
    else if (m1 == 7 && d1 == 31)
    {
        d2 = 1; m2 = 8; y2 = y1;
    }
    else if (m1 == 8 && d1 == 31)
    {
        d2 = 1; m2 = 9; y2 = y1;
    }
    else if (m1 == 9 && d1 == 30)
    {
        d2 = 1; m2 = 10; y2 = y1;
    }
    else if (m1 == 10 && d1 == 31)
    {
        d2 = 1; m2 = 11; y2 = y1;
    }
    else if (m1 == 11 && d1 == 30)
    {
        d2 = 1; m2 = 12; y2 = y1;
    }
    else if (m1 == 12 && d1 == 31)
    {
        d2 = 1; m2 = 1; y2 = y1 + 1;
    }
    else
    {
        d2 = d1 + 1; m2 = m1; y2 = y1;
    }
    
}

int main(){
    int d1, m1, y1, d2, m2, y2;
    std::cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);

    std::cout << d2 << ' ' << m2 << ' ' << y2;
}
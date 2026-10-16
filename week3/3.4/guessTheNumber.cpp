#include <iostream>

int main()
{
    bool found = false;

    int lower, upper;
    std::cin >> lower >> upper;

    while (!found)
    {        
        int guess = (lower + upper) / 2;

        std::cout << "I guessed " << guess << " Is it correct (y/n)? ";
        char correct;
        std::cin >> correct;
        
        if (correct == 'y')
        {
            std::cout << "Yay!";
            found = true;
        }
        else if (correct = 'n')
        {
            std::cout << "Is it higher or lower (h/l)? ";
            char higher;
            std::cin >> higher;

            if (higher == 'h')
            {
                upper = guess;
                //std::cout << "Higher: " << higher << '\n';
            }
            else if (higher == 'l')
            {
                lower = guess;
                //std::cout << "Lower: " << lower << '\n';
            }
        }
    }
}
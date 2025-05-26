#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore(); // Ignore the newline character after the integer input

    std::string str;
    std::getline(std::cin, str);

    int longestOutside = 0;
    int wordsInside = 0;

    bool insideParentheses = false;
    int currentWordLength = 0;

    for (char ch : str)
    {
        if (ch == '(')
        {
            if (currentWordLength > 0)
            {
                if (!insideParentheses)
                {
                    longestOutside = std::max(longestOutside, currentWordLength);
                }
                currentWordLength = 0;
            }
            insideParentheses = true;
        }
        else if (ch == ')')
        {
            if (currentWordLength > 0 && insideParentheses)
            {
                ++wordsInside;
                currentWordLength = 0;
            }
            insideParentheses = false;
        }
        else if (ch == '_' || std::isspace(ch))
        {
            if (currentWordLength > 0)
            {
                if (insideParentheses)
                {
                    ++wordsInside;
                }
                else
                {
                    longestOutside = std::max(longestOutside, currentWordLength);
                }
                currentWordLength = 0;
            }
        }
        else
        {
            ++currentWordLength;
        }
    }

    // Check the last word if the string does not end with an underscore or parenthesis
    if (currentWordLength > 0)
    {
        if (insideParentheses)
        {
            ++wordsInside;
        }
        else
        {
            longestOutside = std::max(longestOutside, currentWordLength);
        }
    }

    std::cout << longestOutside << " " << wordsInside << std::endl;

    return 0;
}

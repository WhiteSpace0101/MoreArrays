#include <iostream>

int main()
{
    const int max_length = 100; //Array size
    char text[max_length];      //Array to hold input string

    std::cout << "Enter a line of text:" << std::endl;

    //Read a line of characters including spaces
    std::cin.getline(text, max_length); //The \n will act as the teminator for the input. Thus the input ends when the user hits the"enter" key
    std::cout << "you entered:\n" << text << std::endl; // Only char type arrays can output its contents by using just its name. 

    size_t vowels = 0; //count of vowels
    size_t consonants {}; //count of consonants. The curly brackets initializes the variable to 0.

    //for(int i; text[i]; i++) also works because text[i] contains the null character '\0'. The null character only character that converts to a boolean false.
    for(int i = 0; text[i] != '\0'; i++) // '\0' represents the null character for char arrays.
    {
        if(std::isalpha(text[i]))
        {
            switch(std::tolower(text[i]))
            {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowels;
                break; // with out the break line the switch statement will run all cases and defaults instead of only one specific case.
                
                default:
                ++consonants;
            }
        }
    }
    std::cout << "Your input contained " << vowels << " vowels and "
            << consonants << " consonants." << std::endl;

}
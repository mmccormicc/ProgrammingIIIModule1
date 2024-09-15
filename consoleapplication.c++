#include <iostream>

int main() {
    // Creating character arrays for person information
    char firstName[] = "Holly";
    char lastName[] = "Johnson";
    char streetAddress[] = "1234 Maple Street";
    char city[] = "Townsville";
    // Zip codes in the US are always 5 digits and can never be negative, so an unsigned short can be used to represent them
    unsigned short zipCode = 12345;

    // Printing person information
    std::cout << "--Person Information--" << std::endl;
    std:: cout << "First Name: " << firstName << std::endl;
    std:: cout << "Last Name: " << lastName << std::endl;
    std:: cout << "Street Address: " << streetAddress << std::endl;
    std:: cout << "City: " << city << std::endl;
    std:: cout << "ZIP Code: " << zipCode << std::endl;

    return 0;
}


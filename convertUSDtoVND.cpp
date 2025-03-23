#include <iostream>

// Function to convert USD to VND
float convertUSDtoVND(float usd) {
    return usd * 25000; // Assuming 1 USD = 25000 VND
}

float convertVNDtoUSD(float vnd) {
    return vnd / 25000; // Assuming 1 USD = 25000 VND
}

int main()
{
    std::cout << "Be An cute." << std::endl;

    float usd, vnd;
    std::cout << "Enter amount in USD: ";
    std::cin >> usd;
    vnd = convertUSDtoVND(usd);
    std::cout << usd << " USD is " << vnd << " VND" << std::endl;
    
    // New code for VND to USD conversion
    std::cout << "Enter amount in VND: ";
    std::cin >> vnd;
    usd = convertVNDtoUSD(vnd);
    std::cout << vnd << " VND is " << usd << " USD" << std::endl;

    // Use std::cin.get() to pause the program
    std::cin.get();
    std::cin.get();
    return 0;
}
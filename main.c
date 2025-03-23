#include<stdio.h>
#include<conio.h> // Remove this line if using getchar()

// Function to convert USD to VND
float convertUSDtoVND(float usd) {
    return usd * 25000; // Assuming 1 USD = 25000 VND
}

float convertVNDtoUSD(float vnd) {
    return vnd / 25000; // Assuming 1 USD = 25000 VND
}

int main()
{
    printf("Be An cute.\n");

    float usd, vnd;
    printf("Enter amount in USD: ");
    scanf("%f", &usd);
    vnd = convertUSDtoVND(usd);
    printf("%.2f USD is %.2f VND\n", usd, vnd);
    
    // New code for VND to USD conversion
    printf("Enter amount in VND: ");
    scanf("%f", &vnd);
    usd = convertVNDtoUSD(vnd);
    printf("%.2f VND is %.2f USD\n", vnd, usd);

    // Use getchar() to pause the program
    getch();
    return 0;
}
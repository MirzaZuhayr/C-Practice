//Let's convert a dollar amount into a number of coins. The input will be the total amount, the output will be the number of quarters, dimes, nickles, and pennies. 
//Always break the total into the highest coin value first, resulting in the fewest amount of coins. 
//First convert the dollar amount (1.36) into the total number of pennies (136)
//then use floor division //, which throws away the remainder. 10/3 is 3.333333, 10//3 is 3.

#include <stdio.h>
#include <math.h>

int conversion(double dollarAmt)
{
    int totalMoney = dollarAmt*100;
    int quarters = floor(totalMoney/25);
    int dimeConversion = totalMoney % 25;
    int dimes = floor(dimeConversion/10);
    return quarters; 
}

void main(void)
{
    int quarters = conversion(1.36);
    printf("%d", quarters);
}
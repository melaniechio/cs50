#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    long checksum = 10;
    int counter = 0;
    long sum = 0;
    long temp = 0;
    long num = 0;
    long not_dbl = 0;
    do
    {
        num = get_long("Number: ");
    }
    while(num == 0);

    long tempNum = num;
    while(counter < 16 || num != 0)
    {
        temp = num % checksum;
        if(counter % 2 != 0){
            temp = temp * 2;

            if(temp > 9)
            {
                sum += temp % 10;
                temp = temp / 10;
                sum += temp;

            }
            else
            {
                sum += temp;
            }
        }
        else {
            not_dbl += temp;
        }
        num = num / 10;
        counter++;
    }
    num = tempNum;
    sum += not_dbl;
    if (sum % 10 == 0)
    {
        long holder = num / pow(10, 13);
        long holdMC = num / pow(10, 14);
        long holdV = num / pow(10, 15);
        long holdV2 = num / pow(10, 12);
        // AmEx 15 digit start with 34 or 37
        if (holder == 34){
            printf("AMEX\n");
        }
        else if(holder == 37){
            printf("AMEX\n");
        }
        // MsterCard 16 digit, start with 51, 52, 53, 54, or 55
        else if(holdMC == 51){
            printf("MASTERCARD\n");
        }
        else if(holdMC == 52){
            printf("MASTERCARD\n");
        }
        else if(holdMC == 53){
            printf("MASTERCARD\n");
        }
        else if(holdMC == 54){
            printf("MASTERCARD\n");
        }
        else if(holdMC == 55){
            printf("MASTERCARD\n");
        }
        // VISA 13 or 16 digit, start with 4
        else if(holdV == 4){
            printf("VISA\n");
        }
        else if(holdV2 == 4){
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }

    }
    else
    {
        printf("INVALID\n");
    }

}
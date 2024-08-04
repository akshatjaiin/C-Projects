#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

int count(int long long n);
bool checksum(int long long n, int count);
void printcard(int long long n, int count);

int main(void)
{
    int long long n;
    printf("Number: ");
    scanf("%lld", &n);

    int digits = count(n);
    if (checksum(n, digits))
    {
        printcard(n, digits);
    }
}

int count(int long long n)
{
    int count = 0;
    while (n > 1)
    {
        n = n / 10;
        count++;
    }
    return count;
}


bool checksum(int long long n, int count)
{

    int sum = 0;
    int temp;
    for (int i = 1; i <= count; i++)
    {
        if (i % 2 == 0)
        {
            temp = n % 10 * 2;
            while(temp > 0){
                sum += temp % 10;
                temp /= 10;
            }
        }
        else
        {
            sum = sum + n % 10;
        }
        n = n / 10;
    }
    if (sum%10 == 0)
    {
        return true;
    }
    printf("INVALID\n");
    return false;
}


void printcard(int long long n, int count)
{
    //todo
}
#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, is_prime = 1;
    long long factorial = 1;

    // Step 3: Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 4: Check for Prime
    if (num < 2)
        is_prime = 0;
    else
    {
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    // Step 5: Calculate Factorial
    // for (i = 1; i <= num; i++)
    // {
    //     factorial *= i;
    // }

    // Step 6a: Output Prime Check
    if (is_prime)
        printf("%d is a Prime number.\n", num);
    else
    {
        printf("%d is not a Prime number.\n", num);

        // Step 6b: Output Factorial
        printf("Factorial of %d = %lld\n", num, factorial);
        int temp = num, pre = 1;
        for (int i = 2; temp != 1;)
        {
            if (temp % i == 0)
            {
                temp /= i;
                if (i == pre)
                {
                    continue;
                }

                printf("%d,", i);
                pre = i;
            }
            else
            {
                i++;
            }
        }
    }

    printf("\n");

    return 0;
}
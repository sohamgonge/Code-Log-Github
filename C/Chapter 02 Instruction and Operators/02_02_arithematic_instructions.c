#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;

    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);

    int z;
    z = b * a;

    printf("The value of z is %d", z);

    // b * a=z; This doesn't work, because the assignment operator assigns the right hand value to the left hand side

    printf("5 when divided by 2 gives a remainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 gives a remainder of %d\n", -5 % 2);

    // Gives a remainder of -1 because the result gets the sign of numerator

    printf("5 when divided by -2 gives a remainder of %d\n", 5 % -2);
    printf("-5 when divided by -2 gives a remainder of %d\n", -5 % -2);

    // No operator is assumed to be present
    // printf("The value when 4 multiplied by 5 is %d\n", (4)(5)); ---> Will not return 20! Wrong!!

    printf("The value when 4 multiplied by 5 is %d\n", (4) * (5));

    // There is no operator to perform exponentiation in c

    printf("The value of 2 ^ 3 is %d\n", (2) ^ (3)); //---> will not produce 2 to the power 3

    // '^' is bitwise xor operator

    printf("The value of 2 to the power of 3 is %f\n", pow(2, 3)); // pow (2,3 ) from math.h produces 2 to the power 3

    // Type conversion
    // Integer and int --> int
    // int and float --> float
    // float and float ---> float

    printf("The value of 6 and 6 is %d\n", 6 + 6);
    printf("The value of 6 and 6.5 is %f\n", 6 + 6.5);
    printf("The value of 6 and 6.5 is %f\n", 6 + 6.5);
    printf("The value of 5/2 is %d\n", 5 / 2);
    printf("The value of 5/2 is %f\n", 5 / 2);
    int k = 3.0 / 9;
    // 3.0 / 9 returns a float that is 0.333 but since k is an int and only capable of storing int so it stores 0 instead of 0.3
    printf("The value of k is %d\n", k);
    return 0;
}
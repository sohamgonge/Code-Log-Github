#include <stdio.h>

int main()
{
    int phy, chem, math;
    float total;
    printf("Enter Physics Marks: ");
    scanf("%d", &phy);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &chem);
    printf("Enter Maths Marks: ");
    scanf("%d", &math);
    total = (phy + math + chem) / 3;
    if ((total < 40) || (phy < 33) || (chem < 33) || (math < 33))
    {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date;
void display(date d)
{
    printf("The date is %d/%d/%d\n", d.date, d.month, d.year);
}

int datecmp(date d1, date d2)
{
    // make decision on the baiss of year comparision
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    // make decision on the baiss of month comparision

    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
        // make decision on the baiss of date comparision
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}
int main()
{
    date d1 = {5, 11, 31};
    date d2 = {5, 11, 31};
    display(d1);
    display(d2);
    int a = datecmp(d1, d2);
    printf("Date comparison function returns : %d", a);
    return 0;
}

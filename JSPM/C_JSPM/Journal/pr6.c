#include <stdio.h>

int main()
{
    int ilen, ifreq = 0;
    char cdo;
    float fsum = 0, fser, fmax, fmin;
    printf("Enter the total no.of elements : ");
    scanf("%d", &ilen);
    float flist[ilen];
    int ireq[ilen];
    for (int i = 0; i < ilen; i++)
    {
        printf("Enter Your %d element : ", i + 1);
        scanf("%f", &flist[i]);
        if (i == 0)
        {
            fmax = fmin = flist[0];
        }
        if (flist[i] > fmax)
        {
            fmax = flist[i];
        }
        if (flist[i] < fmin)
        {
            fmin = flist[i];
        }
        ireq[i] = -1;
        fsum += flist[i];
    }

    printf("Do You Want to Search an Element (Y/n) :");
    scanf(" %c", &cdo);
    if (cdo == 'Y' || cdo == 'y')
    {
        printf("Which Element are we looking for? : ");
        scanf("%f", &fser);
        for (int i = 0; i < ilen; i++)
        {
            if (flist[i] == fser)
            {
                ireq[ifreq] = i;
                ifreq++;
            }
        }
        printf("The %.3f element is found at : ", fser);
        for (int i = 0; ireq[i] != -1; i++)
        {
            printf("%d ", ireq[i]);
        }
        printf("Locations with a Frequency of %d \n", ifreq);
    }
        printf("The Average of all elements is : %f\n", fsum / ilen);
        printf("The Maximum of all elements is : %f", fmax);
        printf("The Minimum of all elements is : %f", fmin);
    return 0;
}
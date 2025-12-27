#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING_LENGTH 6

struct package
{
    char *id;
    int weight;
};

typedef struct package package;

struct post_office
{
    int min_weight;
    int max_weight;
    package *packages;
    int packages_count;
};

typedef struct post_office post_office;

struct town
{
    char *name;
    post_office *offices;
    int offices_count;
};

typedef struct town town;

void print_all_packages(town t)
{
    printf("%s:\n", t.name);
    for (int i = 0; i < t.offices_count; i++)
    {
        printf("\t%d:\n", i);
        for (int j = 0; j < t.offices[i].packages_count; j++)
        {
            printf("\t\t%s\n", t.offices[i].packages[j].id);
        }
    }
}

void send_all_acceptable_packages(town *source, int source_office_index, town *target, int target_office_index)
{
    for (int i = 0; i <= source->offices[source_office_index].packages_count;)
    {
        if (
            target->offices[target_office_index].min_weight <= source->offices[source_office_index].packages[i].weight &&
            source->offices[source_office_index].packages[i].weight <= target->offices[target_office_index].max_weight)
        {
            target->offices[target_office_index].packages = realloc(target->offices[target_office_index].packages, sizeof(package) * ((target->offices[target_office_index].packages_count) + 1));
            // Created room for new package
            target->offices[target_office_index].packages_count++;
            // updated target package count
            target->offices[target_office_index].packages[(target->offices[target_office_index].packages_count) - 1] = source->offices[source_office_index].packages[(source->offices[source_office_index].packages_count) - 1];
            // Allocated package to target location
            for (int j = i; j < ((source->offices[source_office_index].packages_count) - 1); j++)
            {
                // Adjusting positions of the packages to run loop until all elements aren't moved one step back
                source->offices[source_office_index].packages[j] = source->offices[source_office_index].packages[j + 1];
                // Adjusting package
                source->offices[source_office_index].packages[j].id = source->offices[source_office_index].packages[j + 1].id;
                // Adjusting package id
                source->offices[source_office_index].packages[j].weight = source->offices[source_office_index].packages[j + 1].weight;
                // Adjusting package weight
            }
            // free(source.offices[source_office_index].packages[(source.offices[source_office_index].packages_count)-1]);
            source->offices[source_office_index].packages_count--;
        }
        else
        {
            i++;
        }
    }
}

town town_with_most_packages(town *towns, int towns_count)
{
    int max_towns_index, max = 0, i = 0, j = 0;
    for (i = 0; i < towns_count; i++)
    {
        int total_packages = 0;
        for (j = 0; j < towns[i].offices_count; j++)
        {
            total_packages += towns[i].offices[j].packages_count;
        }
        if (total_packages > max)
        {
            max = total_packages;
            max_towns_index = i;
        }
    }
    return towns[max_towns_index];
}

town *find_town(town *towns, int towns_count, char *name)
{
    int i = 0;
    for (i = 0; i < towns_count; i++)
    {
        if (name == towns[i].name)
        {
            return &towns[i];
        }
    }
    return &towns[i];
}

int main()
{
    int towns_count;
    scanf("%d", &towns_count);                        // helps to know how many towns are there in the country
    town *towns = malloc(sizeof(town) * towns_count); // creates town to towss[i] array
    for (int i = 0; i < towns_count; i++)
    {
        towns[i].name = malloc(sizeof(char) * MAX_STRING_LENGTH); // creates the name of town[i] into a string
        scanf("%s", towns[i].name);
        // takes input for the town name to towns[i].name
        scanf("%d", &towns[i].offices_count);
        // Takes input to know how many offices are there in a town and stores it in towns[i].office_count
        towns[i].offices = malloc(sizeof(post_office) * towns[i].offices_count);
        // Creates towns[i].offices[j] offices for a down

        for (int j = 0; j < towns[i].offices_count; j++)
        {
            // Runs until all the offices packages data is taken as input
            scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight, &towns[i].offices[j].max_weight);
            // Takes in input for packages_count for a particular office
            // Takes input for the minimum and Maximum weight of the pages for a particular_office
            towns[i].offices[j].packages = malloc(sizeof(package) * towns[i].offices[j].packages_count);
            // Creates the packages of the office into a array to store multiple packages
            for (int k = 0; k < towns[i].offices[j].packages_count; k++)
            {
                // Runs the loop until all the packages of a particular offices are taken into consideration
                towns[i].offices[j].packages[k].id = malloc(sizeof(char) * MAX_STRING_LENGTH);
                // Creates the id as a array to take in the multiple characters in the id name
                scanf("%s", towns[i].offices[j].packages[k].id);
                // Takes in the pacakage id or name
                scanf("%d", &towns[i].offices[j].packages[k].weight);
                // Takes in the package weight
            }
        }
    }
    int queries;
    scanf("%d", &queries);
    // Takes in how many times the loops should run, how many queries it takes in
    char town_name[MAX_STRING_LENGTH];
    // Creates a town_name[6] to take in name of the
    while (queries--)
    {
        int type;
        // takes in which type of the query
        scanf("%d", &type);
        switch (type)
        {
        case 1:
            scanf("%s", town_name);
            // Takes in town name for which all the data is to be printed
            town *t = find_town(towns, towns_count, town_name);
            print_all_packages(*t);
            break;
        case 2:
            scanf("%s", town_name);
            town *source = find_town(towns, towns_count, town_name);
            int source_index;
            scanf("%d", &source_index);
            scanf("%s", town_name);
            town *target = find_town(towns, towns_count, town_name);
            int target_index;
            scanf("%d", &target_index);
            send_all_acceptable_packages(source, source_index, target, target_index);
            break;
        case 3:
            printf("Town with the most number of packages is %s\n", town_with_most_packages(towns, towns_count).name);
            break;
        }
    }
    return 0;
}

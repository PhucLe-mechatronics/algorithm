#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int compare(const void* a, const void* b)
{
    const char* s1 = *(const char**)a;
    const char* s2 = *(const char**)b;
    char array1[25];
    char array2[25];
    strcpy(array1,s1);
    strcpy(array2,s2);
    strcat(array1,s2);
    strcat(array2,s1);
    return strcmp(array2,array1);
}
char* largestNumber(int* nums, int numsSize) 
{
    char *strings[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        strings[i]=malloc(12*sizeof(char));
        sprintf(strings[i],"%d",nums[i]);
    }
    qsort(strings, numsSize, sizeof(char*), compare);
    if(strings[0][0]=='0')
    {
        for(int i=0;i<numsSize;i++)
        {
            free(strings[i]);
        }
        char* zero = malloc(2 * sizeof(char));
        strcpy(zero, "0");
        return zero;
    }
    int number=0;
    for(int i=0;i<numsSize;i++)
    {
        number:number += strlen(strings[i]);
    }
    char *returnx=malloc((number+1)*sizeof(char));
    returnx[0] = '\0';
    for(int i=0;i<numsSize;i++)
    {
        strcat(returnx,strings[i]);
    }
    return returnx;
}
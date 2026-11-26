#include <stdlib.h>
int** findSolution(int (*customFunction)(int, int), int z, int* returnSize, int** returnColumnSizes) {
	int**return_solution=malloc(1000*sizeof(int*));
    int count=0;
    int x=1;
    int y=1000;
    while(x<=1000&y>0)
    {
        if(customFunction(x,y)<z)
        {
            x++;
        }
        else if(customFunction(x,y)>z)
        {
            y--;
        }
        else
        {
            return_solution[count]=malloc(2*sizeof(int));
            return_solution[count][0]=x;
            return_solution[count][1]=y;
            count++;
            x++;
            y--;
        }
    }
    *returnSize=count;
    int *resul_returnColimSizes=malloc(count*sizeof(int));
    for(int i=0;i<count;i++)
    {
        resul_returnColimSizes[i]=2;
    }
    *returnColumnSizes=resul_returnColimSizes;
    return return_solution;
}
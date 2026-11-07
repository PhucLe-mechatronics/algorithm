#include <stdint.h>
#include <stdlib.h>
char* removeDuplicates(char* s, int k) {
    char *stack=malloc(1000000*sizeof(char));
    int top=-1;
    int count[1000000]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        if(top==-1)
        {
            top++;
            stack[top]=s[i];
            count[top]=1;
        }
        else
        {
            if(s[i]!=stack[top])
            {
                top++;
                stack[top]=s[i];
                count[top]=1;
            }
            else
            {
                top++;
                stack[top]=s[i];
                count[top]=count[top-1]+1;
                if(count[top]==k)
                {
                    top=top-k;
                }
            }
        }
    }
    top++;
    stack[top]='\0';
    return stack;
}
bool checkIfExist(int* arr, int arrSize) {
    int count_zero=0;
    int even_number[arrSize];
    int even_write=0;
    int odd_number[arrSize];
    int odd_write=0;
    for(int i=0;i<arrSize;i++)
    {
        if(arr[i]==0)
        {
            count_zero++;
        }
        else if(arr[i]%2==0)
        {
            even_number[even_write]=arr[i];
            even_write++;
        }
        else if(arr[i]%2!=0)
        {
            odd_number[odd_write]=arr[i];
            odd_write++;
        }
    }
    if(count_zero>=2)
    {
        return true;
    }
    for(int i=0;i<odd_write;i++)
    {
        for(int j=0;j<even_write;j++)
        {
            if(odd_number[i]*2==even_number[j])
            {
                return true;
            }
        }
    }
    for(int i=0;i<even_write;i++)
    {
        for(int j=0;j<even_write;j++)
        {
            if(even_number[i]/2==even_number[j])
            {
                return true;
            }
        }
    }
    return false;
}
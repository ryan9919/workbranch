int min_element(int array[], int n)
{
    if (n<1){
        return 0;
    }
    int min_value = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] < min_value)
        {
            min_value = array[i];
        }
    }
    return min_value;
}
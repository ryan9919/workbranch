int max_element(int array[], int n)
{
    if (n<1){
        return 0;
    }
    int max_value = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max_value)
        {
            max_value = array[i];
        }
    }
    return max_value;
}
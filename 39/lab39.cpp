// Derek Cook
// CS 1337
// Lab 39

// modeUsingIndexing:  Using indexing, this function returns the mode
// of the n-element integer array.  The mode is defined as the value
// which occurs most frequently in a set of data.  The count of the
// number of times the mode occurs in the array is returned via the
// third parameter.
int modeUsingIndexing(const int array[], int n, int& count)
{
    int mode, tempCount, i, j;

    count = 0;

    for (i = 0; i < n; ++i)
    {
        tempCount = 1;
        for (j = i + 1; j < n; ++j)
        {
            if (array[i] == array[j])
            {
                tempCount++;
            }
        }

        if (tempCount > count)
        {
            mode = array[i];
            count = tempCount;
        }
    }

    return mode;
}

// modeUsingPointers:  Using pointers, this function returns the mode
// of the n-element integer array.  The mode is defined as the value
// which occurs most frequently in a set of data.  The count of the
// number of times the mode occurs in the array is returned via the
// third parameter.
int modeUsingPointers(const int *array, int n, int& count)
{
    int mode, tempCount;
    const int *ptri, *ptrj, *const end = array + n;
    count = 0;

    for (ptri = array; ptri < end; ++ptri)
    {
        tempCount = 1;
        for (ptrj = ptri + 1; ptrj < end; ++ptrj)
        {
            if (*ptri == *ptrj)
            {
                tempCount++;
            }
        }

        if (tempCount > count)
        {
            mode = *ptri;
            count = tempCount;
        }
    }

    return mode;

}

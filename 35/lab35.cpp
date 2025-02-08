// Derek Cook
// CS 1337
// Lab 35

// sumUsingIndexing:  receives an n-element integer array and returns
// the sum of the elements; the function uses indexing
int sumUsingIndexing(const int array[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; ++i)
    {
        sum += array[i];
    }

    return sum;
}

// sumUsingPointers:  receives an n-element integer array and returns
// the sum of the elements; the function uses pointers
int sumUsingPointers(const int *array, int n)
{
    int sum = 0;

    const int *ptr;

    for (ptr = array; ptr < array + 5; ++ptr)
    {
        sum += *ptr;
    }
    return sum;
}

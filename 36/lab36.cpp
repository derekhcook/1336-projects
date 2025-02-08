// Derek Cook
// CS 1337
// Lab 36


// largestUsingIndexing:  receives an n-element integer array and returns
// the index of the largest element; the function uses indexing

int largestUsingIndexing(const int array[], int n)
{
    int largestIndex = 0; //assume index of largest is zero
    int i;
    //loob through the remaining elements 1,2, ..., (n-1)

    int index;

    for (i = 0; i < n; i++)
    {
        
        if (largestIndex < array[i])
        {
            largestIndex = array[i];
            index = i;
        }

        
    }

    

    return index;
}

// largestUsingPointers:  receives an n-element integer array and returns
// a pointer to the largest element; the function uses pointers

int *largestUsingPointers(const int *array, int n)
{
    const int *largest = array; //assume address of largest is array
    //const int *largestPtr;
    const int *ptr, *const end = array + n;
    //loob through the remaining elements 1,2, ..., (n-1)

    for (ptr = array + 1; ptr < end; ++ptr)
    {
        
        if (*largest < *ptr)
        {
            largest = ptr;
           
        }

    }
    return const_cast<int *>(largest);
}


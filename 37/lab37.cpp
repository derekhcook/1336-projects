// Derek Cook
// CS 1337
// Lab 37

void mySwap(int& first, int& second);

// reverseArrayUsingIndexing:  Using indexing, this function reverses
// the elements of the n-element integer array in place; that is, the
// function exchanges the first and last elements, the second and
// next-to-last elements, and so on.
void reverseArrayUsingIndexing(int array[], int n)
{
    int left, right;
for(left = 0, right = n - 1; left < right; left++, right--)
{
    mySwap(array[left], array[right]);
}
}

// reverseArrayUsingPointers:  Using pointers, this function reverses
// the elements of the n-element integer array in place; that is, the
// function exchanges the first and last elements, the second and
// next-to-last elements, and so on.
void reverseArrayUsingPointers(int *array, int n)
{
    int *left, *right;

    for (left = array, right = array + (n - 1); left < right; left++, right--)
    {
        mySwap(*left, *right);
    }
}

void mySwap(int& first, int& second)
{
    int temp;

    temp = first;
    first = second;
    second = temp;

}
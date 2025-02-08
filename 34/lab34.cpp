// Derek Cook
// CS 1337
// Lab 34

void swap(int *a, int *b);

// Function orderThree has three reference parameters:  small, medium,
// and large.  The function returns the smallest of small, medium, and
// large in small; the middle value in medium; and the largest value
// in large.

void orderThree(int& small, int& medium, int& large)
{
    if (medium < small)
    {
        swap(&small, &medium);
    }

    if (medium > large)
    {
        swap(&medium, &large);
    }

    if (small > medium)
    {
        swap(&small, &medium);
    }
    
}

// Function orderThree has three parameters, each a pointer to an int
// value.  The function reorders the data so that the smallest of the
// values is pointed to by small, the middle value by medium, and the
// largest value by large.

void orderThree(int *small, int *medium, int *large)
{
    if (*small > *medium)
    {
        swap(small, medium);
    }

    if (*medium > *large)
    {
        swap(medium, large);
    }

    if (*small > *medium)
    {
        swap(small, medium);
    }
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
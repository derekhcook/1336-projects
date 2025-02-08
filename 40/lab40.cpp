// Derek Cook
// CS 1337
// Lab 40

// swap: The swap function swaps a and b in memory.
void swap(int &a, int &b);

// selectionSortUsingPointers:  Using pointers, this function sorts
// in ascending order the n-element integer array using a selection sort.

void selectionSortUsingPointers(int *array, int n)
{
      int *minValue;
        int *start, *ptr, *const end = array + n;
        
  for (start = array; start < (end + 1); ++start)
  {
    minValue = start;
    
    for (ptr = start + 1; ptr < end; ++ptr)
    {
      if (*ptr < *minValue)
      {
        minValue = ptr;
        
      }
    }
    swap(*minValue, *start);
  }
}

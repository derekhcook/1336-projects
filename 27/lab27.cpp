// Derek Cook
// Cs 1337
// Lab 27

unsigned int invBit(unsigned int word, int n)
{
    unsigned int mask = 1;
    mask = mask << n;
    word = word ^ mask;

    return word;
}

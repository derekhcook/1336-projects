// Derek Cook
// CS 1337
// Lab 33

// Function integerDivide has two value parameters, dividend and
// divisor.  The function also has two reference parameters, quotient
// and remainder.  The function returns the quotient and remainder
// from dividing the dividend by the divisor.
void integerDivide(int dividend, int divisor, int& quotient, int& remainder)
{
    quotient = dividend / divisor;
    remainder = dividend % divisor;
}

// Function integerDivide has four parameters, each is a pointer to an
// int.  The first two parameters are pointers to const int
// quantities that represent the dividend and divisor, respectively.
// The last two parameters are pointers to int quantities where the
// quotient and remainder are stored from dividing the dividend by the
// divisor.
void integerDivide(const int *dividend, const int *divisor,
                   int *quotient, int *remainder)
{
    *quotient = *dividend / *divisor;
    *remainder = *dividend % *divisor;
}

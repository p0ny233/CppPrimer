int main()
{
    const double pi = 3.14;
    double *ptr = (double *)&pi;
    const double *cptr = &pi;
    *cptr = 22;
    return 0;
}

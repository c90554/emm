inline
int IsPrime(int n)
{
    if (n<2) return 0;
    if (2==n || 3==n || 5==n) return 1;
    if ((1 != n%6) && (5 != n%6)) return 0;
    
    for (int i=5; i<=k; i+=6)
    {
        if (0==n%i || 0==n%(i+2))
        {
            return 0;
        }
    }
    return 1;
}
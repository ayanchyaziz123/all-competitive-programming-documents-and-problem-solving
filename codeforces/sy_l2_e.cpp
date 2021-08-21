#include <bits/stdc++.h>
using namespace std;

const long long LIMIT = 1e18;

long long calculateTraillingZeros(long long number)
{
    long long traillingZeros = 0;
    for (long long i = 5; i <= number; i *= 5)
    {
        traillingZeros += (number / i);
    }
    return traillingZeros;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    for (int test = 1; test <= testCase; test++)
    {
        long long requiredTraillingZeros;
        scanf("%lld", &requiredTraillingZeros);
        long long low = 1, high = LIMIT, answer = -1;
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            long long traillingZeros = calculateTraillingZeros(mid);

            if (traillingZeros > requiredTraillingZeros)
            {
                high = mid - 1;
            }
            else if (traillingZeros < requiredTraillingZeros)
            {
                low = mid + 1;
            }
            else
            {
                answer = mid;
                high = mid - 1;
            }
        }
        if (answer == -1)
            printf("Case %d: impossible\n", test);
        else
            printf("Case %d: %lld\n", test, answer);
    }
    return 0;
}
#include <iostream>

long long FastPowerCalculate(long long num, long long power)
{
    if(power==0) return (long long)1;
    long long x = FastPowerCalculate(num,power>>1);
    x *= x;
    if(power%2) x*=num;
    return x; 
}
int main()
{ 
    printf("%lld\n",FastPowerCalculate(2,6));
    return 0; 
}
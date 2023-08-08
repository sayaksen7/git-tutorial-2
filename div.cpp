
#include <bits/stdc++.h>
using namespace std;


long long divide(long long dividend, long long int divisor)
{

	
	long long sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

	
	dividend = abs(dividend);
	divisor = abs(divisor);

	long long quotient = 0;
	while (dividend >= divisor) {
		dividend -= divisor;
		++quotient;
	}
return quotient * sign;
}

int main()
{
	int a = -2147483648, b = -1;
	cout << divide(a, b) << "\n";

	a = 43, b = -8;
	cout << divide(a, b);

	return 0;
}

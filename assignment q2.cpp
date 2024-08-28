#include <iostream>
using namespace std;
long long int factorial(int n)
{
long long int res = 1, i;
for (i = 1; i <= n; i++)
res *= i;
return res;
}
int main()
{
int num = 1;
cin>>num;
cout << "Factorial of " << num << " is "<< factorial(num) << endl;
return 0;
}

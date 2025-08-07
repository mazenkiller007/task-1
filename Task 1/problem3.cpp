#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  
int n;

do
{
    cout << "-Enter the number of tests : "<< endl;
    cout << "<< N is in range of (1) to (1,000,000) >> : "<< endl;
    cin >> n;
} while (2>n || n>1000000);

for(int i=0;i<n;i++)
{
    int range;
    do
    {
    cout << endl << "-Enter the range of the test number "<< i+1 << endl;
    cout << "<< the range is between (1) and (100) >> : "<< endl;
    cin >> range;
    } while (1>range || range>100);

        cout << "-The gcd of test " << i+1 << " = " << range/2 << endl;
 
}


return 0;
}
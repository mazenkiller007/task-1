#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
int k2, k3, k5, k6,sum = 0;

cout << "-Enter the number of TWO's : "<< endl;
cin >> k2;
cout << "-Enter the number of THREE's : "<< endl;
cin >> k3;
cout << "-Enter the number of FIVE's : "<< endl;
cin >> k5;
cout << "-Enter the number of SIX's : "<< endl;
cin >> k6;

if(k2 < 0 || k3 < 0 || k5 < 0 || k6 < 0 || k2 > 5000000 || k3 > 5000000 || k5 > 5000000 || k6 > 5000000)
{
    cout << "-Invalid input, please enter values between 0 and 1,000,000." << endl;
    return 1;
}
  
    while(k2 > 0 && k5 > 0 && k6 > 0)
    {
        k2--;
        k5--;
        k6--;
        sum += 256;
    }

    while(k2 > 0 && k3 > 0)
    {
        k2--;
        k3--;
        k5--;
        sum += 32;
    }
    
cout << "-The maximum possible sum of Anton's favorite integers: " << sum << endl;
 
return 0;

}
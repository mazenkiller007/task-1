#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

int n;
double sum = 0.0, percentage = 0.0,temp;
vector<int> drinks;
cout << "-Enter the number of drinks: "<< endl;
cin >> n;
if(n < 1 || n > 100)
{
    cout << "-Invalid input, please enter a number between 1 and 100." << endl;
    return 1;
}

for(int i=0;i<n;i++)
{
    cout << "-Enter the percentage of orange in drink number " << i + 1 << endl ;
    cin >> temp;
    if(temp < 0 || temp > 100)
    {
        cout << "-Invalid input, please enter values between 0 and 100." << endl;
        return 1;
    }
    drinks.push_back(temp);
}


    
for(int i=0;i<n;i++)
{
    sum += drinks[i];
}

percentage = sum / n;
cout << "-The  percentage of orange in the drinks is: " << percentage << "%" << endl;

return 0;
}
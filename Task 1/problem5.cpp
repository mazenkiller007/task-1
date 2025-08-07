#include <iostream>
#include <vector>
#include <cmath> // for abs
using namespace std;

int main() {
    int s, t; 
    int a, b; 
    int m, n; 

    
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    int appleCount = 0, orangeCount = 0;
    int dist;

    
    for (int i = 0; i < m; i++) 
    {
        cin >> dist;
        if (a + dist >= s && a + dist <= t) 
        {
            appleCount++;
        }
    }

    
    for (int i = 0; i < n; i++)
     {
        cin >> dist;
        if (b + dist >= s && b + dist <= t) 
        {
            orangeCount++;
        }
    }

    
    cout << appleCount << endl;
    cout << orangeCount << endl;

    return 0;
}

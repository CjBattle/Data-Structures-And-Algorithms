// Number of 1 Bits
// count Number Of Set Bits in An Integer
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int setBits(int N)
    {
        // Brian Kernighans Algorithm
        int count = 0;
        while (N)
        {
            N &= (N - 1); // checking set bits by subtracting 1(N) and doing BitWise And Operation
            count++;
        }
        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

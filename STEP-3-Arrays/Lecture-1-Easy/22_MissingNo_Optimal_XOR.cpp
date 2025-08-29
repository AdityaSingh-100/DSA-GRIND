#include <iostream>
#include <vector>
using namespace std;

int MissingNo(vector<int> &arr, int n)
{
    int XOR1 = 0, XOR2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        XOR2 = XOR2 ^ arr[i];
        XOR1 = XOR1 ^ (i + 1);
    }
    XOR1 = XOR1 ^ n;
    return (XOR1 ^ XOR2);
}

int main()

{
    vector<int> arr = {1, 2, 4, 5};
    int n = 5;
    int ans = MissingNo(arr, n);
    cout << ans;
    return 0;
}

// We can do this also
/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR1=0,XOR2 = 0;
        for(int i =0 ; i<nums.size();i++){
            XOR2= XOR2 ^ nums[i];
            XOR1 = XOR1 ^ (i+1);
        }
        XOR1 = XOR1^nums.size();
        return (XOR1 ^ XOR2);
    }
};

*/
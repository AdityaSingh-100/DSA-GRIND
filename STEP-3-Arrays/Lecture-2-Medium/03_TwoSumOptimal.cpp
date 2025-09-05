#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string twoSum(int n, vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return "YES";
        }
        else if (sum < target)
        {
            left++;
        }
        else if (sum > target)
        {
            right--;
        }
    }
    return "NO";
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = arr.size();
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for varient 1 : " << ans << endl;

    return 0;
}

/*NOTE -

Note: For variant 2, we can store the elements of the array along with its index in a new array. Then the rest of the code will be similar. And while returning, we need to return the stored indices instead of returning “YES”. But for this variant, the recommended approach is approach 2 i.e. hashing approach.

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// ---------------------- Variant 2 (Sorting + Two Pointers + Index) ----------------------
pair<int, int> twoSumVariant2(int n, vector<int> &arr, int target)
{
    // Step 1: Store {value, index}
    vector<pair<int, int>> nums;
    for (int i = 0; i < n; i++) {
        nums.push_back({arr[i], i});
    }

    // Step 2: Sort based on values
    sort(nums.begin(), nums.end());

    // Step 3: Two-pointer method
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = nums[left].first + nums[right].first;
        if (sum == target) {
            return {nums[left].second, nums[right].second}; // return original indices
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return {-1, -1}; // not found
}

// ---------------------- Recommended: Hashing Approach ----------------------
vector<int> twoSumHashing(vector<int> &arr, int n, int target)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;

        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i}; // indices directly
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

// ---------------------- Main ----------------------
int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = arr.size();
    int target = 14;

    // Variant 2
    pair<int, int> ans1 = twoSumVariant2(n, arr, target);
    cout << "Variant 2 (Sorting + Indices): " << ans1.first << " " << ans1.second << endl;

    // Hashing Approach (Recommended)
    vector<int> ans2 = twoSumHashing(arr, n, target);
    cout << "Hashing Approach (Recommended): " << ans2[0] << " " << ans2[1] << endl;

    return 0;
}



*/

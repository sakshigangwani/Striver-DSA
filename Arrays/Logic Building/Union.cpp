#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;

        for (int x : nums1) s.insert(x);
        for (int x : nums2) s.insert(x);

        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 2, 3, 5};
    vector<int> nums2 = {1, 2, 7};

    vector<int> result = sol.unionArray(nums1, nums2);

    cout << "Union: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

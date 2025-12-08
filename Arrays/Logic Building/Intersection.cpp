#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        
        vector<int> ans;
        
        for (int x : s1) {
            if (s2.count(x)) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 2, 3, 5};
    vector<int> nums2 = {1, 2, 7};

    vector<int> result = sol.intersectionArray(nums1, nums2);

    cout << "Intersection: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

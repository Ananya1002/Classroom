#include <bits/stdc++.h>
using namespace std;
bool Greater(vector<int> &nums1, int i, vector<int> &nums2, int j)
{
    while (i < nums1.size() && j < nums2.size() && nums1[i] == nums2[j])
    {
        ++i;
        ++j;
    }
    if (j == nums2.size())
        return true;
    if (i < nums1.size() && nums1[i] > nums2[j])
        return true;
    return false;
}
vector<int> biggestNumber(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> ans(k);
    for (int i = 0, j = 0; i < n; ++i)
    {
        while (n - i + j > k && j > 0 && ans[j - 1] < nums[i])
            j--;
        if (j < k)
            ans[j++] = nums[i];
    }
    return ans;
}
vector<int> merge(vector<int> &nums1, vector<int> &nums2, int k)
{
    vector<int> res(k, 0);
    for (int i = 0, j = 0, r = 0; r < k; ++r)
    {
        res[r] = Greater(nums1, i, nums2, j) ? nums1[i++] : nums2[j++];
    }
    return res;
}
void maxNumber(vector<int> &nums1, vector<int> &nums2, int k)
{
    int n = nums1.size();
    int m = nums2.size();
    vector<int> ans(k, -1);
    for (int i = max(0, k - m); i <= min(k, n); i++)
    {
        vector<int> a = biggestNumber(nums1, i);
        vector<int> b = biggestNumber(nums2, k - i);
        ans = max(ans, merge(a, b, k));
    }
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return;
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> nums1(n), nums2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }
    maxNumber(nums1, nums2, k);
    return 0;
}
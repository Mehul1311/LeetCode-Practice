class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<int> ans;
    int expected = 1;

    for(int num : nums) {
        if(num == expected) {
            expected++;
        }
        else if(num > expected) {
            while(expected < num) {
                ans.push_back(expected);
                expected++;
            }
            expected++;
        }
        // num < expected => duplicate, ignore
    }

    while(expected <= nums.size()) {
        ans.push_back(expected);
        expected++;
    }

    return ans;
}
};
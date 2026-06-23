class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int counter = 1;
        int prev = nums[n-1];

        int i =  n-2;
        while(i>=0){
            if(nums[i] != prev){
                counter++;
                prev = nums[i];
            }
            if(counter == 3){
                return nums[i];
            }
            i--;


        }
        return nums[n-1];
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        //creating a unordered set that will store unique elements only!!!
        unordered_set<int> seen;


        //itrating all the elements of Nums 
        for(int num : nums){
            if(seen.find(num) != seen.end()){
                return true; 
            }
            seen.insert(num);
        }
        return false;
    }

   
};
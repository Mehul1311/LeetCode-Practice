#include <vector>

class Solution {
public:
    int firstUniqueEven(std::vector<int>& nums) {
        int n = nums.size();
        
        // 1. Pehla loop: Ek-ek karke saare numbers ko check karo
        for (int i = 0; i < n; i++) {
            
            // Pehle check karo kya number EVEN hai?
            if (nums[i] % 2 == 0) {
                
                int count = 0; // Yeh count karega ki nums[i] kitni baar aaya hai
                
                // 2. Doosra loop: Pure array mein check karo ki yeh number kitni baar hai
                for (int j = 0; j < n; j++) {
                    if (nums[j] == nums[i]) {
                        count++;
                    }
                }
                
                // Agar count sirf 1 hai, matlab yeh unique hai aur even bhi!
                if (count == 1) {
                    return nums[i];
                }
            }
        }
        
        // Agar aisa koi number nahi mila toh -1 return karo
        return -1;
    }
};
// My solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum = 0;
        int max_sum = 0;
        int n = nums.size();
        for (int i = 0; i <= n -1; i++){
            if(i == 0){
                current_sum = nums[i];
                max_sum = current_sum;
            } else {
                current_sum = max(nums[i], current_sum + nums[i]);
                max_sum = max(max_sum, current_sum);
            }  
        }
        return max_sum;
    }
};

// The best solution 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max1 = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            max1 = max(sum, max1);
            if(sum < 0) { // If it's negative it better to reset sum
                sum = 0;
            }
        }
        return max1;
    }
};

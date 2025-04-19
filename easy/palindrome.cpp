// My solution
class Solution {
public:
    bool isPalindrome(int x) {
        bool palindrome = true;
        if(x < 0){
            return false;
        }
        vector<int> digits;
        int temp = x;
        while(temp > 0){ 
            digits.push_back(temp % 10); // division by 10 and it keeps the last number
            temp /= 10;
        }
  
        int i = 0;
        int j = digits.size() - 1;
        while(j > i){
            if(digits[j] != digits[i]){
                palindrome = false;
                break;
            }
            i++;
            j--;

        }
        return palindrome;
    }
};

// The best solution
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers 
        if (x == 0) return true; // 0 

        long original = x, reversed = 0;
        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;

            // Check for overflow before updating reversed
            if (reversed > INT_MAX || reversed < INT_MIN) return false;
        }

        return original == reversed;
    }
};

//Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) //Negative numbers cannot be palindrome
        return false;
        int original = x;
        long long reversed = 0; //Using long long to handle over

        while (x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        return original == reversed;
        }
        
    }
};

int main() {
    Solution solution;

}
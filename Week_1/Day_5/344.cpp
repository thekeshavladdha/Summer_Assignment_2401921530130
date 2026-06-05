class Solution {
public:
    void reverseString(vector<char>& s) {
        // If size of string is 1 then it is always a palindrome.
        if(s.size()==1) return;
        int i = 0, j=s.size()-1;
        while(i<j){
            // Using two pointer approach to swap the first and last characters of the string.
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};
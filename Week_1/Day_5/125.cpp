class Solution {
public:
    bool isPalindrome(string s) {
       int i=0,j=s.size()-1;
       // if size of string is 0 or 1 then it is always a palindrome. 
       if(j+1<=1) return true;

       while(i<j){
        // Using two pointer approach to  check if last and first characters are same.
        if(!isalnum(s[i])) i++; // if first character is not alphanumeric then move the pointer to next character.
        if(!isalnum(s[j])) j--; // if last character is not alphanumeric then move the pointer to previous character.

        // Convert the characters to lowercase and compare them. If they are not same then it is not a palindrome.
        if(tolower(s[i])!=tolower(s[j])) return false; 
        // Move the pointers to next and previous characters respectively.
        i++;
        j--;
       } 
       // If we have checked all characters and they are same then it is a palindrome.
       return true;
    }
};
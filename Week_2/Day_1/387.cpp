class Solution {
public:
    int firstUniqChar(string s) {
        // We can use a frequency array to count the occurrences of each character in the string. (Using array instead of hash map since we only have 26 lowercase letters)
        int freq[26]={};
        // We iterate through the string and update the frequency array accordingly.
        for(auto ch:s){
            freq[ch-'a']++;
        }
        // We iterate through the string again and return the index of the first character with a frequency of 1.
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1) return i;
        }
        return -1;
    }
};
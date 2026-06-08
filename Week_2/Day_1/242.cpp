class Solution {
public:
    bool isAnagram(string s, string t) {
        // If both strings have different lengths, they cannot be anagrams!
        if (s.length() != t.length()) return false;
        // We can use a frequency array to count the occurrences of each character in both strings.(Using array instead of hash map since we only have 26 lowercase letters)
        int freq[26] = {0};
        // We iterate through both strings simultaneously and update the frequency array accordingly. For each character in string s, we increment the corresponding frequency count, and for each character in string t, we decrement the corresponding frequency count.
        for (int i = 0 ; i<s.length(); i++){
            freq[s[i]-'a'] += 1;
            freq[t[i] - 'a'] -= 1;
        }
        // if any of the frequency counts are non-zero, then the strings are not anagrams
        for (auto n : freq){
            if (n != 0) return false;
        }
        return true;
    }
};
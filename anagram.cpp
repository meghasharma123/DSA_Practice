// main logic behind imroved logic:
// first check if size is same
// in unordered map count the available character for 1st string increase and for 2nd decrease.
// now if any string not 0 that means its not anagram.

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char,int>mp;

        for(char c:s) mp[c]++;
        for(char c:t) mp[c]--;

        for(auto& [ch, count]: mp){
            if(count != 0) return false;
        }

        return true;
    }
};
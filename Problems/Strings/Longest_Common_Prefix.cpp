// leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // If the array is empty, return empty string

        // Iterate through the characters of the first string
        for (int i = 0; i < strs[0].size(); ++i) {
            char c = strs[0][i]; // Get the character at position i of the first string
            // Check if this character is present in the same position in all other strings
            for (int j = 1; j < strs.size(); ++j) {
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return strs[0].substr(0, i); // Return the common prefix found so far
                }
            }
        }
        
        return strs[0]; // If all strings are identical, return any string
    }
};
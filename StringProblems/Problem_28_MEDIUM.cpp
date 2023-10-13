// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

// Problem 28: Find the Index of the First Occurence in a String - MEDIUM

// BCR: O(N) - Have to traverse through haystack at least once
// Alg thought process: Sliding window. Take length of needle and slide through haystack
//                      If substring matches that window then return start index.
// Runtime: O(N)

class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleLength = needle.length();

        //Check base cases
        if(needleLength > haystack.length()){
            return -1;
        }else if(needleLength == haystack.length()){
            if(haystack == needle){
                return 0;
            }else{
                return -1;
            }
        }

        //Using sliding window to check if haystack window matches substring
        for(int i = 0; i <= haystack.length() - needleLength; i++){
            string window = haystack.substr(i, needleLength);

            if(window == needle){
                return i;
            }
        }

        return -1; //Return -1 if no matching substring found
    }
};

// https://leetcode.com/problems/first-letter-to-appear-twice/

// 2351: First Letter to Appear Twice - EASY

// Return the first letter to appear twice
// ECR: O(N) Need to traverse the string at least once
// Alg thought process: Use a int array to track ascii values. Once array index value equals 2
//                      return that char value.

class Solution {
public:
    char repeatedCharacter(string s) {
        int numChars[128] = {}; //Initialize char array with zeroes

        for(int i = 0; i < s.length(); i++){
            int charToAscii = (int)s.at(i);  //Convert char to ascii value
            numChars[charToAscii]++;         //Increment char array by one at ascii index

            if(numChars[charToAscii] == 2){  //if char seen second time return char
                return s.at(i); 
            }
        }

        return NULL;
    }
};

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) 
{
    vector<int> mpp(256, -1);
    int left = 0;
    int right = 0;
    int n = s.size();
    int maxLen = 0;

    while (right < n) {
        if (mpp[s[right]] != -1) {
            left = max(mpp[s[right]] + 1, left);
        }

        mpp[s[right]] = right;

        maxLen = max(maxLen, right - left + 1);
        right++;
    }

    return maxLen;
}

int main() {
    string s = "abcdefgabchefui";
    cout << "The length of the longest substring without repeating characters is: " << lengthOfLongestSubstring(s) << endl;

  
    return 0;
}

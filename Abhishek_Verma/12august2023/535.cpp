#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

class Solution {
    int code = 0;
    unordered_map<string,string> res;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string str = "http://tinyurl.com/" + to_string(code);
        code++;
        res[str]=longUrl;
        
        return str;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return res[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

int main(){
    Solution s;
    cout<<s.encode("https://leetcode.com/problems/design-tinyurl")<<endl;
    cout<<s.decode("http://tinyurl.com/0")<<endl;
    return 0;
}
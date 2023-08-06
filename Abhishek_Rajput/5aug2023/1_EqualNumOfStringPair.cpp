#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>s;
        int c=0;
        for(string &i : words){
            sort(i.begin(),i.end());
            c+= !s.insert(i).second;
        }
        return c;

    }
};

int main(){
    Solution ob;
    vector<string>words={"cd","ac","dc","ca","zz"};
    cout<< ob.maximumNumberOfStringPairs(words) << endl;

    return 0;
}
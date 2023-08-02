#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    if(j-i-1 != distance[s[i]-'a'])
                        return false;
                }
                    
            }
        }
        return true;
    }
};


int main(){
    Solution ob;
    vector<int>distance={1,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    string s="abaccb";
    cout<<ob.checkDistances(s,distance)<<endl;

    return 0;
}


///     
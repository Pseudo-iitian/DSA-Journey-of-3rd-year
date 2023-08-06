# include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        int n=boxes.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(boxes[j]=='1')
                    sum=sum+abs(j-i);
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
int main(){
    Solution ob;
    string boxes ="0010110";
    vector<int>ans=ob.minOperations(boxes);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}


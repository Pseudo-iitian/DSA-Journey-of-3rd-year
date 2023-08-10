# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int c=0;
        vector<int>counter;
        vector<int>solution;
        for(int i=0;i<A.size();i++){
             c=0;
             counter.push_back(A[i]);
             counter.push_back(B[i]);
             sort(counter.begin(),counter.end());
             for(int j=1;j<counter.size();j++){
                 if(counter[j]==counter[j-1])
                    c++;
             }
             solution.push_back(c);

        }
        return solution;
    }
};
int main(){
    Solution s;
    vector<int>A={1,3,2,4};
    vector<int>B={3,1,2,4};
    vector<int>ans=s.findThePrefixCommonArray(A,B);
    for(auto i : ans)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}

//    https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/



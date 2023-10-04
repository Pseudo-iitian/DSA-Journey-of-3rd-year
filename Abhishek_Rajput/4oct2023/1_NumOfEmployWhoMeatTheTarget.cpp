#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for(int i=0;i<hours.size();i++)
            if(hours[i]>=target)
                count++;
        return count;
    }
};
int main(){
    Solution ob;
    vector<int>hours = {0,1,2,3,4};
    int target = 2;
    cout<<ob.numberOfEmployeesWhoMetTarget(hours,target)<<endl;
    return 0;
}
//  https://leetcode.com/problems/number-of-employees-who-met-the-target/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double sum=0;
        int sub=0;
        if(income==0)
            return sum;

        for(int i=0;i<brackets.size();i++){
            sum = sum + (min(brackets[i][0],income)-sub )*brackets[i][1]*1.0/100.0;
            if(brackets[i][0]>=income)
                break;
            sub=brackets[i][0];
        }
        return sum;
    }
};

int main(){
    Solution ob;
    vector<vector<int>>brackets={{3,50},{7,10},{12,25}};
    int income = 10;
    cout<<ob.calculateTax(brackets,income)<<endl;

    return 0;
}
//  https://leetcode.com/problems/calculate-amount-paid-in-taxes/description/
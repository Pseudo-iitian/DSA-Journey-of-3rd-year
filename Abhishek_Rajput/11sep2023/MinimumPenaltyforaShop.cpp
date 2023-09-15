#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bestClosingTime(string c) {
        int time=0;
        int customerLeft = 0;
        for(int i=0;i<c.length();i++){
            if(c[i]=='Y'){
                customerLeft ++;
                if(customerLeft > 0){
                    time = i+1;
                    customerLeft=0;
                }
            }
            else{
                customerLeft--;
            }               
        }
        return time;
    }
};
int main(){
    Solution ob;
    string customers = "YYNY";
    cout<<ob.bestClosingTime(customers)<<endl;
    return 0;
}
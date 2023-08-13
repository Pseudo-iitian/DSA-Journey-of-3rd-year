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
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
        int sum = 0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for(int i=0;i<n;++i){
            sum += abs(seats[i]-students[i]);
        }
        return sum;
    }
};

int main(){
    Solution st;
    vector<int> s = {3,1,5};
    vector<int> stu = {2,7,4};    
    cout<<st.minMovesToSeat(s,stu);
    return 0;
}
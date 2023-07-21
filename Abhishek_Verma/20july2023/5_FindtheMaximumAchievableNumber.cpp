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
    int theMaximumAchievableX(int num, int t) {
        return num + 2*t;
    }
};

int main(){
    Solution s;
    cout<<s.theMaximumAchievableX(4,1);
    return 0;
}
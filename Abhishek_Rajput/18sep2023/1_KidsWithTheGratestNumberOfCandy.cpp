#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size() , maxCandies = 0;
    for(int i = 0 ; i < n ; i++)
        if(candies[i] > maxCandies)
            maxCandies = candies[i];
    vector <bool> result(n);
    for(int i = 0 ; i < n ; i++)
        result[i] = (candies[i] + extraCandies >= maxCandies);
    return result;
    }
};
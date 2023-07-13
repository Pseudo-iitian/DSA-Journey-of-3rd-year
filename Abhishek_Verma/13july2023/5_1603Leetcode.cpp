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

// https://leetcode.com/problems/design-parking-system/submissions/993616093/
class ParkingSystem {
public:
    int big;
    int medium;
    int small;
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }

    bool addCar(int carType) {
        switch(carType){
            case 1:{
                if(big!=0){
                    big--;
                    return true;   
                }
                break;
            }
            case 2:{
                if(medium!=0){
                    medium--;
                    return true;
                }
                break;
            }
            case 3:{
                if(small!=0){
                    small--;
                    return true;
                }
                break;
            }
        }
        return false;
    }
};

int main(){
    ParkingSystem p(1,1,0);
    cout<<p.addCar(1);
    cout<<p.addCar(2);
    cout<<p.addCar(3);
    cout<<p.addCar(1);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> kow;
    for(int i = 0; i < nums.size(); i++){
        if(kow.find(nums[i]) != kow.end() and i - kow[nums[i]] <= k){
            return true;
        }
        kow[nums[i]] = i;
    }
    return false;
}
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> ans;
    int first;
    for(int i = 0; i < nums.size(); i++){
        first = i;
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[first] + nums[j] == target){
                ans = {first, j};
                break;
            }
        }
    }
    return ans;
}
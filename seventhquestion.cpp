#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int zeros = 0, index = 0, n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
            zeros++;
            continue;
        }
        nums[index++] = nums[i];
    }
    while(zeros--){
        nums[n - 1] = 0;
        n--;
    }
}
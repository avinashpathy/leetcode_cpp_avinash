// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>result;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])==mp.end())
                mp[nums[i]]=i;
            else{
                result.push_back(i);
                result.push_back(mp[target-nums[i]]);
                break;
            }
        }
        return result;
    }
};

/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>result;
        int i=0,j=nums.size()-1;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j]==target){
                result.push_back(m[nums[i]]);
                result.push_back(m[nums[j]]);
                break;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else
                j--;
        }
        return result;
    }
}; (50/57) test cases passed*/ 
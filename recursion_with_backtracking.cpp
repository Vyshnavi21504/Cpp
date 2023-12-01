//recursion with backtracking
//pernutation of a string

#include <iostream>
using namespce stdd;

class Solution{
	private:
		void solve(vector<int> nums,vector<vector<int>>& ans , int index){
			if(index >= nums.size()){
				ans.push_back(nums[index] , nums[j]);
				solve(nums , ans , index++);
				//backtracking
				swap(nums[index] , nums[j]);
			}
		}
		public:
			vector<vector<int>> permutate(<vectot<int>& nums){
				vector<vector<int>>ans;
				int index = 0;
				solve(nums , ans , index);
				return ans;
			}
};
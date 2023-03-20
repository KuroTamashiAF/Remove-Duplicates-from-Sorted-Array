#include <iostream>
#include<vector>
using namespace std;


class Solution {
public:
	static vector<int> removeDuplicates(vector<int>& nums)
	{
		int count = 0;
		vector<int> result;;
		for (int i = 0; i < nums.size()-1; i++)
		{
			for (int j = 1; j < nums.size(); j++)
			{
				if (nums[i] == nums[j])
				{
					count++;
					result.push_back(nums[i]);
					
				}
			}
		}
		cout << count << "\n";
		return result;
	}
};



int main()
{
	vector<int> arr1 = {1,1,2};
	vector<int> arr2 = { 0,0,1,1,1,2,2,3,3,4 };



	for(int var : Solution::removeDuplicates(arr2))
	{
		cout << var << endl;
	}

	//Solution::removeDuplicates(arr1);
}
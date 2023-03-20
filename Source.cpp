#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;


class Solution {
public:
	static int removeDuplicates(vector<int>& nums)
	{
		int count = 1;

		for (int i = 0; i < nums.size()-1; i++)
		{
			if (nums[i] != nums[i + 1])
			{
				nums[count] = nums[i + 1];
				count++;
			}
		}
		return count;
	}
};



int main()
{
	
	vector<int> arr2 = { 0,0,1,1,1,2,2,3,3,4 };
	cout << Solution::removeDuplicates(arr2);
	for (int var : arr2)
	{
		cout << var << " ";
	}

}
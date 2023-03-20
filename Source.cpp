#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;


class Solution {
public:
	static int removeDuplicates(vector<int>& nums)
	{
		vector<int> result;
		int count = 0;
		sort(result.begin(), result.end());

		for (int i = 0; i < nums.size()-1; i++)
		{
			for (int k = i + 1; k < nums.size(); k++)
			{
				if (nums[i] != nums[k])
				{
					result.push_back(nums[i]);
				}
				else
				{
					i++;
				}
			}
		}

		for (int var : result)
		{
			cout << var << endl;
		}



		





		return count;
	}
};



int main()
{
	vector<int> arr1 = {1,1,2};
	vector<int> arr2 = { 0,0,1,1,1,2,2,3,3,4 };
	//vector<int> arr3 = { 23,55,1,15,66,48,75,12,56,14};


	cout << Solution::removeDuplicates(arr1);
	/*for(int var : Solution::removeDuplicates(arr2))
	{
		cout << var << endl;
	}*/

	//Solution::removeDuplicates(arr1);
}
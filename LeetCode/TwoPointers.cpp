#include<vector>
using namespace std;

class TwoPointers {
public:
	static void TwoSum(vector<int>& nums, const int & sum) {
		int i = 0, j = nums.size() - 1;
		while (i < j) {
			if (nums[i] + nums[j] == sum) {
				i++;
				j--;
				//print
			}
			else if (nums[i] + nums[j] > sum)
				j--;
			else
				i++;
		}
	}
};
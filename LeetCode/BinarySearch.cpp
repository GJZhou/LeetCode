#include<vector>
using namespace std;

class BinarySearch {
public:
	static bool binary_search(vector<int>& nums , const int& target) {
		int left = 0, right = nums.size(), mid;
		while (left <= right) {
			mid = left + (right - left) / 2;
			if (nums[mid] == target)
				return true;
			else if (nums[mid] > target)
				right = mid - 1;
			else
				left = mid + 1;
		}
		return false;
	}
};
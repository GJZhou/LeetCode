#include<vector>
using namespace std;

class Sort {
public:
	static void BubbleSort(vector<int>& nums, const int& n) {
		for (int i = 1; i <= n - 1; i++) {
			for (int j = 0; i < n - i; i++) {
				if (nums[j] > nums[j + 1]) {
					int temp = nums[j];
					nums[j] = nums[j + 1];
					nums[j] = temp;
				}
			}
		}
	}

	static void SelectSort(vector<int>& nums, const int& n) {
		for (int i = 0; i < n - 1; i++) {
			int min = i;
			for (int j = i+1; j < n; j++) {
				if (nums[j] < nums[min])
					min = j;
			}
			if (min != i) {
				int temp = nums[i];
				nums[i] = nums[min];
				nums[min] = temp;
			}
		}
	}

	static void InsertSort(vector<int>& nums, const int& n) {
		for (int i = 1; i < n; i++) {
			int temp = nums[i] , j=i;
			while (temp < nums[j - 1] && j>0) {
				nums[j] = nums[j - 1];
				j--;
			}
			nums[j] = temp;
		}
	}

};
#include<vector>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(nullptr) {}
};

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

	static void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {//length(nums) = m+n , nums[m:m+n-1] = 0
		int i = m-1, j = n-1;
		while (i >= 0 && j >= 0) {
			if (nums1[i] < nums2[j]) {
				nums1[i + j + 1] = nums2[j];
				--j;
			}
			else {
				nums1[i + j + 1] = nums1[i];
				--i;
			}
		}
		while (j >= 0)
			nums1[j--] = nums2[j];
	}

	static ListNode *detectCycle(ListNode *head) {
		ListNode *fast = head, *slow = head;
		do{
			if (!fast || !fast->next)
				return nullptr;
			fast = fast->next->next;
			slow = slow->next;
		} while (fast != slow);
		fast = head;
		while (fast != slow) {
			fast = fast->next;
			slow = slow->next;
		}
		return fast;
	}
};
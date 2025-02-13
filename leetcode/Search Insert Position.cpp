#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int l, int h, int target)
{

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

int main()
{
    vector<int> nums = {10, 20, 30, 40, 50, 60};
    int sizeOfNums = nums.size() - 1;
    int res = binarySearch(nums, 0, sizeOfNums, 40);
    cout << res;
    return 0;
}
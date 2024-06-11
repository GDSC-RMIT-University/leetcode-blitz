int myBinarySearch(vector<int> &nums, int target)
{
    int left = 0, right = nums.size(), mid;

    while (left < right)
    {
        mid = (left + right) / 2;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }

    return left;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int firstIndex = myBinarySearch(nums, target), lastIndex;
    if (firstIndex == nums.size() || nums[firstIndex] != target)
        return {-1, -1};

    lastIndex = myBinarySearch(nums, target + 1) - 1;

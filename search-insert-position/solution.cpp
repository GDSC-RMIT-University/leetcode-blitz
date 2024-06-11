int searchInsert(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1, ind;

    while (left <= right)
    {
        ind = (left + right) / 2;
        if (nums[ind] == target)
            return ind;
        else if (nums[ind] < target)
            left = ind + 1;
        else
            right = ind - 1;
    }

    while (ind < nums.size() && nums[ind] < target)
        ind++;

    return ind;
}
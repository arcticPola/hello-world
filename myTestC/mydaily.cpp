#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;


/// 冒泡排序
///--------------------||
///---------------|||||||
void BubbleSort01(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false; // 是否交换过
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                isSwap = true;
            }
        }
        /// 若一轮都没有交换过
        if (isSwap == false)
        {
            return;
        }
    }
}

///-------------------||
///|||----------------
void BubbleSort02(vector<int>& nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1;i++)
    {
        bool isSwap = false; // 是否交换过
        for (int j = n - 1; j > i; j--)
        {
            if(nums[j] < nums[j-1])
            {
                swap(nums[j], nums[j - 1]);
                isSwap = true;
            }
        }
        if(isSwap == false)
        {
            return;
        }
    }
}

///||---------------------
///|||||------------------
void BubbleSort03(vector<int>& nums)
{
    int n = nums.size();
    for (int i = n - 1; i > 0;i--)
    {
        bool isSwap = false; // 是否交换过
        for (int j = n - 1; j > n - 1 - i; j--)
        {
            if(nums[j] < nums[j-1])
            {
                swap(nums[j], nums[j - 1]);
                isSwap = true;
            }
        }
        if(isSwap == false)
        {
            return;
        }
    }
}

///||-------------------------
///---------------------||||||
void BubbleSort04(vector<int>& nums)
{
    int n = nums.size();
    for (int i = n - 1; i > 0;i--)
    {
        bool isSwap = false; // 是否交换过
        for (int j = 0; j < i;j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j + 1]);
                isSwap = true;
            }
        }
        if(isSwap == false)
        {
            return;
        }
    }
}
//选择排序

int main()
{
    vector<int> vec = {33, 2, 55, 32, 34, 22, 59,11,55, 45, 242, 52};
    BubbleSort04(vec);
    for(auto&&x : vec)
    {
        cout << x << endl;
    }
    return 0;
}
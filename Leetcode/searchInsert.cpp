/*
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
如果目标值不存在于数组中，返回它将会被按顺序插入的位置。你可以
假设数组中无重复元素。
示例 1:
输入: [1,3,5,6], 5
输出: 2

示例 2:
输入: [1,3,5,6], 7
输出: 4

示例 3:
输入: [1,3,5,6], 0
输出: 0
*/
#include<stdio.h>
#include<stdlib.h>
int searchInsert(int* nums, int numsSize, int target);
int main(){
    int nums[6]={1,2,3,7,13,21};
    int target1=5;
    int target2=7;
    int ans1=searchInsert(nums,6,target1);
    int ans2=searchInsert(nums,6,target2);
    printf("ans1=%d\nans2=%d",ans1,ans2);
    system("pause");
    return 0;
}
int searchInsert_1(int* nums, int numsSize, int target){
    int i;
    int j;
    for(i=0;i<numsSize;i++){
        if(nums[i]==target){
            return i;
        }
    }
   if(nums[numsSize-1]!=target){
        for(j=0;j<numsSize;j++){
            if(target<nums[j]){
                return j;
            }
        }
        if(target>nums[numsSize]){
            return numsSize;
        }
    }
    return 0;
}
int searchInsert_2(int* nums, int numsSize, int target){
    int i;
    int j;
    for(i=0;i<numsSize;i++){
        if(nums[i]==target){
            return i;
        }
    }
     for(i=0;i<=numsSize-2;i++){
        if((target>nums[i])&&(target<nums[i+1])){
            return i+1;
        }
    }
    if(target>nums[numsSize-1]){
        return numsSize;
    }
    if(target<nums[0])
    {
        return 0;
    }
    return numsSize;
}
int searchInsert_3(int* nums, int numsSize, int target){
    int i;
    for(i=0;i<numsSize;i++){
        if(nums[i]>=target){
            return i;
        }
    }
    return numsSize;
}
int searchInsert_4(int* nums, int numsSize, int target){
    int left=0;
    int right=numsSize-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            left=mid+1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
    }
    return left;
}
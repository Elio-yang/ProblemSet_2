/*
给定一个整数数组 nums 和一个目标值 target，
请你在该数组中找出和为目标值的那 两个整数，
并返回他们的数组下标。
示例:
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
#include<stdio.h>
#include<stdlib.h>
int*twoSum(int*nums,int numsSize,int target);
int main(){
    int n;
    int target;
    scanf("%d\n",&n);
    int a[n]={0};
    scanf("%d\n",&target);
    for(int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
   int*ans=twoSum(a,n,target);
   int*p=ans;
   for(int i=0;i<2;i++){
       printf("%3d",*p+i);
   }
   system("pause");
   return 0;
}
 int* twoSum(int*nums,int numsSize,int target){
     int i,j;
     int*num_result;
     for(i=0;i<numsSize;i++){
         for(j=i+1;j<numsSize;j++){
             num_result=(int*)malloc(sizeof(int)*2);
             if(nums[i]+nums[j]==target){
                num_result[0]=i;
                num_result[1]=j;
                return num_result;
             }
             
         }
     }
    return 0;
 }

 //O(N^2)
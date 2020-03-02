package Leetcode;
import java.util.HashMap;
import java.util.Map;
/**
 * TwoSumHash
 */
public class TwoSumHash {

    public static void main(String[] args) {

        
    }
    public int[] twoSum(int[] nums,int target) {
    Map<Integer,Integer> map=new HashMap<>();
    for(int i=0;i<nums.length;i++){
        map.put(nums[i], i);
    }
    for(int i=0;i<nums.length;i++){
        int complement=target-nums[i];
        if(map.containsKey(complement) && map.get(complement)!=i ){
            return new int[]{i,map.get(complement)};
        }
    }
    throw new IllegalArgumentException("No two sum solution");
}

}

class Solution {
    public int missingNumber(int[] nums) {
        int idx=0,res=0,count=0;
        for(int i=0;i<=nums.length;i++)
        {
            count=0;
            for(int j=0;j<nums.length;j++)
            {
                if(nums[j]==idx)
                    count++;
            }
            if(count==0)
            {
                res=idx;
                break;
            }
            idx++;
        }
        return res;
    }
}
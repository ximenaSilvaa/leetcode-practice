class Solution(object):
    def moveZeroes(self, nums):
        left = 0
        for right in range(len(nums)):
            if nums[right] != 0:
                temp = nums[left]
                nums[left] = nums[right]
                nums[right] =  temp 
                left += 1

        """

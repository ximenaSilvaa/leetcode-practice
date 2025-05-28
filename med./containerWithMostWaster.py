#my solution
class Solution(object):
    def maxArea(self, height):
        right = len(height) - 1
        left = 0
        max_area = 0
        while(left <= right):
            minheight = min(height[right], height[left])
            width = right - left
            area = minheight * width
            max_area = max(area, max_area)


            if height[right] > height[left]:
                left += 1
            else:
                right -= 1
        return max_area
            

           
        
        """
        :type height: List[int]
        :rtype: int
        """
# best solution
class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        l = output = 0
        r = len(height) - 1
        m = max(height)
        while l < r:
            length = (r-l)
            if height[l] < height[r]:
                area = (length) * height[l]
                if area > output:
                    output = area
                l += 1
            else:
                area = (length) * height[r]
                if area > output:
                    output = area
                r -= 1
            if output >= m*(length):
                break

            
        return output

            
       

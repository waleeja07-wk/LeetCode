class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        s = set()
        unique = []
        for i in nums1:
            if i in nums2:
                s.add(i)
        
        for j in s:
            unique.append(j)
            
        return unique
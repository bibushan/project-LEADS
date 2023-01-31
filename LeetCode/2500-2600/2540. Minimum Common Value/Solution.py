# Binary Search method
# TC: O(n * logm)
# SC: O(1)

class Solution(object):
    def getCommon(self, nums1, nums2):
        m, n = len(nums1), len(nums2)
        for key in nums1:
            left, right = 0, m - 1
            while right >= left:
                mid = (left + right) // 2
                if nums2[mid] == key: return key
                elif nums2[mid] > key: right = mid - 1
                else: left = mid + 1
        return -1
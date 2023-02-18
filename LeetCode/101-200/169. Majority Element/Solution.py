# Boyer Moore Algorithm
# Time COmplexity: O(N)
# Space COmplexity: O(1)
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        ans, count = 0, 0
        for n in nums:
            if count == 0:
                ans = n
            count += (1 if ans == n else -1)
        return ans


# Time COmplexity: O(N)
# Space COmplexity: O(N)
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = {}
        ans, maxCount = 0, 0
        for n in nums:
            count[n] = 1 + count.get(n, 0)
            ans = n if count[n] > maxCount else ans
            maxCount = max(count[n], maxCount)
        return ans
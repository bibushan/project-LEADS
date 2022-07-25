class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        result = 0
        
        for i in range(32):
            bit = (n >> i) & 1
            result = result | (bit << (31-i))
        
        return result
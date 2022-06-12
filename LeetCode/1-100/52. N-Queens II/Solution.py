# Runtime: 46 ms, faster than 92.40% of Python3 online submissions for N-Queens II.
# Memory Usage: 13.9 MB, less than 39.44% of Python3 online submissions for N-Queens II.

class Solution:
    def totalNQueens(self, n: int) -> int:
        col = set()
        posDiagonal = set()
        negDiagonal = set()
        
        res = 0
        def backtrack(r):
            if r==n:
                nonlocal res
                res += 1
                return
            
            for c in range(n):
                if c in col or (r + c ) in posDiagonal or (r - c) in negDiagonal:
                    continue
                
                col.add(c)
                posDiagonal.add(r + c)
                negDiagonal.add(r - c)
                backtrack(r + 1)
                col.remove(c)
                posDiagonal.remove(r + c)
                negDiagonal.remove(r - c)
        backtrack(0)
        return res
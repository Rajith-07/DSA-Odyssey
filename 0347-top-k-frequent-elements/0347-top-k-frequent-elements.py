import heapq
from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        res = []
        heap = []

        freq = Counter(nums)
        # print(freq)

        for i in freq:
            heapq.heappush(heap, (-freq[i],i))
        
        for i in range(k):
            res.append(heapq.heappop(heap)[1])

        return res
        

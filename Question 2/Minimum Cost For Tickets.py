class Solution:
    def mincostTickets(self, days: List[int], costs: List[int]) -> int:
        costs, offset = dict(zip([1,7,30],costs)), days[0] - 1
        mcost = [0] * (days[-1] - days[0] + 2) #we start at the first day and stop at the last
        for i in range(1, len(mcost)):
            if (i + offset) not in days:
                mcost[i] = mcost[i-1]
                continue
            mcost[i] = min(mcost[max(0, i - j)] + costs[j] for j in costs)
        return mcost[-1]

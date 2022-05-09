import heapq

TC = int(input())
for tc in range(TC):
    heap = []
    N = int(input())
    for n in range(N):
        alcohol = input().split()
        heapq.heappush(heap,(-(int(alcohol[1])),alcohol[0]))
    print(heapq.heappop(heap)[1])
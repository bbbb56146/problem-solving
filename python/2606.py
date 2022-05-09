from collections import deque
ans = 0
#graph
graph = {}
total = int(input())
T = int(input())
for tc in range(T):
    connects = input().split()
    a = int(connects[0])
    b = int(connects[1])
    #add a, b to graph
    if a not in graph:
        graph[a] = [b]
    elif b not in graph[a]:
        graph[a].append(b)
    if b not in graph:
        graph[b] = [a]
    elif a not in graph[b]:
        graph[b].append(a)
#bfs
visited = []
queue = deque([1])

while queue:
    cur = queue.popleft()
    if cur not in visited:
        visited.append(cur)
        ans+=1
        if cur in graph:
            temp = list(set(graph[cur])-set(visited))
            queue+=temp
print(ans-1)
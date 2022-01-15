import copy
from collections import deque

ripes: int = 0
M,N, H = [int(i) for i in input().split()]
map = [[[0 for m in range(M)] for n in range(N)] for h in range(H)]
move = [(1,0,0),(-1,0,0),(0,1,0),(0,-1,0),(0,0,1),(0,0,-1)]
def bfs(queue, ripes):
    max_day = 0
    while queue:
        print(map)
        curx,cury,curz, cur_day = queue.popleft()
        if map[curx][cury][curz] >= cur_day+1 or map[curx][cury][curz] == 0 :
            map[curx][cury][curz] = cur_day+1
            ripes = ripes+1
            max_day = max(max_day,cur_day+1)
            # 주변 넣기
            for dx,dy,dz in move:
                x= curx+dx
                y= cury+dy
                z= curz+dz
                if (x >= 0 and x < H and y >= 0 and y < N and z >= 0 and z < M):
                    if(map[x][y][z] ==0):
                        queue.append((x,y,z,cur_day+1))
            print(queue)

    return max_day

queue = deque()
for h in range(H):
    for n in range(N):
        inputs = input().split()
        for m in range(M):
            map[h][n][m] = int(inputs[m])
            if map[h][n][m]!=0:
                ripes+=1
            if map[h][n][m] == 1:
                queue.append((h,n,m,0))
if ripes == N*M*H:
    print(0)
else:
    print(queue)
    max_day = bfs(queue,ripes)
    if ripes != N*M*H:
        print(-1)
    else:
        print(max_day)

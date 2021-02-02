import sys

n, m = map(int,sys.stdin.readline().split())
arr = list(map(int,sys.stdin.readline().split()))

#낙하거리. 7 4 2 7 0 6 0 7 이라고 가정하고 제일 위에
#있는 7짜리 블럭이 떨어질 때 그 밑에 7보다 크거나 같은
#블럭의 개수만큼 뺀 거리가 낙하 거리이다.
# 즉 아래에 있는 7, 7 블럭을 제외하고 나머지 거리가
#낙하 거리이다.
count=0
max_height = 0
for i in range(n):
    for j in range(i+1,n):
        if arr[i] <= arr[j]:
            count += 1
    height = m - i - count
    if max_height <= height: max_height = height
    
print(max_height)
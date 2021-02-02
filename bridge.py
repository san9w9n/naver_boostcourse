import sys

n = int(sys.stdin.readline())
dep = []
arr = []
for _ in range(n):
    dep.append(int(sys.stdin.readline()))
print("-------cross a bridge.--------")

sum=0
process=[]
while(len(dep)>0):
    #출발지에서 출발.
    process.append([dep[0],dep[1]])
    sum+=max(dep[0],dep[1])
    arr.append(dep.pop(0))
    arr.append(dep.pop(0))
    arr.sort()
    
    #도착지에서 출발(출발지에 아무도 없으면 진행하지 않음)
    if len(dep)>0:
        sum+=arr[0]
        process.append(arr[0])
        dep.append(arr.pop(0))

print(sum)
i=0
while i<len(process):
    if i%2==0:
       print("{} {}".format(process[i][0],process[i][1]))
    else:
        print(process[i])
    i+=1
#problem: Array of an intrgers nums and an integers ,
# return the indices of the two numbers such that they add up to target:

arr=list(map(int,input().split()))
indices=[]
target=int(input("enter target value:"))
for i in range(0,len(arr)):
    for j in range(i+1,len(arr)):
        if arr[i]+arr[j]==target:
            indices.append(i)
            indices.append(j)
print(indices)
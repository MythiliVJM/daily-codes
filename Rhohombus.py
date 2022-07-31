n=int(input())
for i in range(0,n):
    print(" "*i,end="")
    print("*"*n)
    
//reverse rhombus star
n=int(input())
for i in range(n+1,-1,-1):
    print(" "*i,end="")
    print("*"*n)

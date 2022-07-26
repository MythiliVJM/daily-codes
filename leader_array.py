List=list(map(int,input("enter elements:").split()))
new_list=[]
max=-1
for i in range(len(List)-1,-1,-1):
    if max<List[i]:
        max=List[i]
        new_list.append(max)
        
print(new_list)

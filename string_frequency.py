#  Write a program to print the highest frequency character in the given string. If one or more characters has the same frequency then print the smallest character within them.

# Sample Test case1:
# Input: Hello World
# Output: l

# Sample Test case2:
# Input: Maximum Occurrence
# Output: c


string=input()
new_dic={}
for i in string:
    if i in new_dic:
        new_dic[i]=new_dic[i]+1
    else:
        new_dic[i] = 1
result= max(new_dic, key = new_dic.get)

print(result)

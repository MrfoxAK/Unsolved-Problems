arr = [2,3,6]
n = 3

c=0

for i in arr:
    key = i
    for j in range(1,i):
        if i%j==0 and j in arr:
            print(j)
            c+=1
            break
     #    print(j)
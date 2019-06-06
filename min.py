list=[]
num=int(input("enter the elements in list:"))
for i in range(1,num+1):
    e=int(input("enter the elements:"))
    list.append(e)
print("samllest element is:",min(list))

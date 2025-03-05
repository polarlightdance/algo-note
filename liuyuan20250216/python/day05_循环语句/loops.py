#!/usr/bin/env python3

nums = 0

while (nums < 10) :
    print("the num is : ", nums)
    nums +=1
    
print("--------continue-------------")
i = 1
while i < 10 :
    i += 1
    if i % 2 > 0 :  # 非双数时跳过输出
        continue
    print(i)

print("--------break-------------")
j = 1
while 1 :
    print(j)
    j += 1
    if j > 10:
        break
'''
print("--------input-------------")    
var = 1
while var == 1:
    num = input("enter a number: ")
    print("you input number is: ",num)
'''

print("--------else-------------")  
k = 0
while k < 3 :
    print("hello!")
    k += 1
else :
    print("goodby!!")
    
'''
print("--------simple-------------") 
flag = 1
while (flag) : print("hello world!!")
'''

print("--------for-------------") 

letters = "python"
for char in letters :
    print("letter is :", char)

person = {"name" : "liuyuan", "age" : 26, "city" : "ankang"}
for key, value in person.items() :
    print(f"{key} : {value}") 
    
for i in range(10) :
    if i == 5 :
        break  # 当 i 等于 5 时退出循环
    if i % 2 == 0 :
        continue  # 跳过偶数  当 偶数 % 2 时 跳过此次循环进入下一次迭代。
    print(i)

print("--------qiantao-------------") 

for i in range(10) :
    for j in range(1, i + 1) :
        print(f"{j} * {i} = {j * i}", end = "\t")
    print()


i = 1
while i <= 5:  # 外层循环：控制行
    j = 1
    while j <= i:  # 内层循环：控制列
        print("*", end="")  # 打印星号
        j += 1
    print()  # 换行
    i += 1

for i in range(1, 6):  # 外层 for 循环：控制行
    j = 1
    while j <= i:  # 内层 while 循环：控制列
        print(j, end=" ")  # 打印数字
        j += 1
    print()  # 换行
    

for i in range(10) :
    if i == 1 :
        print(i)
        pass
    else :
        print(i)
#!/usr/bin/env python3

a = 10
b = 20

print("------add-------")
print(a + b)
print("------sub-------")
print(a - b)
print("------mul-------")
print(a * b)
print("------chu-------")
print(a / b)
print("------quYu-------")
print(a % b)
print("------mi-------")
print(a ** b)
print("------zhengChu-------")
print(a // b)
print(9 // 2)
print(-9 //2)


print("------比较运算符-------")
x = 1
y = 1

if x == y :
    print("x 等于 y")
else :
    print("x 不等于 y")

if x != y :
    print("x 不等于 y")
else :
    print("x 等于 y")

if x > y :
    print("x 大于 y")
else :
    print("x 不大于 y")

if x < y :
    print("x 小于 y")
else :
    print("x 不小于 y")

if x >= y :
    print("x 大于等于 y")
else :
    print("x 不大于等于 y")

if x <= y :
    print("x 小于等于 y")
else :
    print("x 不小于等于 y")

print("------赋值运算符-------")
i = 11
j = 20
k = 0

print("i = ", i, "j = ", j, "k = ", k)
k = i + j
print("k = i + j = ", k)

k += i
print("k += i = ", k) # k = k + i

k -= j
print("k -= j = ", k) # k = k - j

k *= i
print("k *= i", k) # k = k * i

k /= j
print("k /= j", k) # k = k /= j

k = 2
k %= i
print("k %= i", k) # k = k %= i

k **=j
print("k **= j", k) # k = k **= j

k //= i
print("k //= i", k) # k = k //= i

print("------位运算符-------")
n = 60
m = 13
v = 0
print("n binary is : ",bin(n)[2:])
print("m binary is : ",bin(m)[2:])

v = n & m
print("按位与后v = ", v)
'''
n : 0011 1100
m : 0000 1101
-------------
v : 0000 1100 12
'''

v = n | m
print("按位或后v = ", v)
print("v binary is : ",bin(v)[2:])
'''
n : 0011 1100
m : 0000 1101
-------------
v : 0011 1101   16 + 32 + 13 
'''

v = n ^ m
print("按位异或后v = ", v)
'''
n : 0011 1100
m : 0000 1101
-------------
v : 0011 0001 32 + 16 + 1
'''

v = ~n
print("按位取反后v = ", v)
'''
n : 0011 1100
-------------
v : 1100 0011 
    0011 1100  -(60 + 1)
'''

v = n << 2
print("左移2位后v = ", v)
'''
n : 0011 1100
-------------
v : 1111 0000 128 + 64 + 32 + 16
'''

v = n >> 2
print("右移2位后v = ", v)
'''
n : 0011 1100
-------------
v : 0000 1111 8 + 4 + 2 + 1
'''

print("------逻辑运算符-------")
e = 10
f = 20
print("布尔与：", e and f) # 20
print("布尔或：", e or f) #10
h = 0
print("布尔非", not e) # False
print("布尔非", not h) # True

print("------成员运算符-------")
o = 1
p = 20
list = [1, 2, 3, 4, 5]
if o in list :
    print("o 在 list 中")
else :
    print("o 不在 list 中")

if p not in list :
    print("p 不在 list 中")
else :
    print("p 在 list 中")

print("------身份运算符-------")
t = {1, 2, 3}
u = t
g= {1, 2, 3}
print("引用对象是否相同: ", t is u)
print("引用对象是否相同: ", t is g)

print("引用对象是否不相同: ", t is not u)
print("引用对象是否不相同: ", t is not g)
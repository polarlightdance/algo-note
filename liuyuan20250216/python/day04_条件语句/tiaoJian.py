#!/usr/bin/env python3

flag = False
name = 'python'

if name == 'python' :         # 判断变量是否为 python 
    flag = True               # 条件成立时设置标志为真
    print('i hate study!!!')  # 并输出信息
else :
    print(name)               # 条件不成立时输出变量名称


a = 5
if a == 2 : 
    print("111111")
elif a == 3 :
    print("222222")
elif a >= 6 : 
    print("333333")
elif a <= 0 :
    print("444444")
else :
    print("liuyuan is smart")

num1 = 9
if num1 > 0 and num1 <10 :
    print("---- and ----")
else :
    print("---- undefine ----")

num2 = 10
if num2 < 0 or num2 > num1 :
    print("---- or -----")
else :
    print("---- undefine ----")

val = 8
if (val >0 and val < 5) or (val >= 10 and val <= 20) :
    print("cool!!")
else :
    print("bad!!")

tage = 100
if tage == 100 : print("tage vale is 100")
print("liuyuan is very handsome")

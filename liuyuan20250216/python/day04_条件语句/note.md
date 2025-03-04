# Python 条件语句
 - Python条件语句是通过一条或多条语句的执行结果（True或者False）来决定执行的代码块。
 - Python程序语言指定任何非0和非空（null）值为true，0 或者 null为false。
 - Python 编程中 if 语句用于控制程序的执行，基本形式为：
```py
if 判断条件：
    执行语句……
else：
    执行语句……
```
 - 其中"判断条件"成立时（非零），则执行后面的语句，而执行内容可以多行，以缩进来区分表示同一范围。
 - else 为可选语句，当需要在条件不成立时执行内容则可以执行相关语句。

```py
if name == 'python' :         # 判断变量是否为 python 
    flag = True               # 条件成立时设置标志为真
    print('i hate study!!!')  # 并输出信息
else :
    print(name)               # 条件不成立时输出变量名称
```

 - if 语句的判断条件可以用>（大于）、<(小于)、==（等于）、>=（大于等于）、<=（小于等于）来表示其关系。
 - 当判断条件为多个值时，可以使用以下形式：
 
 ```py
'''
if 判断条件1:
    执行语句1……
elif 判断条件2:
    执行语句2……
elif 判断条件3:
    执行语句3……
else:
    执行语句4……
'''
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
 ```

 - 由于 python 并不支持 switch 语句，所以多个条件判断，只能用 elif 来实现，如果判断需要多个条件需同时判断时，可以使用 or （或），表示两个条件有一个成立时判断条件成功；使用 and （与）时，表示只有两个条件同时成立的情况下，判断条件才成功。
 ```py
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
 ```
 - 当if有多个条件时可使用括号来区分判断的先后顺序，括号中的判断优先执行，此外 and 和 or 的优先级低于>（大于）、<（小于）等判断符号，即大于和小于在没有括号的情况下会比与或要优先判断。

 - 简单的语句组
 也可以在同一行的位置上使用if条件判断语句，如下实例:
 ```py
tage = 100
if tage == 100 : print("tage vale is 100")
print("liuyuan is very handsome")
 ```
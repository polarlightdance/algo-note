# Python 循环语句
Python 提供了 for 循环和 while 循环（在 Python 中没有 do..while 循环）:

|  循环类型  |  描述  |
|:--------|:--------:|
|  while 循环  |  在给定的判断条件为 true 时执行循环体，否则退出循环体。  |
|  for 循环  |  重复执行语句  |
|  嵌套循环  |	你可以在while循环体中嵌套for循环  |

## 循环控制语句

循环控制语句可以更改语句执行的顺序。Python支持以下循环控制语句：

|  控制语句  |  描述  |
|:--------|:--------:|
|  break 语句  |  在语句块执行过程中终止循环，并且跳出整个循环  |
|  continue 语句  |  在语句块执行过程中终止当前循环，跳出该次循环，执行下一次循环  |
|  pass 语句  |  pass是空语句，是为了保持程序结构的完整性  |

## while()循环

Python 编程中 while 语句用于循环执行程序，即在某条件下，循环执行某段程序，以处理需要重复处理的相同任务。其基本形式为：
```py
while 判断条件(condition)：
    执行语句(statements)……
```
 - 执行语句可以是单个语句或语句块。判断条件可以是任何表达式，任何非零、或非空（null）的值均为true。
 - 当判断条件假 false 时，循环结束。

```py
nums = 0

while (nums < 10) :
    print("the num is : ", nums)
    nums +=1

```

 - while 语句时还有另外两个重要的命令 continue，break 来跳过循环，continue 用于跳过该次循环，break 则是用于退出循环，此外"判断条件"还可以是个常值，表示循环必定成立，具体用法如下：
 ```py
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
 ```
 - 循环使用 else 语句

 在 python 中，while … else 在循环条件为 false 时执行 else 语句块：
 ```py
 k = 0
while k < 3 :
    print("hello!")
    k += 1
else :
    print("goodby!!")
 ```
 - 简单语句组
 类似 if 语句的语法，如果你的 while 循环体中只有一条语句，你可以将该语句与while写在同一行中， 如下所示：
 ```py
flag = 1
while (flag) : print("hello world!!")
 ```

## for 循环语句

 - Python for循环可以遍历任何序列的项目，如一个列表或者一个字符串。

 - 语法：
```py
for 变量 in 可迭代对象:
    循环体
# 变量：每次循环时，变量会被赋值为可迭代对象中的当前元素。
# 可迭代对象：可以是列表、元组、字符串、字典、集合等。
# 循环体：每次循环执行的代码块。

# 遍历字符串
letters = "python"
for char in letters :
    print("letter is :", char)
# 遍历列表
fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
    print(fruit)
# 使用 range() 遍历数字范围
for i in range(5):  # 从 0 到 4
    print(i)
```
 - break and continue
```py
for i in range(10) :
    if i == 5 :
        break  # 当 i 等于 5 时退出循环
    if i % 2 == 0 :
        continue  # 跳过偶数  当 偶数 % 2 时 跳过此次循环进入下一次迭代。
    print(i)
```
 - 总结
    1. for 循环是 Python 中用于遍历可迭代对象的核心工具。
    2. 可以遍历列表、字符串、字典、集合等。
    3. 结合 range() 可以生成数字序列。
    4. 使用 break 和 continue 可以控制循环的执行。

## f"{}"
在 Python 中，f 是 格式化字符串字面量（Formatted String Literal） 的前缀，通常称为 f-string。它允许你在字符串中直接嵌入表达式（如变量、函数调用等），并用大括号 {} 包裹这些表达式。
 - f-string 的作用
    1. 简化字符串格式化：相比传统的 % 格式化或 str.format() 方法，f-string 更简洁、易读。
    2. 动态插入值：可以在字符串中直接嵌入变量或表达式。
 - 基本语法
 ```py
f"字符串内容 {表达式}"
# f 前缀表示这是一个 f-string。
# {} 中的表达式会被求值，并将结果插入到字符串中。
 ```

## 嵌套循环

Python 语言允许在一个循环体里面嵌入另一个循环。

 - for嵌套循环
    for 嵌套循环通常用于遍历多维数据结构（如二维列表）或生成组合。  
    示例：打印九九乘法表
```py
for i in range(1, 10):  # 外层循环：控制行
    for j in range(1, i + 1):  # 内层循环：控制列
        print(f"{j} * {i} = {i * j}", end="\t")  # 打印乘法表达式
    print()  # 换行
```
 - while 嵌套循环
    while 嵌套循环通常用于需要动态控制循环次数的场景。  
    示例：打印星号金字塔
```py
i = 1
while i <= 5:  # 外层循环：控制行
    j = 1
    while j <= i:  # 内层循环：控制列
        print("*", end="")  # 打印星号
        j += 1
    print()  # 换行
    i += 1
```
 - for 和 while 混合嵌套
    for 和 while 混合嵌套的示例，用于打印一个数字三角形：
```py
for i in range(1, 6):  # 外层 for 循环：控制行
    j = 1
    while j <= i:  # 内层 while 循环：控制列
        print(j, end=" ")  # 打印数字
        j += 1
    print()  # 换行
```
 - 总结：
    1. for 嵌套循环：适合遍历固定范围的序列或多维数据结构。
    2. while 嵌套循环：适合需要动态控制循环次数的场景。
    3. 嵌套循环可以混合使用，但要注意控制循环条件和避免死循环。

## Python 中的 break and continue
 - break 语句
    1. Python break语句，就像在C语言中，打破了最小封闭for或while循环。
    2. break语句用来终止循环语句，即循环条件没有False条件或者序列还没被完全递归完，也会停止执行循环语句。
    3. break语句用在while和for循环中。
    4. 如果您使用嵌套循环，break语句将停止执行最深层的循环，并开始执行下一行代码。

 - continue 语句
    1. Python continue 语句跳出本次循环，而break跳出整个循环。
    2. continue 语句用来告诉Python跳过当前循环的剩余语句，然后继续进行下一轮循环。
    3. continue语句用在while和for循环中。

## pass 语句
 - pass 的作用
    1. 占位符：在需要语法上完整但逻辑上不需要任何操作的地方使用。
    2. 保持代码结构：在编写代码时，可以用 pass 占位，避免语法错误。
 - 使用场景
 1. 在函数或类中占位
```py
def my_function():
    pass  # 暂时不实现函数体

class MyClass:
    pass  # 暂时不实现类体
# 创建类的实例（不会报错）
obj = MyClass()
```
 2. 在条件语句中占位
```py
if condition:
    pass  # 暂时不处理条件成立的情况
else:
    print("Condition is false")
```
 3. 在循环中占位
```py
 for i in range(10):
    if i % 2 == 0:
        pass  # 暂时不处理偶数
    else:
        print(i)
```
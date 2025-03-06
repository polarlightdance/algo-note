# Python3 函数基础
 - 函数是组织好的，可重复使用的，用来实现单一，或相关联功能的代码段。
 - 函数能提高应用的模块性，和代码的重复利用率。Python提供了许多内建函数，比如print()。但也可以自己创建函数，这被叫做用户自定义函数。

## 函数定义
 - 语法：使用 def 关键字定义，无需声明返回类型和参数类型。
 - 动态类型：参数和返回值类型在运行时确定。
 - 示例：
```py
def add(a, b):
    return a + b
```

## 参数传递
 - 按对象引用传递：Python 中所有数据都是对象，函数参数传递的是对象的引用。
 - 默认参数：允许为参数指定默认值。
```py
def greet(name = "liuyuan"):
    print(f"dashuaige is {name}")
```

## 可变参数
 - *args：接收任意数量的位置参数（元组）。
 - **kwargs：接收任意数量的关键字参数（字典）。
```py
def print_args(*args, **kwargs):
    print("位置参数:", args)
    print("关键字参数:", kwargs)
```

## 返回值
多返回值：通过元组实现多个返回值。
```py
def swap(a, b):
    return b, a
x, y = swap(3, 5)
```

## 作用域
 - LEGB 规则：变量查找顺序为 Local → Enclosing → Global → Built-in。
 - global 和 nonlocal：修改全局或嵌套作用域的变量。
```py
def counter():
    count = 0
    def increment():
        nonlocal count
        count += 1
        return count
    return increment
```

## 函数是一等公民
函数作为参数和返回值：
```py
def apply(func, x, y):
    return func(x, y)
result = apply(lambda a, b: a * b, 3, 4)  # 输出 12
```
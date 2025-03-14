# Python 面向对象

面向对象编程（Object-Oriented Programming, OOP）是一种以 对象 为核心的编程思想。在 Python 中，一切皆对象（比如整数、字符串、函数等）。以下是面向对象的四大核心概念：
    - 类(Class): 用来描述具有相同的属性和方法的对象的集合。它定义了该集合中每个对象所共有的属性和方法。对象是类的实例。
    - 类变量：类变量在整个实例化的对象中是公用的。类变量定义在类中且在函数体之外。类变量通常不作为实例变量使用。
    - 数据成员：类变量或者实例变量, 用于处理类及其实例对象的相关的数据。
    - 方法重写：如果从父类继承的方法不能满足子类的需求，可以对其进行改写，这个过程叫方法的覆盖（override），也称为方法的重写。
    - 局部变量：定义在方法中的变量，只作用于当前实例的类。
    - 实例变量：在类的声明中，属性是用变量来表示的。这种变量就称为实例变量，是在类声明的内部但是在类的其他成员方法之外声明的。
    - 继承：即一个派生类（derived class）继承基类（base class）的字段和方法。继承也允许把一个派生类的对象作为一个基类对象对待。例如，有这样一个设计：一个Dog类型的对象派生自Animal类，这是模拟"是一个（is-a）"关系（例图，Dog是一个Animal）。
    - 实例化：创建一个类的实例，类的具体对象。
    - 方法：类中定义的函数。
    - 对象：通过类定义的数据结构实例。对象包括两个数据成员（类变量和实例变量）和方法。

## 定义类和创建对象
 - 示例 1：最简单的类和对象
```py
 # 定义一个 Dog 类
class Dog:
    pass  # 空类

# 创建对象
my_dog = Dog()
print(my_dog)  # 输出: <__main__.Dog object at 0x...>
```

## 类的属性和方法
 - 示例 2：定义属性和方法
```py
class person :
    # 类变量，它的值将在这个类的所有实例之间共享
    num = 0
    # 构造函数
    # self 参数：表示对象自身，必须作为方法的第一个参数。
    def __init__(self, name,  age, address):
        self.name = name
        self.age = age
        self.address = address
        person.num += 1

    # 实例方法
    def information(self) :
        print(f"{self.name} 真帅！")

# 创建对象并调用方法
my_person = person("刘源", 26, "China")
print(my_person.age)
my_person.information()
```

## 使用以下函数的方式来访问属性：
 - getattr(obj, name[, default]) : 访问对象的属性。
 - hasattr(obj,name) : 检查是否存在一个属性。
 - setattr(obj,name,value) : 设置一个属性。如果属性不存在，会创建一个新属性。
 - delattr(obj, name) : 删除属性。
```py
hasattr(person, 'age')    # 如果存在 'age' 属性返回 True。
getattr(person, 'age')    # 返回 'age' 属性的值
setattr(person, 'age', 8) # 添加属性 'age' 值为 8
delattr(person, 'age')    # 删除属性 'age'
```

## 继承

 - 示例 3：子类继承父类
```py
class person :
    num = 0
    def __init__(self, name,  age, address):
        self.name = name
        self.age = age
        self.address = address
        person.num += 1
    
    def information(self) :
        print(f"{self.name} 真帅！")

# son 继承自 person
class son(person) :
    # 重写父类的方法
    def information(self):
        print("你没我帅！")

# 创建子类对象
my_son = son("吴彦祖", 10086, "China")
print(my_son.age)
my_son.information()
```

## 封装
通过将属性设为 私有（Private） 来实现封装。Python 中使用 _ 或 __ 前缀表示私有。
 - 示例 4：私有属性和方法

```py
class BankAccount:
    def __init__(self, balance):
        self.__balance = balance  # 私有属性

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount

    def get_balance(self):
        return self.__balance

# 创建对象
account = BankAccount(1000)
account.deposit(500)
print(account.get_balance())  # 输出: 1500

# 无法直接访问私有属性
print(account.__balance)  # 报错: AttributeError
```

## 多态
 - 示例 5：不同对象调用同一方法的不同实现

```py
class Dog(Animal):
    def speak(self):
        print(f"{self.name} 汪汪叫！")

class Duck(Animal):
    def speak(self):
        print(f"{self.name} 嘎嘎叫！")

# 多态示例
animals = [Dog("小黑"), Duck("小黄")]
for animal in animals:
    animal.speak()
# 输出:
# 小黑 汪汪叫！
# 小黄 嘎嘎叫！
```

## 类属性和静态方法

 - 示例 6：类属性和静态方法
```py
class Student:
    school = "第一中学"  # 类属性（所有对象共享）

    def __init__(self, name):
        self.name = name

    @staticmethod
    def show_school():
        print(f"学校名称: {Student.school}")

# 访问类属性
print(Student.school)  # 输出: 第一中学

# 调用静态方法
Student.show_school()  # 输出: 学校名称: 第一中学
```

## 魔术方法（Magic Methods）
Python 中的魔术方法以双下划线 __ 开头和结尾，用于定义对象的特殊行为。
 - 示例 7：\__str__ 和 \__len__
```py
class Book:
    def __init__(self, title, pages):
        self.title = title
        self.pages = pages

    def __str__(self):
        return f"《{self.title}》（{self.pages}页）"

    def __len__(self):
        return self.pages

my_book = Book("Python入门", 300)
print(my_book)  # 输出: 《Python入门》（300页）
print(len(my_book))  # 输出: 300
```
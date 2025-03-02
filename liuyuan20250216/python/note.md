# Linux中运行python
1. 赋予脚本执行权限（仅需一次）：
    ` chmod +x hello.py `

2. 在脚本首行添加解释器路径:
    ` #!/usr/bin/env python3 `

3. 直接运行：
    ` ./文件名 `

# Python 标识符
1. 在 Python 里，标识符由字母、数字、下划线组成。

2. 在 Python 中，所有标识符可以包括英文、数字以及下划线(_)，但不能以数字开头。

3. Python 中的标识符是区分大小写的。

   - 以下划线开头的标识符是有特殊意义的。以单下划线开头 _foo 的代表不能直接访问的类属性，需通过类提供的接口进行访问，不能用 from xxx import * 而导入。

   - 以双下划线开头的__foo 代表类的私有成员，以双下划线开头和结尾的__foo__代表 Python 里特殊方法专用的标识，如__init__()代表类的构造函数。

4. Python 可以同一行显示多条语句，方法是用分号" ; "分开，如
    ```py
    print("hello, world!");print("hello, python!")
    ```

5. python2识别中文需要添加：
    ```py
    # -*- coding: UTF-8 -*-
    ```

# 行和缩进
1. 学习 Python 与其他语言最大的区别就是，Python 的代码块不使用大括号 {} 来控制类，函数以及其他逻辑判断。python 最具特色的就是用缩进来写模块。

2. 缩进的空白数量是可变的，但是所有代码块语句必须包含相同的缩进空白数量，这个必须严格执行。

  - 以下实例缩进为四个空格:
    ```py
    if True:
        print("hello")
    else:
        print("python")
    ```

# 多行语句
1. Python语句中一般以新行作为语句的结束符。

2. 我们可以使用斜杠（ \）将一行的语句分为多行显示，如下所示：
    ```py
    total = item_one + \
            item_two + \
            item_three
    ```
3. 语句中包含 [], {} 或 () 括号就不需要使用多行连接符。如下实例：
    ```py
    days = ['Monday', 'Tuesday', 'Wednesday',
            'Thursday', 'Friday']
    ```
# Python 引号
1. Python 可以使用引号( ' )、双引号( " )、三引号( ''' 或 """ ) 来表示字符串，引号的开始与结束必须是相同类型的。

2. 其中三引号可以由多行组成，编写多行文本的快捷语法，常用于文档字符串，在文件的特定地点，被当做注释。
    ```py
    word = 'word'
    sentence = "这是一个句子。"
    paragraph = """这是一个段落。
    包含了多个语句"""
    ```

# Python注释
1. python中单行注释采用 # 开头。
    ```py
    #!/usr/bin/python

    # 第一个注释
    print ("Hello, Python!")  # 第二个注释
    ```

2. 注释可以在语句或表达式行末：
    ` name = "Runoob" # 这里的内容是一个注释 `

3. python 中多行注释使用三个单引号 ''' 或三个双引号 """。
    ```py
    #!/usr/bin/python

    '''
    这是多行注释，使用单引号。
    这是多行注释，使用单引号。
    这是多行注释，使用单引号。
    '''
    """
    这是多行注释，使用双引号。
    这是多行注释，使用双引号。
    这是多行注释，使用双引号。
    """
    ```

# Python空行
1. 函数之间或类的方法之间用空行分隔，表示一段新的代码的开始。类和函数入口之间也用一行空行分隔，以突出函数入口的开始。

2. 空行与代码缩进不同，空行并不是Python语法的一部分。书写时不插入空行，Python解释器运行也不会出错。但是空行的作用在于分隔两段不同功能或含义的代码，便于日后代码的维护或重构。

**记住：空行也是程序代码的一部分。**

# 等待用户输入
1. 下面的程序执行后就会等待用户输入，按回车键后就会退出：
    ```py
    #!/usr/bin/python

    input("按下 enter 键退出，其他任意键显示...\n")
    ```
# print 输出
1. print 默认输出是换行的，如果要实现不换行需要在变量末尾加上逗号","。
    ```py
    #!/usr/bin/python

    x="a"
    y="b"
    # 换行输出
    print (x)
    print (y)

    print ('---------')
    # 不换行输出
    print (x,end=" ")
    print (y)

    # 不换行输出
    print (x,y)
    ```
2. Python 3.x
    - 在Python 3.x中，我们可以在 print() 函数中添加 end="" 参数，这样就可以实现不换行效果。

    - 在Python3中，print函数的参数 end 默认值为 "\n"，即end="\n"，表示换行，给 end 赋值为空, 即end=""，就不会换行了，例如：
        ```py
        print('这是字符串，', end="")
        print('这里的字符串不会另起一行')
        ```
    - end="" 可以设置一些特色符号或字符串：
        ```py
        print('12345', end=" ")  # 设置空格
        print('6789')

        print('admin', end="@")  # 设置符号
        print('liyuan.com')

        print('China ', end="liuyuan ")  # 设置字符串
        print('zhenshuai')
        ```

# 变量类型
 - 变量是存储在内存中的值，这就意味着在创建变量时会在内存中开辟一个空间。

 - 基于变量的数据类型，解释器会分配指定内存，并决定什么数据可以被存储在内存中。

 - 因此，变量可以指定不同的数据类型，这些变量可以存储整数，小数或字符。

## 变量赋值
 - Python 中的变量赋值不需要类型声明。

 - 每个变量在内存中创建，都包括变量的标识，名称和数据这些信息。

 - 每个变量在使用前都必须赋值，变量赋值以后该变量才会被创建。

 - 等号 = 用来给变量赋值。
  - 等号 = 运算符左边是一个变量名，等号 = 运算符右边是存储在变量中的值。例如：
  ```py
  #!/usr/bin/python
    age = 26 # 赋值整型变量
    born = 1998.07 # 浮点型
    name = "liuyuan" # 字符串
    
    print counter
    print miles
    print name
  ```
- 多个变量赋值
 - Python允许你同时为多个变量赋值。例如：
    ```py
    a = b = c = 1
    ```
 - 可以为多个对象指定多个变量。例如：
    ```py
    a, b, c = 1, 2, "yuan"
    ```

## 标准数据类型
 - 在内存中存储的数据可以有多种类型。  
   例如，一个人的年龄可以用数字来存储，他的名字可以用字符来存储。  

 - Python 定义了一些标准类型，用于存储各种类型的数据。  
   Python有五个标准的数据类型：  
    1. Numbers（数字）:Python 支持整数（int）、浮点数（float）、复数（complex）等数字类型。  
    ```py
    x = 10
    print(type(x), x)
    ```
    2. String（字符串）:字符串是由单引号或双引号括起来的字符序列  
    - python的字串列表有2种取值顺序:  
     - 从左到右索引默认0开始的，最大范围是字符串长度少1
     - 从右到左索引默认-1开始的，最大范围是字符串开头 
    ```py
    s1 = "liuyuan"
    s2 = "zhenshuai"
    print(type(s1))

    # [头下标:尾下标] 获取的子字符串包含头下标的字符，但不包含尾下标的字符。
    print(s1[1:3])

    # 输出从第三个字符开始的字符串
    print(s1[2:])

    print(s1, s2)

    # 输出字符串两次
    print(s1 * 2)

    # 输出连接的字符串
    print("China" + s1)

    ```
    3. List（列表）:列表是一个有序的可变序列，可以包含不同类型的元素。
     - 左到右索引默认 0 开始，从右到左索引默认 -1 开始，下标可以为空表示取到头或尾。
     - 加号 + 是列表连接运算符，星号 * 是重复操作。

    ```py
    my_list = [1998, 7, 23, "liuyuan", 2025, "zhenshuai"]
    print(type(my_list))
    print(my_list)
    # 打印组合的列表
    print("打印组合的列表: ", my_list + your_list)
    # 输出列表两次
    print("输出列表两次: ", my_list * 2)
    # 输出从第三个开始至列表末尾的所有元素
    print("输出从第三个开始至列表末尾的所有元素: ", my_list[2 :])
    # 输出列表的第一个元素
    print("输出列表的第一个元素: ", my_list[0])
    # 输出第二个至第三个元素 
    print("输出第二个至第三个元素: ", my_list[1 :3])
    ```

    4. Tuple（元组）:元组是一个有序的不可变序列(List)，通常用于存储不可修改的数据。  
    ```py
    my_tuple = [1998, 7, 23, "liuyuan", 2025, "zhenshuai"]
    print(type(my_tuple))
    print(my_tuple)
    # 输出元组的第一个元素
    print("first data is: ",my_tuple[0])
    # 输出第二个至第四个（不包含）的元素 
    print("2 to 4 data is: ", my_tuple[1:3])
    # 输出从第三个开始至列表末尾的所有元素
    print("3 to end data is: ", my_tuple[2:])
    # 输出元组两次
    print("data * 2 data is: ",my_tuple * 2)
    # 打印组合的元组
    print("my_tuple + your_tuple data is: ", my_tuple + your_tuple)
    # 元组不可修改
    # my_tuple[0] = 100  # 这行会报错
    ```

    5. Dictionary（字典）:字典是一个无序的键值对集合，键必须是唯一的。
     - 是除列表以外python之中最灵活的内置数据结构类型。列表是有序的对象集合，字典是无序的对象集合。两者之间的区别在于：字典当中的元素是通过键来存取的，而不是通过偏移存取
     - 字典用"{ }"标识。字典由索引(key)和它对应的值value组成。
      
    ```py
    my_dict = {
        "name" : "liuyuan",
        'age' : '26',
        "is_student" : False,
        "courses" : ["Chinese", "English"]
    }
    print(type(my_dict))
    print(my_dict)
    # 访问字典元素
    print(my_dict["name"])
    # 修改字典元素
    my_dict["age"] = 18
    print(my_dict["age"])
    # 添加新键值对
    my_dict["grade"] = "S"
    print(my_dict)
    ```  
    
 - type()
   1. type() 是 Python 的内置函数，用于获取对象的类型。

   2. 它返回一个类型对象，表示参数所属的类。

   3. type() 常用于调试、类型检查和动态类型判断。

## Python数据类型转换
 - 以下几个内置的函数可以执行数据类型之间的转换。这些函数返回一个新的对象，表示转换的值。
 
|  函数  |  描述  |
|:--------|:--------:|
|  int(x) | 将x转换为一个整数  |
|  long(x) | 将x转换为一个长整数  |
|  float(x)  | 将x转换到一个浮点数 |
|  complex(real)  |  创建一个复数  |
|  str(x)  |  将对象 x 转换为字符串  |
|  repr(x)  |  将对象 x 转换为表达式字符串  |
|  eval(str)  |  用来计算在字符串中的有效Python表达式,并返回一个对象  |
|  tuple(s)  |  将序列 s 转换为一个元组  |
|  list(s)  |  将序列 s 转换为一个列表  |
|  set(s)  |  转换为可变集合  |
|  dict(d)  |  创建一个字典。d 必须是一个序列 (key,value)元组。  |
|  frozenset(s)  |  转换为不可变集合  |
|  chr(x)  |  将一个整数转换为一个字符  |
|  bin(x)  |  将一个整数转换为二进制字符串  |
|  ord(x)  |  将一个字符转换为它的整数值  |
|  hex(x)  |  将一个整数转换为一个十六进制字符串  |
|  oct(x)  |  将一个整数转换为一个八进制字符串  |


```py
print("-------int----------")
str1 = "123456"
str_int = int(str1)
print(str_int)

print("-------float----------")
str2 = "123.456"
str_float = float(str2)
print(str_float)

print("-------str----------")
num = 123456
num_str = str(num)
print(num_str)

print("-------complex----------")
str_complex = complex(1, 2)
print(str_complex)
print(str_complex.real)  # 输出实部: 1.0
print(str_complex.imag)  # 输出虚部: 2.0

print("-------eval----------")
str = "123"
str_eval = eval(str)
print(str_eval)

print("-------repr----------")
str3 = "123"
str_repr = repr(str3)
print(str_repr)

print("-------tuple----------")
str4 = "123"
str_tuple = tuple(str4)
print(str_tuple)

print("-------List----------")
str5 = "123"
str_list = list(str5)
print(str_list)

print("-------set----------")
str6 = "123"
str_set = set(str6)
print(str_set)

print("-------dict----------")
str7 = "name=liuyuan,age=26"
# split(",") 方法将字符串按逗号 , 分割成一个列表。结果：["name=Alice", "age=25"]。
# for pair in str7.split(",")这是一个生成器表达式，遍历 str7.split(",") 的结果
#pair.split("=")对每个 pair（例如 "name=liuyuan"），使用 split("=") 方法将其按等号 = 分割成一个列表
str_dict = dict(pair.split("=") for pair in str7.split(","))
print(str_dict)

print("-------frozenset----------")
str8 = "123"
str_frozenset = frozenset(str8)
print(str_frozenset)

print("-------chr----------")
str9 = 97
str_chr = chr(str9)
print(str_chr)

print("-------ord----------")
str10 = "a"
str_ord = ord(str10)
print(str_ord)

print("-------hex----------")
str11 = 10
str_hex = hex(str11)
print(str_hex)

print("-------oct----------")
str12 = 10
str_oct = oct(str12)
print(str_oct)

print("-------bin----------")
str13 = 10
str_bin = bin(str13)
print(str_bin)

```
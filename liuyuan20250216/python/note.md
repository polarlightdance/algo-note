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
    
    print age
    print born
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
# 运算符

## 算术运算符
```py
a = 10
b = 20
```
|  运算符  |  描述  |  实例  |
|:--------|:--------:|:--------:|
|  + | 加--两个对象相加  | a + b 输出结果 30  |
|  - | 减--得到负数或是一个数减去另一个数  | a - b 输出结果 -10  |
|  * | 乘--两个数相乘或是返回一个被重复若干次的字符串  | a * b 输出结果 200  |
|  / | 除--x除以y  | b / a 输出结果 2 |
|  % | 取模--返回除法的余数  | b % a 输出结果 0  |
|  ** | 幂--返回x的y次幂  | a**b 为10的20次方,输出结果 100000000000000000000 |
|  // | 取整除--返回商的整数部分（向下取整）  |  9//2 输出结果 4(向下取整);  -9//2 输出结果-5(取整除向负无穷方向取整+1)  |

## 比较运算符

|  运算符  |  描述  |  实例  |
|:--------|:--------:|:--------:|
|  ==  |  等于--比较对象是否相等  |  (a == b) 返回 False  |
|  !=  |  不等于--比较两个对象是否不相等  |  (a != b) 返回 True  |
|  <>  |  不等于--比较两个对象是否不相等。python3 已废弃  |  (a <> b) 返回 True。这个运算符类似 !=  |
|  >  |  大于--返回x是否大于y  |  (a > b) 返回 False  |
|  <  |  小于--返回x是否小于y。所有比较运算符返回1表示真，返回0表示假。这分别与特殊的变量 True 和 False 等价  |  (a < b) 返回 True  |
|  >=  |  大于等于 - 返回x是否大于等于y  |  (a >= b) 返回 False  |
|  <=  |  小于等于 - 返回x是否小于等于y  |  (a <= b) 返回 True  |

## 赋值运算符

|  运算符  |  描述  |  实例  |
|:--------|:--------:|:--------:|
|  =  |  简单的赋值运算符  |  c = a + b 将 a + b 的运算结果赋值为 c  |
|  +=  |  加法赋值运算符  |  c += a 等效于 c = c + a  |
|  -=  |  减法赋值运算符  |  c -= a 等效于 c = c - a  |
|  *=  |  乘法赋值运算符  |  c *= a 等效于 c = c * a  |
|  /=  |  除法赋值运算符  |  c /= a 等效于 c = c / a  |
|  %=  |  取模赋值运算符  |  c %= a 等效于 c = c % a  |
|  **=  |  幂赋值运算符  |  c **= a 等效于 c = c ** a  |
|  //=  |  取整除赋值运算符  |  c //= a 等效于 c = c // a  |

## 位运算符

bin() 是 Python 的内置函数，用于将整数转换为二进制字符串。返回的字符串以 0b 开头，表示这是一个二进制数。去掉 0b 前缀bin(num)[2:]
```py
num = 10
binary_str = bin(num)
print(binary_str)  # 输出: 0b1010
binary_str = bin(num)[2:]
print(binary_str)  # 输出: 1010
```

|  运算符  |  描述  |  实例  |
|:--------|:--------:|:--------:|
|  &  |  按位与运算符:参与运算的两个值,如果两个相应位都为1,则该位的结果为1,否则为0  |  (a & b) 输出结果 12,二进制解释:0000 1100  |
|  \|  |  按位或运算符:只要对应的二个二进位有一个为1时，结果位就为1  |  (a \| b) 输出结果 61 ,二进制解释： 0011 1101  |
|  ^  |  按位异或运算符:当两对应的二进位相异时,结果为1  |  (a ^ b) 输出结果 49,二进制解释:0011 0001  |
|  ~  |  按位取反运算符:将二进制表示中的每一位取反,0 变为1,1变为0。~x类似于-x-1  |  (~a )输出结果-61 ,二进制解释:1100 0011 (以补码形式表示)，在一个有符号二进制数的补码形式.  |
|  <<  |  左移动运算符：运算数的各二进位全部左移若干位,由<<右边的数字指定了移动的位数,高位丢弃,低位补0  |  a << 2输出结果240,二进制解释:1111 0000  |
|  >>  |  右移动运算符:把">>"左边的运算数的各二进位全部右移若干位,>>右边的数字指定了移动的位数  |  a >> 2输出结果15,二进制解释:0000 1111  |

```py
a = 60
b = 13
'''
a = 0011 1100
b = 0000 1101
-----------------
a&b = 0000 1100
a|b = 0011 1101
a^b = 0011 0001
~a  = 1100 0011
'''
```

## 逻辑运算符

Python语言支持逻辑运算符，以下假设变量 a 为 10, b为 20:

|  运算符  |  逻辑表达式  |  描述  |  实例  |
|:--------|:--------:|:--------:|:--------:|
|  and  |  x and y  |  布尔"与"--如果 x 为 False,x and y 返回 False,否则它返回 y 的计算值  |  (a and b) 返回 20  |
|  or  |  x or y  |  布尔"或"--如果 x 是非 0,它返回 x 的计算值，否则它返回 y 的计算值  |  (a or b) 返回 10  |
|  not  |  not x  |  布尔"非"--如果 x 为 True,返回 False.如果 x 为 False,它返回 True  |  not(a and b) 返回 False  |

1. and运算符行为
    - and 运算符会从左到右依次评估操作数。
    - 如果所有操作数都为真，则返回最后一个操作数。
    - 如果任何一个操作数为假，则返回第一个为假的操作数。
    ```py
    a = 10
    b = 20
    result = a and b
    print(result)  # 输出: 20
    '''
    a = 10 是一个非零整数，在布尔上下文中被视为 True。
    b = 20 也是一个非零整数，在布尔上下文中被视为 True。
    因为 a 和 b 都为真，所以 and 返回最后一个操作数 b，即 20。
    '''
    ```
2. or运算符行为
    - or 运算符会从左到右依次评估操作数。
    - 如果任何一个操作数为真，则返回第一个为真的操作数。
    - 如果所有操作数都为假，则返回最后一个操作数。
    ```py
    a = 10
    b = 20
    result = a or b
    print(result)  # 输出: 10
    '''
    a = 10 为真，b = 20 也为真。

    or 返回第一个为真的操作数 a，即 10。
    '''
    # 第一个操作数为假，第二个为真
    a = 0
    b = 20
    result = a or b
    print(result)  # 输出: 20

    # 所有操作数为假
    a = 0
    b = ""
    result = a or b
    print(result)  # 输出: ""
    ```
3. not运算符行为
    - not 是一个逻辑非运算符，用于对一个布尔值取反。
    - 如果操作数为真，not 返回 False。
    - 如果操作数为假，not 返回 True。
    ```py
    a = 10
    result = not a
    print(result)  # 输出: False
    #a = 10 为真，not a 返回 False

    # 操作数为假
    a = 0
    result = not a
    print(result)  # 输出: True

    # 操作数为空字符串
    a = ""
    result = not a
    print(result)  # 输出: True
    ```
*** and 和 or 返回的是操作数的值，而不是布尔值。not 返回的是布尔值（True 或 False）。 ***

## 成员运算符

Python还支持成员运算符，测试实例中包含了一系列的成员，包括字符串，列表或元组  

|  运算符  |  描述  |  实例  |
|:--------|:--------:|:--------:|
|  in  |  如果在指定的序列中找到值返回 True，否则返回 False  |  x 在 y 序列中 , 如果 x 在 y 序列中返回 True  |
|  not in  |  如果在指定的序列中没有找到值返回 True，否则返回 False  |  x 不在 y 序列中 , 如果 x 不在 y 序列中返回 True  |

## 身份运算符
身份运算符用于比较两个对象的存储单元  

|  运算符  |  描述  |  实例  |
|:--------|:--------:|:--------:|
|  is  |  is 是判断两个标识符是不是引用自一个对象  |  x is y,类似 id(x) == id(y),如果引用的是同一个对象则返回 True,否则返回 False  |
|  is not  |  is not 是判断两个标识符是不是引用自不同对象  |  x is not y,类似 id(a) != id(b).如果引用的不是同一个对象则返回结果 True,否则返回 False  |
 1. is 运算符行为规则
    - 如果两个变量的 id() 相同（即引用同一个对象），则 is 返回 True。
    - 否则，返回 False。
    ```py
    a = [1, 2, 3]
    b = a  # b 和 a 引用同一个对象
    print(a is b)  # 输出: True

    c = [1, 2, 3]  # c 是一个新对象
    print(a is c)  # 输出: False
    ```
 2. is not 运算符行为规则
    - 如果两个变量的 id() 不同（即引用不同的对象），则 is not 返回 True。
    - 否则，返回 False。
    ```py
    a = [1, 2, 3]
    b = a  # b 和 a 引用同一个对象
    print(a is not b)  # 输出: False

    c = [1, 2, 3]  # c 是一个新对象
    print(a is not c)  # 输出: True
    ```
 3. is 和 == 的区别
    - is 比较的是对象的内存地址（即 id()）。
    - == 比较的是对象的值。
    ```py
    a = [1, 2, 3]
    b = [1, 2, 3]

    print(a == b)  # 输出: True（值相同）
    print(a is b)  # 输出: False（内存地址不同）
    ```
 4. 使用场景
    - 检查变量是否为 None
    ```py
    x = None
    print(x is None)  # 输出: True
    ```
    - 检查变量是否引用同一个对象
    ```py
    a = [1, 2, 3]
    b = a
    print(a is b)  # 输出: True
    ```
    - 避免意外修改共享对象
    ```py
    a = [1, 2, 3]
    b = a  # b 和 a 引用同一个对象
    b.append(4)
    print(a)  # 输出: [1, 2, 3, 4]（a 也被修改）
    ```
    *** 注意事项 ***
    1. 对于小整数（通常在 -5 到 256 之间）和短字符串，Python 会缓存这些对象，因此它们的 id() 可能相同。
    2. 不要用 is 来比较值是否相等，应该使用 ==。  

 5. id()函数
    - 意义
        1. id()是一个内置函数,用于返回对象的唯一标识符(identity).这个标识符是一个整数,通常对应于对象在内存中的地址
        2. id()函数的主要作用是帮助我们了解对象在内存中的存储位置。

    - id() 函数的作用
        1. 返回对象的唯一标识符（内存地址）
        2. 这个标识符在对象的生命周期内是唯一的
        3. 如果两个对象的 id() 相同，则它们是同一个对象（即指向同一块内存）

        ```py
        a = 10
        print(id(a))  # id(a) 返回变量 a 所引用的对象的内存地址

        a = 10
        b = 10
        print(id(a))  # 输出: 140736123456789
        print(id(b))  # 输出: 140736123456789
        print(id(a) == id(b))  # 输出: True

        a = [1, 2, 3]
        b = [1, 2, 3]
        print(id(a))  # 输出: 140736123456789 (具体值取决于运行环境)
        print(id(b))  # 输出: 140736123456790 (具体值取决于运行环境)
        print(id(a) == id(b))  # 输出: False
        ```
    - id() 的应用场景
        1. 检查对象是否相同
            ```py
            a = [1, 2, 3]
            b = a  # b 和 a 引用同一个对象
            print(id(a) == id(b))  # 输出: True
            ```
        2. 调试内存问题  
            通过 id() 可以检查对象是否被意外修改或重复创建。
        3. 理解 Python 的对象模型  
            id() 可以帮助理解 Python 中对象的引用和内存管理机制。

    *** 注意事项 ***
    1. id() 返回的值是唯一的，但在不同的运行环境中可能不同。
    2. 对于小整数和短字符串，Python 会缓存这些对象，因此它们的 id() 可能相同。
    3. id() 的值通常是对象的内存地址，但具体实现取决于 Python 解释器（如 CPython、PyPy 等）。

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

# 日期和时间
Python 程序能用很多方式处理日期和时间，转换日期格式是一个常见的功能。

## 核心模块和类

Python 中处理日期和时间的主要模块是 datetime，包含以下核心类：
 - datetime：处理日期和时间（年、月、日、时、分、秒、微秒）。
 - date：仅处理日期（年、月、日）。
 - time：仅处理时间（时、分、秒、微秒）。
 - timedelta：表示时间间隔（如天、秒等）。

## 获取当前日期和时间

1. 获取当前日期和时间
```py
from datetime import datetime

now = datetime.now()  # 获取当前日期和时间
print("当前时间:", now)  # 输出: 2023-10-23 14:30:45.123456
```
2. 获取当前日期
```py
from datetime import date

today = date.today()  # 获取当前日期
print("当前日期:", today)  # 输出: 2023-10-23
```

## 格式化日期和时间
使用 strftime(format) 将日期对象格式化为字符串。
 - 常用格式代码

|  代码  |  含义  |  示例  |
|:--------|:--------:|--------:|
|  %Y  |  四位年份  |	2023  |
|  %m  |  两位月份  |  10  |
|  %d  |  两位日期  |  23  |
|  %H  |  24小时制小时  |  14  |
|  %M  |  分钟  |  30  |
|  %S  |  秒  |  45  |
|  %A  |  星期全名  |  Monday  |
|  %B  |  月份全名  |  October  |

 - 示例代码
```py
formatted = now.strftime("%Y-%m-%d %H:%M:%S")
print("格式化时间:", formatted)  # 输出: 2023-10-23 14:30:45

weekday = now.strftime("%A")
print("今天是:", weekday)  # 输出: Monday
```

## 字符串解析为日期对象
使用 strptime(date_string, format) 将字符串解析为 datetime 对象。
```py
date_str = "2023-10-23 14:30:45"
parsed_date = datetime.strptime(date_str, "%Y-%m-%d %H:%M:%S")
print("解析后的日期:", parsed_date)  # 输出: 2023-10-23 14:30:45
```

## 时间差计算（timedelta）
timedelta 表示时间间隔，支持与 datetime 对象进行加减运算。
 - 计算未来或过去的日期
```py
from datetime import timedelta

# 当前时间
now = datetime.now()

# 加 7 天
future_date = now + timedelta(days=7)
print("7 天后的日期:", future_date)

# 减 3 小时
past_time = now - timedelta(hours=3)
print("3 小时前的时间:", past_time)
```

 - 计算两个日期的差值
```py
date1 = datetime(2023, 10, 1)
date2 = datetime(2023, 10, 23)
delta = date2 - date1
print("间隔天数:", delta.days)  # 输出: 22
```

## time 模块的基础操作
time 模块提供与系统时间相关的功能（如时间戳）。
 - 获取当前时间戳
```py
import time

timestamp = time.time()  # 自 1970-01-01 00:00:00 UTC 的秒数
print("当前时间戳:", timestamp)  # 输出: 1698067845.123456

```
 - 时间戳与日期对象的转换
```py
# 时间戳转日期对象
timestamp = 1698067845
date_from_timestamp = datetime.fromtimestamp(timestamp)
print("时间戳对应日期:", date_from_timestamp)  # 输出: 2023-10-23 14:30:45

# 日期对象转时间戳
timestamp = datetime.now().timestamp()
print("当前时间戳:", timestamp)

```
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

# Python 模块
Python 模块(Module)，是一个 Python 文件，以 .py 结尾，包含了 Python 对象定义和Python语句。

模块让你能够有逻辑地组织你的 Python 代码段。

把相关的代码分配到一个模块里能让你的代码更好用，更易懂。

模块能定义函数，类和变量，模块里也能包含可执行的代码。

## import 语句
### 模块的引入

模块定义好后，我们可以使用 import 语句来引入模块，语法如下：
```py
import module1[, module2[,... moduleN]]
```

比如要引用模块 math，就可以在文件最开始的地方用 import math 来引入。在调用 math 模块中的函数时，必须这样引用：
```py
模块名.函数名
```

当解释器遇到 import 语句，如果模块在当前的搜索路径就会被导入。

搜索路径是一个解释器会先进行搜索的所有目录的列表。如想要导入模块 add.py，需要把命令放在脚本的顶端：
```py
#!/usr/bin/python 3
# -*- coding: UTF-8 -*-
 
# 导入模块
import add
# 现在可以调用模块里包含的函数了
add.print_func("Runoob")
```
一个模块只会被导入一次，不管你执行了多少次import。这样可以防止导入模块被一遍又一遍地执行。

### from…import 语句
Python 的 from 语句让你从模块中导入一个指定的部分到当前命名空间中。语法如下：
```py
from modname import name1[, name2[, ... nameN]]
```
例如，要导入模块 fib 的 fibonacci 函数，使用如下语句：
```py
from fib import fibonacci
```
这个声明不会把整个 fib 模块导入到当前的命名空间中，它只会将 fib 里的 fibonacci 单个引入到执行这个声明的模块的全局符号表。

### from…import* 语句
把一个模块的所有内容全都导入到当前的命名空间也是可行的，只需使用如下声明：
```py
from modname import *
```
这提供了一个简单的方法来导入一个模块中的所有项目。然而这种声明不该被过多地使用。

例如我们想一次性引入 math 模块中所有的东西，语句如下：
```py
from math import *
```

###  给模块起别名
如果模块名较长，可以使用 as 关键字给模块起一个别名。
```py
# main.py

import mymodule as mm

# 使用别名调用函数
print(mm.greet("Charlie"))  # 输出: Hello, Charlie!
```

### 模块的 __name__ 属性
每个模块都有一个__name__属性，当模块被直接运行时__name__的值为__main__；当模块被导入时__name__的值为模块的名字。
```py
# mymodule.py

def greet(name):
    return f"Hello, {name}!"

if __name__ == "__main__":
    print(greet("World"))  # 当直接运行 mymodule.py 时输出: Hello, World!
```

## 搜索路径
当你导入一个模块，Python 解析器对模块位置的搜索顺序是：

 - 当前目录
 - 如果不在当前目录，Python 则搜索在 shell 变量 PYTHONPATH 下的每个目录。
 - 如果都找不到，Python会察看默认路径。UNIX下，默认路径一般为/usr/local/lib/python/。  

模块搜索路径存储在 system 模块的 sys.path 变量中。变量里包含当前目录，PYTHONPATH和由安装过程决定的默认目录。

## PYTHONPATH 变量
PYTHONPATH 是一个环境变量，用于指定 Python 在导入模块时的搜索路径。当你在 Python 中导入一个模块时，Python 会按照一定的顺序查找模块文件，而 PYTHONPATH 就是其中一部分。
 - PYTHONPATH 的作用
    PYTHONPATH 的作用是告诉 Python 解释器在哪些目录中查找模块。默认情况下，Python 会查找以下位置：
    1. 当前目录：运行 Python 脚本的目录。
    2. PYTHONPATH 指定的目录：通过环境变量 PYTHONPATH 设置的目录。
    3. 标准库目录：Python 安装路径中的标准库目录（如 /usr/lib/python3.x）。

    通过设置 PYTHONPATH，你可以将自定义的目录添加到模块搜索路径中，从而让 Python 能够找到你定义的模块或包。

 - PYTHONPATH 的格式
 PYTHONPATH 是一个由多个目录路径组成的列表，路径之间用冒号（:）分隔（在 Windows 系统中用分号 ; 分隔）。
```py
 export PYTHONPATH=/path/to/dir1:/path/to/dir2
```
 - 如何查看当前的模块搜索路径
 在 Python 中，可以通过 sys.path 查看当前的模块搜索路径。sys.path 是一个列表，包含了 Python 解释器查找模块的所有目录。
 ```py
import sys
print(sys.path)
# 输出：
[
    '',  # 当前目录
    '/path/to/dir1',  # PYTHONPATH 中的目录
    '/path/to/dir2',
    '/usr/lib/python3.8',  # 标准库目录
    ...
]
 ```
-  如何设置 PYTHONPATH
 方法 1：临时设置（仅在当前终端会话中有效）

 在终端中使用 export 命令（Linux/macOS）或 set 命令（Windows）设置 PYTHONPATH。

 Linux/macOS：
```py
export PYTHONPATH=/path/to/dir1:/path/to/dir2
```
 Windows：
```py
set PYTHONPATH=C:\path\to\dir1;C:\path\to\dir2
```
 方法 2：永久设置（对所有终端会话有效）

 将 PYTHONPATH 添加到系统的环境变量中。

 Linux/macOS：
 将以下内容添加到 ~/.bashrc 或 ~/.zshrc 文件中：
```py
export PYTHONPATH=/path/to/dir1:/path/to/dir2
```
 Windows：

 右键点击“此电脑” -> “属性” -> “高级系统设置” -> “环境变量”。

 在“系统变量”或“用户变量”中，新建一个变量名为 PYTHONPATH，值为你的目录路径（多个路径用分号 ; 分隔）。

 - PYTHONPATH 的使用场景
 场景 1：导入自定义模块 

 假设你有一个自定义模块 /home/user/my_modules/mymodule.py，你可以通过设置 PYTHONPATH 让 Python 找到它。

 设置 PYTHONPATH：
```py
export PYTHONPATH=/home/user/my_modules
```
 导入模块：
```py
import mymodule
mymodule.my_function()
```
 场景 2：导入项目中的子模块

 假设你的项目结构如下：
```py
 project/
├── main.py
└── mypackage/
    ├── __init__.py
    └── mymodule.py
```
 如果 main.py 需要导入 mypackage.mymodule，但 project 目录不在 PYTHONPATH 中，你可以设置 PYTHONPATH 为 project 的父目录。

 设置 PYTHONPATH：
```py
export PYTHONPATH=/path/to/project
```
 导入模块：
```py
from mypackage import mymodule
mymodule.my_function()
```
 - PYTHONPATH 的注意事项
 1. 优先级
    - PYTHONPATH 中的目录会优先于标准库目录被搜索。
    - 如果 PYTHONPATH 中的目录与标准库目录有同名模块，PYTHONPATH 中的模块会被优先加载。

 2. 避免冲突
    - 如果 PYTHONPATH 中包含多个目录，且这些目录中有同名模块，可能会导致意外的行为。

 3. 动态修改 sys.path
    - 虽然可以通过 sys.path.append() 动态添加路径，但这种方式只对当前脚本有效，不会影响其他脚本。

## 命名空间和作用域
变量是拥有匹配对象的名字（标识符）。命名空间是一个包含了变量名称们（键）和它们各自相应的对象们（值）的字典。

一个 Python 表达式可以访问局部命名空间和全局命名空间里的变量。如果一个局部变量和一个全局变量重名，则局部变量会覆盖全局变量。

每个函数都有自己的命名空间。类的方法的作用域规则和通常函数的一样。

Python 会智能地猜测一个变量是局部的还是全局的，它假设任何在函数内赋值的变量都是局部的。

因此，如果要给函数内的全局变量赋值，必须使用 global 语句。

global VarName 的表达式会告诉 Python， VarName 是一个全局变量，这样 Python 就不会在局部命名空间里寻找这个变量了。

例如，我们在全局命名空间里定义一个变量 Money。我们再在函数内给变量 Money 赋值，然后 Python 会假定 Money 是一个局部变量。然而，我们并没有在访问前声明一个局部变量 Money，结果就是会出现一个 UnboundLocalError 的错误。取消 global 语句前的注释符就能解决这个问题。
```py
#!/usr/bin/env python3

Money = 8000
def addMoney() :
    global Money
    Money = Money + 1
    return Money

print(Money)
addMoney()
print(Money)
```

## dir()函数
dir() 函数一个排好序的字符串列表，内容是一个模块里定义过的名字。

返回的列表容纳了在一个模块里定义的所有模块，变量和函数。如下一个简单的实例：
```py
#!/usr/bin/python
# -*- coding: UTF-8 -*-
 
# 导入内置math模块
import math
 
content = dir(math)
 
print content;
```

## globals() 和 locals() 函数
根据调用地方的不同，globals() 和 locals() 函数可被用来返回全局和局部命名空间里的名字。

如果在函数内部调用 locals()，返回的是所有能在该函数里访问的命名。

如果在函数内部调用 globals()，返回的是所有在该函数里能访问的全局名字。

两个函数的返回类型都是字典。所以名字们能用 keys() 函数摘取。

- globals() 函数
 globals() 返回一个字典，表示当前模块的全局命名空间。全局命名空间包含了在模块级别定义的所有变量、函数、类等。
 - 示例 1：查看全局命名空间:
```py
x = 10
y = "Hello"

def my_function():
    pass

# 查看全局命名空间
print(globals())

# 输出
{
    '__name__': '__main__',
    '__doc__': None,
    '__package__': None,
    '__loader__': <_frozen_importlib_external.SourceFileLoader object at 0x7f8b8c0b4d60>,
    '__spec__': None,
    '__annotations__': {},
    '__builtins__': <module 'builtins' (built-in)>,
    '__file__': 'example.py',
    '__cached__': None,
    'x': 10,
    'y': 'Hello',
    'my_function': <function my_function at 0x7f8b8c0b4d60>
}
```
globals() 返回的字典包含了当前模块的所有全局变量和内置属性（如 __name__、__file__ 等）。

你可以通过 globals() 动态访问或修改全局变量。

 - 示例 2：动态修改全局变量
```py
x = 10

# 动态修改全局变量
globals()['x'] = 20

print(x)  # 输出: 20
```
 - locals() 函数
 locals() 返回一个字典，表示当前局部命名空间。局部命名空间包含了在当前作用域（如函数、方法或代码块）中定义的变量。
  - 示例 1：查看局部命名空间
```py
def my_function():
    a = 1
    b = "Python"
    print(locals())  # 查看局部命名空间
my_function()
# 输出
{'a': 1, 'b': 'Python'}
  ```

  - 示例 2：在全局作用域中使用 locals()
```py
x = 10
y = "Hello"

print(locals())  # 在全局作用域中，locals() 和 globals() 相同
```

## reload() 函数
当一个模块被导入到一个脚本，模块顶层部分的代码只会被执行一次。

因此，如果你想重新执行模块里顶层部分的代码，可以用 reload() 函数。该函数会重新导入之前导入过的模块。语法如下：
```py
reload(module_name)
```
在这里，module_name要直接放模块的名字，而不是一个字符串形式。比如想重载 hello 模块，如下：
```py
reload(hello)
```

## Python中的包
包是一个分层次的文件目录结构，它定义了一个由模块及子包，和子包下的子包等组成的 Python 的应用环境。

简单来说，包就是文件夹，但该文件夹下必须存在 \__init__.py 文件, 该文件的内容可以为空 \__init__.py 用于标识当前文件夹是一个包。

当项目变大时，你可能需要将模块组织到包中。包是一个包含 \__init__.py 文件的目录，\__init__.py 文件可以为空，也可以包含包的初始化代码。

示例：创建一个包  mypackage目录下有 \__init__.py mymodule.py anothermodule.py三个文件
```py
mypackage/
    __init__.py
    mymodule.py
    anothermodule.py
```
示例：在包中导入模块 在mypackage同级目录下创建main.py文件
```py
# main.py

from mypackage import mymodule

print(mymodule.greet("Eve"))  # 输出: Hello, Eve!
```

# Python 文件I/O
文件 I/O（输入/输出）是 Python 中处理文件读写操作的核心功能。Python 提供了简单而强大的文件操作接口，可以轻松地读取和写入文件。

## 文件操作的基本步骤
 - 打开文件：使用 open() 函数打开文件。
 - 读取或写入文件：使用文件对象的方法（如 read()、write()）进行读写操作。
 - 关闭文件：使用 close() 方法关闭文件，释放资源。

## 打开文件
使用 open() 函数打开文件，语法如下：
```py
file = open(filename, mode)
```
 - filename：文件名（包括路径）。
 - mode：文件打开模式（如 'r' 表示只读，'w' 表示写入等）。

常见的文件模式

|  模式  |  描述  |
|:--------|:--------:|
|  'r'  |  只读模式（默认）。如果文件不存在，会抛出 FileNotFoundError。  |
|  'w'  |  写入模式。如果文件存在，会覆盖文件内容；如果文件不存在，会创建新文件。  |
|  'a'  |  追加模式。如果文件存在，在文件末尾追加内容；如果文件不存在，会创建新文件。  |
|  'x'  |  独占创建模式。如果文件已存在，会抛出 FileExistsError。  |
|  'b'  |  二进制模式（如 'rb' 或 'wb'）。  |
|  't'  |  文本模式（默认）。  |
|  '+'  |  读写模式（如 'r+' 或 'w+'）。  |

## 读取文件

 - 示例 1：读取整个文件内容

```py
# 打开文件
file = open("example.txt", "r")

# 读取文件内容
content = file.read()
print(content)

# 关闭文件
file.close()
```

 - 示例 2：逐行读取文件

```py
# 打开文件
file = open("example.txt", "r")

# 逐行读取文件
for line in file:
    print(line.strip())  # 使用 strip() 去除行尾的换行符

# 关闭文件
file.close()
```

 - 示例 3：读取所有行并存储为列表

```py
# 打开文件
file = open("example.txt", "r")

# 读取所有行
lines = file.readlines()
print(lines)  # 输出: ['line1\n', 'line2\n', 'line3\n']

# 关闭文件
file.close()
```

 - 读取包含汉字的文件
    - 示例 1：读取整个文件内容
```py
# 打开文件并指定编码为 UTF-8
with open("chinese.txt", "r", encoding="utf-8") as file:
    content = file.read()
    print(content)
```

## 写入文件

 - 示例 1：写入文件

```py
# 打开文件（如果文件不存在，会创建新文件）
file = open("output.txt", "w")

# 写入内容
file.write("Hello, World!\n")
file.write("This is a new line.")

# 关闭文件
file.close()
```

 - 示例 2：追加内容到文件

 ```py
 # 打开文件（追加模式）
file = open("output.txt", "a")

# 追加内容
file.write("\nThis is an appended line.")

# 关闭文件
file.close()
 ```

 - 写入包含汉字的文件
    - 示例：写入汉字到文件
```py
# 打开文件并指定编码为 UTF-8
with open("output_chinese.txt", "w", encoding="utf-8") as file:
    file.write("你好，世界！\n")
    file.write("这是一个包含汉字的文件。")
```

## 使用 with 语句管理文件
 with 语句可以自动管理文件的打开和关闭，即使发生异常也能确保文件被正确关闭。

 - 示例 1：读取文件
 
```py
with open("example.txt", "r") as file:
    content = file.read()
    print(content)
```

 - 示例 2：写入文件

```py
with open("output.txt", "w") as file:
    file.write("Hello, World!\n")
    file.write("This is a new line.")
```

## 二进制文件操作
 对于二进制文件（如图片、视频等），需要使用二进制模式（'rb' 或 'wb'）。

 - 示例：复制二进制文件

 ```py
 # 读取二进制文件
with open("input.jpg", "rb") as input_file:
    data = input_file.read()

# 写入二进制文件
with open("output.jpg", "wb") as output_file:
    output_file.write(data)
 ```

## 文件指针操作
 文件指针表示当前文件读取或写入的位置。可以使用 seek() 和 tell() 方法操作文件指针。
 - seek(offset, whence)：移动文件指针到指定位置。
    - offset：偏移量。
    - whence：参考位置（0 表示文件开头，1 表示当前位置，2 表示文件末尾）。
 - tell()：返回当前文件指针的位置。

 示例：操作文件指针

 ```py
 with open("example.txt", "r") as file:
    # 读取前 5 个字符
    print(file.read(5))  # 输出: Hello

    # 获取当前文件指针位置
    print(file.tell())  # 输出: 5

    # 移动文件指针到文件开头
    file.seek(0)

    # 再次读取前 5 个字符
    print(file.read(5))  # 输出: Hello
 ```

## 文件 I/O 的异常处理
 文件操作可能会抛出异常（如文件不存在、权限不足等），可以使用 try-except 块捕获异常。

 - 示例：捕获文件操作异常
```py
'''
try:
    正常的操作
   ......................
except:
    发生异常，执行这块代码
   ......................
else:
    如果没有异常执行这块代码
'''
try:
    with open("nonexistent.txt", "r") as file:
        content = file.read()
        print(content)
except FileNotFoundError:
    print("文件不存在！")
except IOError:
    print("文件读取失败！")
```

## 重命名和删除文件
Python的os模块提供了帮你执行文件处理操作的方法，比如重命名和删除文件。

要使用这个模块，你必须先导入它，然后才可以调用相关的各种功能。import os

 - rename() 方法
   - rename() 方法需要两个参数，当前的文件名和新文件名。
   - 语法：
```py
   os.rename(current_file_name, new_file_name)
```
 - remove()方法
   - 你可以用remove()方法删除文件，需要提供要删除的文件名作为参数。
   - 语法：
```py
os.remove(file_name)
```

## Python里的目录
所有文件都包含在各个不同的目录下，不过Python也能轻松处理。os模块有许多方法能帮你创建，删除和更改目录。
 - mkdir()方法
   - 可以使用os模块的mkdir()方法在当前目录下创建新的目录们。你需要提供一个包含了要创建的目录名称的参数。
   - 语法：
```py
os.mkdir("newdir")
```
 - chdir()方法
   - 可以用chdir()方法来改变当前的目录。chdir()方法需要的一个参数是你想设成当前目录的目录名称。
   - 语法：
```py
os.chdir("newdir")
```

 - getcwd() 方法
   - getcwd()方法显示当前的工作目录。
   - 语法：
```py
os.getcwd()
```
 - rmdir()方法
   - rmdir()方法删除目录，目录名称以参数传递。
   - 在删除这个目录之前，它的所有内容应该先被清除。
   - 语法：
```py
os.rmdir('dirname')
```

## file 对象
 file 对象使用 open 函数来创建，下表列出了 file 对象常用的函数：

|  序号  |  方法及描述  |
|:--------|:--------:|
|  1  |  file.close(),关闭文件。关闭后文件不能再进行读写操作。  |
|  2  |  file.flush(),刷新文件内部缓冲，直接把内部缓冲区的数据立刻写入文件, 而不是被动的等待输出缓冲区写入。  |
|  3  |  file.fileno(),返回一个整型的文件描述符(file descriptor FD 整型), 可以用在如os模块的read方法等一些底层操作上。  |
|  4  |  file.isatty(),如果文件连接到一个终端设备返回 True，否则返回 False。  |
|  5  |  file.next(),返回文件下一行。  |
|  6  |  file.read([size]),从文件读取指定的字节数，如果未给定或为负则读取所有。  |
|  7  |	 file.readline([size]),读取整行，包括 "\n" 字符。  |
|  8  |  file.readlines([sizeint]),读取所有行并返回列表，若给定sizeint>0，则是设置一次读多少字节，这是为了减轻读取压力。  |
|  9  |  file.seek(offset[, whence]),设置文件当前位置  |
|  10  |  file.tell(),返回文件当前位置。  |
|  11  |  file.truncate([size]),截取文件，截取的字节通过size指定，默认为当前文件位置。  |
|  12  |  file.write(str),将字符串写入文件，返回的是写入的字符长度。  |
|  13  |  file.writelines(sequence),向文件写入一个序列字符串列表，如果需要换行则要自己加入每行的换行符。  |
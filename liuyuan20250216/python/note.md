# linux中运行python
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
    # -*- coding: UTF-8 -*-
    # 文件名：test.py

    # 第一个注释
    print ("Hello, Python!")  # 第二个注释
    ```

2. 注释可以在语句或表达式行末：
    ` name = "Runoob" # 这里的内容是一个注释 `

3. python 中多行注释使用三个单引号 ''' 或三个双引号 """。
    ```py
    #!/usr/bin/python
    # -*- coding: UTF-8 -*-
    # 文件名：test.py

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
    # -*- coding: UTF-8 -*-

    input("按下 enter 键退出，其他任意键显示...\n")
    ```
# print 输出
1. print 默认输出是换行的，如果要实现不换行需要在变量末尾加上逗号","。
    ```py
    #!/usr/bin/python
    # -*- coding: UTF-8 -*-

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

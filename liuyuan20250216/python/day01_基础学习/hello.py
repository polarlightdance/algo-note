#!/usr/bin/python3

print("hello, world!"); print("hello, python!")

if True:
    print("hello")
else:
    print("python")

days = ['Monday', 'Tuesday', 'Wednesday',
        'Thursday', 'Friday']
print(days)

item_one = 1
item_two = 2
item_three = 3
total = item_one + \
        item_two + \
        item_three
print(total)

word = 'word'
sentence = "这是一个句子。"
paragraph = """这是一个段落。
包含了多个语句"""
print(word)
print(sentence)
print(paragraph)

# 第一个注释
print ("Hello, Python!")  # 第二个注释

name = "Runoob" # 这里的内容是一个注释
print(name)

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

# input("按下 enter 键退出，其他任意键显示...\n")

x="a"
y="b"
# 换行输出
print (x)
print (y)

print ('---------')
# 不换行输出
print (x ,end=" ")
print (y)

# 不换行输出
print (x,y)

print('这是字符串，', end="")
print('这里的字符串不会另起一行')

print('12345', end=" ")  # 设置空格
print('6789')

print('admin', end="@")  # 设置符号
print('liyuan.com')

print('China ', end="liuyuan ")  # 设置字符串
print('zhenshuai')
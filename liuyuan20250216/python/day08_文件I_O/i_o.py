#!/usr/bin/env python3

import os

'''
file = open("test.txt", "a+")
lines = file.readlines()
print(lines)

file.write("hello, world\n")
content = file.read()
print(content)

file.close()
'''

# read all conten of file
with open("test.txt", "r") as file:
    content = file.read()
    print(content)
    
'''    
# write content to file end
with open("test.txt", "a") as file:
    file.write("\nHello, World!\n")
    file.write("This is a new line.")
'''

# 2进制读取图片
with open("ice_red_tea.jpg", "rb") as input_file :
    data = input_file.read()

''' 
# 2进制写入图片
with open("ice_red_tea2.jpg", "wb") as output_file :
    output_file.write(data)
''' 

with open("test.txt", "r") as file1 :
    # 读取前五个字符
    print(file1.read(5))
    # 读取游标位置
    print(file1.tell())
    # 移动游标位置
    file1.seek(1)
    print(file1.read(5))

# 打开文件并指定编码为 UTF-8
with open("hanzi.txt", "r", encoding="utf-8") as chinese :
    # 读取前五个字符
    print(chinese.read(6))
    # 读取游标位置
    print(chinese.tell())
    # 移动游标位置
    chinese.seek(0)
    print(chinese.read(13))


with open("hanzi.txt", "a", encoding="utf-8") as chinese :
    chinese.write("，记得那年雨季，会议里特安静")
    chinese.write("，哭过后的决定，是否还能进行")

# I/O异常判断
try:
    with open("nofile.txt", "r") as nofile:
        content = file.read()
        print(content)
except FileNotFoundError :
    print("no such file!!")
except IOError:
    print("read file faild!!")
    

'''
# modif file name
os.rename("os.txt", "my_os.txt")
# delete file
os.remove("my_os.txt")
'''  

# mdkir file
#os.mkdir("OS")

# 打印当前工作目录
os.getcwd()
print("当前工作目录：", os.getcwd())

# 切换到指定目录
os.chdir("/root/study/algo-note/liuyuan20250216/python/day07_模块")

# 打印当前工作目录
os.getcwd()
print("当前工作目录：", os.getcwd())
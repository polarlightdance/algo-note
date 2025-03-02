#!/usr/bin/python3

age = 26
born = 1998.7
name = "liuyuan"

print(age)
print(born)
print(name)

print("-----------------")
a = b = c =7
d, e, f = 1, 2, "yuan"
print(a, b, c)
print(d, e, f)

print("-------Number----------")
# Number(数字)  type() 是一个内置函数，用于获取对象的类型（即对象所属的类）。它返回一个类型对象，通常用于检查变量的数据类型。
x = 10
print(type(x), x) # a 是一个整数，type(a) 返回 <class 'int'>，表示 a 的类型是 int（整数）
y = 3.14
print(type(y), y)
z = 20 + 30
print(type(z), z)

print("-------String----------")
#String(字符串)
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

print("--------List---------")
# List(列表)
my_list = [1998, 7, 23, "liuyuan", 2025, "zhenshuai"]
your_list = ["chaoji", "wudi", "dashuaige"]
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

print("-------Tuple----------")
# Tuple(元组)
my_tuple = [1998, 7, 23, "liuyuan", 2025, "zhenshuai"]
your_tuple = ["chaoji", "wudi", "dashuaige"]
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

print("-------Dictionary----------")
# Dictionary(字典)
my_dict = {
    "name" : "liuyuan",
    'age' : '26',
    "is_student" : False,
    "courses" : ["Chinese", "English"]
}
print(type(my_dict))
# 输出完整的字典
print(my_dict)
# # 输出键为'name' 的值
print(my_dict["name"])
# 修改字典元素
my_dict["age"] = 18
print(my_dict["age"])
# 添加新键值对
my_dict["grade"] = "S"
print(my_dict)
# 输出所有键
print("all keys is: ", my_dict.keys())
# 输出所有值
print("all values is: ", my_dict.values())


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

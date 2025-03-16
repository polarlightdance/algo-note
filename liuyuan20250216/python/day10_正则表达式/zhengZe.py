#!/usr/bin/env python3

import re
from datetime import date

text = "ankang 123 xian 456"
content = r"^ankang" # 匹配以 "ankang" 开头  ^ :匹配字符串开头
result1 = re.match(content, text)
if result1:
    print("匹配成功:", result1.group())
else:
    print("匹配失败")
    
print(re.match('www', 'www.runoob.com').span()) # 在起始位置匹配

pattern = r"\d+" # 匹配数字
result2 = re.search(pattern, text)
if result2:
    print("匹配成功:", result2.group())
    
pattern1 = r"\d+" # 匹配数字
result3 = re.findall(pattern, text) # 返回所有匹配的字符串
print("匹配成功:", result3)

pattern2 = r"\d+" # 匹配数字
new_text = re.sub(pattern2, "*_*", text) # 替换匹配的字符串
print("替换后的字符串:", new_text)

today = date.today()
print("今天日期为:", today)
pattern3 = r"(\d{4})-(\d{2})-(\d{2})"
result4 = re.search(pattern3, str(today)) # 匹配日期 "today.strftime("%Y-%m-%d")"
if result4:
    print("all date is :",result4.group())
    print("year is :", result4.group(1))
    print("month is :",result4.group(2))
    print("day is :", result4.group(3))
    

#从字符串 "价格：￥99.5，折扣：20%" 中提取所有数字。

text1 = "价格：￥99.5，折扣：20%"
pattern4 = r"\d+\.?\d*"
result5 = re.findall(pattern4, text1)
print("匹配成功:", result5)

#将文本 "2023年10月25日" 转换为 "2023-10-25"。
text2 = "2023年10月25日"
pattern5 = r"(\d{4})年(\d{2})月(\d{2})日"
result6 = re.sub(pattern5, r"\1-\2-\3", text2)
print("转换后的日期:", result6)

email = "863385021"
pattern5 = r"^[a-zA-Z0-9_.+]+@[a-zA-Z0-9]+\.[a-zA-Z0-9-.]+$"
if re.match(pattern5, email):
    print("匹配成功")
else:
    print("匹配失败")
    
phone = "18740657785"
pattern6 = r"^1[3-9]\d{9}$"
if re.match(pattern6, phone):
    print("匹配成功")   
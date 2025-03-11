#!/usr/bin/env python3
import math

Money = 8000
def addMoney() :
    global Money
    Money = Money + 1
    return Money

print(Money)
addMoney()
print(Money)

content = dir(math)
#print(content)

x = 10
y = "liyuan"
def my_function() :
    pass
print(globals())
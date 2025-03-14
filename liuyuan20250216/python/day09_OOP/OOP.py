#!/usr/bin/env python3

class person :
    num = 0
    def __init__(self, name,  age, address):
        self.name = name
        self.age = age
        self.address = address
        person.num += 1
    
    def information(self) :
        print(f"{self.name} 真帅！")

my_person = person("刘源", 26, "China")
print(my_person.age)
my_person.information()

class son(person) :
    def information(self):
        print("你没我帅！")

my_son = son("吴彦祖", 10086, "China")
print(my_son.age)
my_son.information()

class student:
    def __init__(self, source):
        self.__source = source
    
    def inputVal(self, val):
        if val > 0 :
            self.__source += val
    
    def getVal(self):
        return self.__source

liuyuan = student(99)
liuyuan.inputVal(10)
print(liuyuan.getVal())
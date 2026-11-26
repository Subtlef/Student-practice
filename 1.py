#print("你好")
if 0>1:
    n="jing"
    print(n.find('j'))#输出找到的首字符下标，否则输出-1
    print(n.index('in'))#和上一样，但找不到就报错
    m="Generate Pretrain Transformer"
    print(m.count('er'))#返回字符串出现次数
    print("hello WORLD".capitalize())#首字母大写、其余全部小写 -> Hello world
    #upper,lower变更为大写或小写。
    print(m.startswith("Gen"))#是否以某个字符串开头，是返回Ture，反之False
    #.endswith相反，检查尾部
    print("HELLO".isupper())#检查是否为全部大写，返回T/F
    #.islower()检查是否为小写，返回T/F

#py原字符不可变，返回新字符，不改变原来字符

#修改字符串(一样不改变原来字符)
if 0>1:
    print("GPT,Claude,Deepseek".replace('e','E',3))#最后参数一个为次数
    print("Python".split('t'))#分割字符串，以列表形式返回，返回值不包括分割的东西

#列表
List=[1,2,3,4,'a']
print(List[4])
print(List[0:3])#可切片
for i in List:
    print(i)#是可迭代对象
List.append('one')#添加到最后
List.extend('two')#分散添加，必须为可迭代对象
List.insert(0,'three')#指定位置添加，添加位置有元素则原有元素往后移
print(List)




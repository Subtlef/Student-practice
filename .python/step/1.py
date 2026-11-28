#print("你好")
if 0>1:
    n="jing"
    print('n' in n)#返回T/F，检查是否存在
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
if 0>1:
    lis=[1,2,3,4,'a']
    print(lis[4])
    print(lis[0:3])#可切片
    for i in lis:
        print(i)#是可迭代对象
    lis.append('one')#添加到最后
    lis.extend('two')#分散添加，必须为可迭代对象
    lis.insert(0,'three')#指定位置添加，添加位置有元素则原有元素往后移
    print(lis)
    lis=[0,1,2]
    lis[0]=1#根据下标更改
    #in 和 not in 和上面用法一样，用来查找
    #index 和 count 和字符串用法一样
    del lis[1]#删除指定元素
    del lis#删除列表
    lis=[1,2,3,4]
    lis.pop(2)#删除下标元素，不写默认删除最后一个
    print(lis)
    lis.remove(1)#删除指定元素，若没有就报错，默认只删除一个
    print(lis)

#排序
if 0>1:
    li=[1,33,2,44,3,5]
    li.sort()#从小到大排序
    print(li)
    li.reverse()#将列表倒置，不排序

#列表推导式
li=[] 
[li.append(i) for i in range(1,11)]
print(li)
li=[] 
[li.append(i) for i in range(1,11) if i % 2 != 0]


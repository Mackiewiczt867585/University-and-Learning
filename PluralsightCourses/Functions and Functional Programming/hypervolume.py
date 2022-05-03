
#hypervolume2
def hypervolume(*args):
    i = iter(args)
    v=next(i)
    for args in i:
        v*=args
    return v

print(hypervolume(2,4))
print(hypervolume(2,4,3))
print(hypervolume(3),end='\n \n')

#hypervolume3
def hypervolume3(length, *lengths):
    v=length
    for arg in lengths:
        v *= arg
    return v

print(hypervolume3(2,4))
print(hypervolume3(2,4,3))
print(hypervolume3(3),end='\n \n')

#kwargs 2

def tag1(name, **attributes):
    result = '<' + name
    for key,value in attributes.items():
        result += '{k}= "{v}"'.format(k=key,v=str(value))
    result += '>'
    return result

print(tag1('img ', src="monet.jpg", alt="sunrise", border=1))

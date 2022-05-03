x=[(x,y) for x in range(5) for y in range(5)]
print(x)

values = [x /(x-y) for x in range(100) if x > 50 for y in range(100) if x-y !=0]
print(values)

valuesv2=[ x/(x-y)
        for x in range(100)
        if x>50
        for y in range(100)
        if x-y!=0]
print(valuesv2)
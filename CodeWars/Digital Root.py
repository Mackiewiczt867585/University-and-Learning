
def digital_root(n):
    x = str(n)
    toInt = []

    for char in x:
        toInt.append(int(char))

    result = sum(toInt)

    while result >= 10:
        x = str(result)
        toInt = []
        for char in x:
            toInt.append(int(char))
        result = sum(toInt)
            
    return result   

print(digital_root(10))
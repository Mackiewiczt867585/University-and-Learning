def persistence(n):
    if len(str(n))==1:
        return 0
    else:
        x = str(n)
        result = 10
        while len(str(x)) != 1:
            toInt = [int(num) for num in x]
            if 0 in toInt:
                toInt.remove(0)
            result = 1
            for num in toInt:
                result *= num
            x = str(result)
        return result

print(persistence(406854))
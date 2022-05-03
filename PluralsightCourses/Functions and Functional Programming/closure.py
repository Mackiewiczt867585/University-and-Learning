#function factories 

def raise_to(exp):
    def raise_to_exp(x):
        return pow(x,exp)
    return raise_to_exp

square = raise_to(2)
print(square(3))
potega10 = raise_to(10)
print(potega10(2))
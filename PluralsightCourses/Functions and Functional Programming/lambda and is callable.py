people =['Me','Ania','Wera','Bartek','Kacper','Adrian','Paweł','Oskar','Piotr']
print(sorted(people, key=lambda name:name.split()[-1]))

def is_even(x):
    return x%2==0

is_odd = lambda x: x%2==1

print(is_even(4))
print(callable(is_even))
print(callable(is_odd))
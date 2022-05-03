
def destroy_unicode(f):
    def wrap(*args,**kwargs):
        x = f(*args,**kwargs)
        return ascii(x)
    return wrap

def northern_city():
    return 'Tromsó'
print(northern_city())

@destroy_unicode
def northern_city():
    return 'Tromsó'

print(northern_city())

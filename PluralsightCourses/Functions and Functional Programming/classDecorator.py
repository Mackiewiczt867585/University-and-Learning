class CallCount:
    def __init__(self,f):
        self.f = f
        self.count = 0

    def __call__(self,*args,**kwargs):
        self.count+=1
        return self.f(*args,**kwargs)

@CallCount
def hello(name):
    print('Hello, {}!'.format(name))

hello("me")
hello("Ania")
print(hello.count)


###########################

class Trace:
    def __init__(self):
        self.enabled = True

    def __call__(self,f):
        def wrap(*args,**kwargs):
            if self.enabled:
                print('Calling {}'.format(f))
            return f(*args,**kwargs)
        return wrap

def destroy_unicode(f):
    def wrap(*args,**kwargs):
        x = f(*args,**kwargs)
        return ascii(x)
    return wrap

tracer = Trace()

@tracer
@destroy_unicode
def norwegian_island_maker(name):
    return name + 'óy'

print(norwegian_island_maker("Llama"))
print(norwegian_island_maker("kekm"))
tracer.enabled=False
print(norwegian_island_maker("Bub"))
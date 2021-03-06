
class Trace:
    def __init__(self):
        self.enabled = True

    def __call__(self,f):
        def wrap(*args,**kwargs):
            if self.enabled:
                print('Calling {}'.format(f))
            return f(*args,**kwargs)
        return wrap

result = map(Trace()(ord), 'The quick brown fox')
print(result)
print(next(result))
print(next(result))
print(next(result))
l=list(map(Trace()(ord), 'The quick brown fox'))
print(l)





# Map  is a lazy funciton which requires you to iterate over all objects to make it start working
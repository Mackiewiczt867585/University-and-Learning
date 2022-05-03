import functools

def hello():
    "Print a well-known msg."
    print('Hello, world!')

print(hello.__name__)
print(hello.__doc__)
help(hello)

def noop(f):
    @functools.wraps(f)
    def noop_wrapper():
        return f()
    return noop_wrapper

@noop
def hello():
    "Print a well known message"
    print('Hello, World!')

hello()
help(hello)
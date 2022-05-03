msg = 'global'

def enclosing():
    msg = 'enclosing'

    def local():
        nonlocal msg
        msg=  'local'

    print('enclosing message:',msg)
    local()
    print('enclosing message:',msg)

print('global message: ',msg)
enclosing()
print('global message:', msg)
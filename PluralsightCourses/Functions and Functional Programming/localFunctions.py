def sortByLastLetter(strings):
    def last_letter(s):
        return s[-1]
    return sorted(strings,key=last_letter)

print(sortByLastLetter(['hello','from','a','local','function','a','local','from','a']))

g= 'global'
def outer(p='parameter'):
    l = 'local'
    def inner():
        print(g,p,l,end='\n \n')
    inner()
outer()

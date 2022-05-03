import socket
from timeit import timeit
class Resolver:
    def __init__(self):
        self._cache= {}

    def __call__(self,host):
        if host not in self._cache:
            self._cache[host] = socket.gethostbyname(host)
        return self._cache[host]

    def clear(self):
        self._cache.clear()

    def hasHost(self, host):
        return host in self._cache

resolve = Resolver()
print(callable(resolve))
print(resolve.hasHost("pluralsight.com"))
print(resolve('sixty-north.com'))
print(resolve._cache)
print(resolve('pluralsight.com'))
print(resolve._cache)
print(resolve.hasHost("pluralsight.com"))
resolve.clear()
print(resolve.hasHost("pluralsight.com"))
#print(timeit(setup="from __main__ import resolve", stmt="resolve('google.com')", number=1))

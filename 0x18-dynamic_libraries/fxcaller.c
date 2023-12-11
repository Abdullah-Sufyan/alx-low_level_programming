import random
import ctypes

mylib = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, mylib.strlen(a, b)))
print("{} - {} = {}".format(a, b, mylib.strchr(a, b)))
print("{} x {} = {}".format(a, b, mylib.strspn(a, b)))
print("{} / {} = {}".format(a, b, mylib.strncat(a, b)))
print("{} % {} = {}".format(a, b, mylib._strcmp(a, b)))

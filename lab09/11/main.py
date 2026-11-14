def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper


def add(a, b):
    return a + b


def power(a, b):
    return a ** b


int_add = toint(add)
int_power = toint(power)

print(int_add('12', '30'))
print(int_power('2', '5'))
print(toint(max)('7', '12', '3'))
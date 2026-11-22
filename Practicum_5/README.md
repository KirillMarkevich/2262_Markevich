### Задача 01-Усреднение последовательности
```python
n, m = map(int, input().split())
a = list(map(float, input().split()))

for _ in range(m):
    b = [0.0] * n

    b[0] = (2 * a[0] + a[1]) / 3
    b[n - 1] = (2 * a[n - 1] + a[n - 2]) / 3

    for i in range(1, n - 1):
        b[i] = (a[i - 1] + a[i] + a[i + 1]) / 3

    a = b

print(*a)
```

### Задача 02-Сортировка по абсолютному значению
```python
n = int(input())
a = list(map(int, input().split()))

a.sort(key=lambda x: abs(x) * 2 + (x > 0))

print(*a)
```

### Задача 03-Гербафрика
```python
word = input()
n = int(input())

d = {}

for _ in range(n):
    a = input()
    b = input()
    d[a] = b

for i in range(1, len(word)):
    first = word[:i]
    second = word[i:]

    if first in d and second in d:
        print(d[first] + d[second])
        break
```

### Задача 04-Транспонирование матрицы
```python
n, m = map(int, input().split())

a = [list(map(int, input().split())) for _ in range(n)]

for j in range(m):
    for i in range(n):
        print(a[i][j], end=' ')
    print()
```

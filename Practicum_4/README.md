### Задача 01-Простые числа
```python
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

n = int(input())
count = 0
current = 1

while count < n:
    current += 1
    if is_prime(current):
        count += 1

print(current)
```

### Задача 02-Мама Дяди Федора
```python
n = int(input())
dresses = list(map(int, input().split()))

seen = set()
answer = n

for day in range(n):
    seen.add(dresses[day])
    if len(seen) == 3:
        answer = day + 1
        break

print(answer)
```

### Задача 03-Удаление буквы
```python
s = input().strip()

best = ""
m = 0

for ch in set(s):
    cnt = s.count(ch)
    if cnt > m:
        m = cnt
        best = ch

print(s.replace(best, ""))
```

### Задача 4 – Качество пароля
```python
rows = [
    "1234567890",
    "qwertyuiop",
    "asdfghjkl",
    "zxcvbnm"
]

n = int(input())

for _ in range(n):
    password = input().strip()
    is_strong = True
    for row in rows:
        if not any(ch in row for ch in password):
            is_strong = False
            break
    print("strong" if is_strong else "weak")
```

### Задача 05-Игра в Дурака
```python
ranks = {
    "6": 0, "7": 1, "8": 2, "9": 3, "10": 4,
    "Jack": 5, "Queen": 6, "King": 7, "Ace": 8
}

trump = input().strip()
n = int(input())
results = []

for _ in range(n):
    rank1, suit1 = input().split()
    rank2, suit2 = input().split()

    if suit1 == suit2 and ranks[rank2] > ranks[rank1]:
        results.append("1")
    elif suit2 == trump and suit1 != trump:
        results.append("1")
    else:
        results.append("0")

print(" ".join(results))
```

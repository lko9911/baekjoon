s = input()
new_s = ""
for char in s:
    if char.islower():
        new_s += char.upper()
    else:
        new_s += char.lower()
print(new_s)
    
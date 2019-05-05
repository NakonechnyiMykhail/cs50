int_list = [1, 2, 3, 5, 7, 8, 9, 12, 14, 17]
char_list = ['a', 'c', 'd']

print('List int:', int_list)
print('List char:', char_list)

print('List int:', int_list[0])
print('List int:', int_list[2:])
print('List int:', int_list[:5])
print('List int:', int_list[2:-1:2])
print(len(int_list))

for x in int_list:
    print(x)
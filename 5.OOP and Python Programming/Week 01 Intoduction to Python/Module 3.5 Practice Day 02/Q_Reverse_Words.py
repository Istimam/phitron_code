string = input()
words = string.split()
# for word in words:
#     print(word[::-1],end=' ')
# otstr = ' '.join(word[::-1] for word in words)
# print(otstr)
first_word = True
for word in words:
    if first_word:
        print(word[::-1],end='')
        first_word = False
    else:
        print(' '+word[::-1],end='')
print()
numbers = [12,13,14,15,16,20]
for i,num in enumerate(numbers):
    print(i,num) # Prints values with index


# key value pair / Dictionary / Object / Hash Table / Overlap With Set
# {key: value, key: Value}
person = {'name': 'Kala Pakhi', 'Address': 'Kalipur','age':23, 'job':'Frelancer'}
print(person['name'])

person['Language'] = 'Python'
print(person)

del person['age']
print(person)

#special Dictionary Looping
for item in person:
    print(item)
for item in person.items():
    print(item)
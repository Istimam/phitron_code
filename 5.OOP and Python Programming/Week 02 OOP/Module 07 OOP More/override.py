class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print('Vat mangso korma')

    def Exercise(self):
        print('Gym e gham Jhoray')

    # Dunder Method for overloading
    def __add__(self, other):
        return self.age + other.age
    def __mul__(self, other):
        return self.age * other.age
    
class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)

    # Override
    def eat(self):
        print('Vegetabls')

sakib = Cricketer('sakib', 50, 6, 80, 'BD')
mushi = Cricketer('Mushi', 40, 5, 67, 'BD')
# sakib.eat()
# sakib.Exercise()

# Plus sign Overload
print(45+63)
print('sakib' + 'Rakib')
print([12, 98] + [5, 6, 7, 7])
print(sakib + mushi)
print(sakib * mushi)
# Read only --> User can not set the value. Value can not be changed
# getter --> Get a value of a property though a method. Most of the time, user will get the value of a private attribute.
# setter --> set a value of a property through a method. Most of the time, User will set the value of a private property.

class User:
    def __init__(self, name, age, money) -> None:
        self._name = name
        self._age = age
        self.__money = money

    # getter without any setter is read-only attribute
    @property
    def age(self):
        return self._age
    
    #getter
    @property
    def salary(self):
        return self.__money
    
    def salaryy(self, value):
        if value < 0:
            return 'salary cannot be negative'
        self.__money += value

samsu = User('Kopa', 21, 2100)
# print(samsu.__money())
print(samsu.age)
print(samsu.salary)
samsu.salaryy = 4500
print(samsu.salaryy)
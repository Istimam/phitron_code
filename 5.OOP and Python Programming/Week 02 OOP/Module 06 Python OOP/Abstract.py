from abc import ABC, abstractmethod
# abstract base class
class Animal(ABC):
    @abstractmethod # Enforce all derived class to have a eat method
    def eat(self):
        print('I need food')

    @abstractmethod
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self, name) -> None:
        self.catagory = 'Monkey'
        self.name = name
        super().__init__()

    def eat(self):
        print('Hey nana, Eating Bannana')

    def move(self):
        print('I\'m moving')

layka = Monkey('Lucky')
layka.eat()
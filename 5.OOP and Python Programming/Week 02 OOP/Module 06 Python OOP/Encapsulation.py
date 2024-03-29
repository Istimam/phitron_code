# Encapsulation --> Hide Details
# Access modifier: public, protected, private

class Bank:
    def __init__(self, holder_name, initial_deposit, branch) -> None:
        self.holder_name = holder_name # Public
        self._branch = branch # Protected
        self.__balance = initial_deposit # Privet

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance
    
    def withdraw(self, amount):
        if amount > self.__balance:
            return amount
        else:
            return f'Fokira tk nai'

rafsun = Bank('Chooto bro', 1000,'Dhanmondi')
rafsun.holder_name = 'boro vai'
rafsun.deposit(400000)
print(rafsun.get_balance())
print(rafsun.holder_name)
# rafsun.balance = 0
# print(rafsun.balance)
# print(dir(rafsun))
print(rafsun._Bank__balance)
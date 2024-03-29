class Bank:
    def __init__(self):
        self.users = {}
        self.admin = Admin(self)
        self.loan_feature_enabled = True

    def create_user(self, name, email, address, account_type):
        user = User(name, email, address, account_type, self)
        self.users[user.account_number] = user
        return user

    def delete_user(self, user):
        del self.users[user.account_number]

    def get_all_users(self):
        return list(self.users.values())

    def get_total_balance(self):
        return sum(user.balance for user in self.users.values())

    def get_total_loan_amount(self):
        return sum(user.loan_amount for user in self.users.values())

    def toggle_loan_feature(self):
        self.loan_feature_enabled = not self.loan_feature_enabled


class User:
    def __init__(self, name, email, address, account_type, bank):
        self.name = name
        self.email = email
        self.address = address
        self.account_type = account_type
        self.balance = 0
        self.loan_amount = 0
        self.bank = bank
        self.account_number = self.generate_account_number()

    def generate_account_number(self):
        # Generate a unique account number based on some logic (e.g., incrementing a counter)
        return hash(self.email)  # For simplicity, using the hash of email as an account number

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if amount > self.balance:
            print("Withdrawal amount exceeded. Insufficient balance.")
        else:
            self.balance -= amount

    def check_balance(self):
        return self.balance

    def check_transaction_history(self):
        # Implement logic to retrieve transaction history
        print("Transaction history not implemented yet.")

    def take_loan(self, amount):
        if self.loan_amount == 0:
            self.loan_amount += amount
            print("Loan taken successfully.")
        else:
            print("You can only take a loan at most two times.")


class Admin:
    def __init__(self, bank):
        self.bank = bank

    def create_user(self, name, email, address, account_type):
        return self.bank.create_user(name, email, address, account_type)

    def delete_user(self, user):
        self.bank.delete_user(user)

    def see_all_users(self):
        return self.bank.get_all_users()

    def check_total_balance(self):
        return self.bank.get_total_balance()

    def check_total_loan_amount(self):
        return self.bank.get_total_loan_amount()

    def toggle_loan_feature(self):
        self.bank.toggle_loan_feature()


# Example Usage
bank_system = Bank()
admin = Admin(bank_system)

# Create a user account
user1 = admin.create_user("John Doe", "john@example.com", "123 Main St", "Savings")

# Deposit money
user1.deposit(1000)

# Withdraw money
user1.withdraw(500)

# Check balance
print("User1 Balance:", user1.check_balance())

# Take a loan
user1.take_loan(2000)

# Admin actions
print("All Users:", admin.see_all_users())
print("Total Bank Balance:", admin.check_total_balance())
print("Total Loan Amount:", admin.check_total_loan_amount())

# Toggle loan feature
admin.toggle_loan_feature()

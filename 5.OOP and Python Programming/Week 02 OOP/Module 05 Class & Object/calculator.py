class calculator:
    brand = 'Casio MS990'
    def add(self, num1, num2):
        return num1 + num2
    
    def sub(self, num1, num2):
        return num1 - num2
    
    def mul(self, num1, num2):
        return num1 * num2
    
    def div(self, num1, num2):
        return num1 // num2

calc = calculator()

num1, num2 = map(int, input().split())
operation = input()

result = 0

if operation == "+":
    result = calc.add(num1, num2)
elif operation == "-":
    result = calc.sub(num1, num2)
elif operation == "*":
    result = calc.mul(num1, num2)
elif operation == "/":
    result = calc.div(num1, num2)
else:
    print("Error")

print(result)
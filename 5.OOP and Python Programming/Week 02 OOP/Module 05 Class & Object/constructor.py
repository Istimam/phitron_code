class phone:
    manufactured = 'China'

    def __init__(self, brand, price):
        self.brand = brand
        self.price = price

    def send_sms(self, phone, sms):
        text = f'Sending to: {phone} {sms}'
        print(text)

my_phone = phone('Samsung',9500)
print(my_phone.brand, my_phone.price)

her_phone = phone('Apple', 120000)
print(her_phone.brand, her_phone.price)
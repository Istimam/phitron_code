def call():
    print('calling someone')
    return 'call done'

class phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'
    freatures = ['camera','speaker','hammer']

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'sending SMS to: {phone} and message: {sms}'
        return text
    
my_phone = phone()
print(my_phone.freatures)
my_phone.call()
txt = my_phone.send_sms(233,'love u')
print(txt)
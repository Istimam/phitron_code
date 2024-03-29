# class Student:
#     def __init__(self, name, cur_class, id):
#         self.name = name
#         self.id = id
#         self.cur_class = cur_class

#     def __repr__(self) -> str:
#         return f'Student with name: {self.name}, class: {self.cur_class},id:{self.id}'
    
# class Teacher:
#     def __init__(self, naem, sub, id):
#         return f'Teacher: {self.name}, sub: {self.sub}'

# class School:
#     def __init__(self, name):
#         self.name = name
#         self.teacher = []
#         self.student = []

#     def add_teacher(self, name, sub):
#         id = len(self.teacher) + 101
#         teacher = Teacher(name, sub, id)
#         self.teacher.append(teacher)

#     def enroll(self, name, fee):
#         if fee < 6500:
#             return 'Not enough fee'
#         else:
#             id = len(self)

# alia = Student('Alia Thakur', 9, 1)
# print(alia)

class Phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'Sending SMS to: {phone+5}'
        return text


my_phone = Phone()
result = my_phone.send_sms(41524, 'Missy, I missed to miss you')
print(result)
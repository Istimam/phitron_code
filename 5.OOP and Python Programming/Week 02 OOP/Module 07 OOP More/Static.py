class Shopping:
    cart = [] # class attrtibute , Static Attribute
    origin = 'china'

    def __init__(self, name, location) -> None:
        self.name = 'Jamu na city'
        self.location = 'Jam er maj khane'

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f'buying: {item} for price: {price} and remaining: {remaining}')

    @staticmethod
    def multipy(a, b):
        result = a*b
        print(result)

    @classmethod
    def hudai_dekhi(self, item):
        print('Hudai jai', item)

basundhara = Shopping('basu', 'not popular')
# basundhara.purchase('lungi', 400, 1000)
basundhara.hudai_dekhi('lungi')
Shopping.hudai_dekhi('Lungi')
# Shopping.purchase(2, 3, 4)
Shopping.multipy(4,5)
basundhara.multipy(6,9)
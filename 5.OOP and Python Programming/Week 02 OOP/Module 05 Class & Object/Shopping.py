class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        product = {'item': item, 'price':price, 'quantity': quantity}
        self.cart.append(product)

    def checkout(self, amount):
        total = 0
        for item in self.cart:
            print(item)
            total += item['price']*item['quantity']
        print('total price', total)
        
        if amount < total:
            print(f'Please Provide {total - amount} more')
        else:
            extra = amount - total
            print(f'Here is your items and extra moner {extra}')

swapan = Shopping('Alan Swapan')
swapan.add_to_cart('alu', 50, 6)
swapan.add_to_cart('potato', 5, 15)
swapan.add_to_cart('egg', 50, 500)

print(swapan.cart)
swapan.checkout(555600)
class shop:
    cart = []
    def __init__(self, buyer):
        self.buyer = buyer
    
    def add_to_cart(self, item):
        self.cart.append(item)

mehzaben = shop('Meg jabeen')
mehzaben.add_to_cart('shoes')
mehzaben.add_to_cart('phone')
print(mehzaben.cart)

nisho = shop('nisho')
nisho.add_to_cart('cap')
nisho.add_to_cart('watch')
print(nisho.cart)

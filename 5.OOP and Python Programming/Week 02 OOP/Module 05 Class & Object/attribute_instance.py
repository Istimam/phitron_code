class shop:
    shopping_mal = 'jamuna'
    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = [] # cart is an instance attribute
    
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

apurbo = shop('apurbo')
apurbo.add_to_cart('comb')
apurbo.add_to_cart('bed')
print(apurbo.cart)
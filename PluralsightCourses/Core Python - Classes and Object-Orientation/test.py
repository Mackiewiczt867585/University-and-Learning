from shipping import *

# c3 = ShippingContainer("MAE",["tools"])
# c4 = ShippingContainer("MAF",["equipment"])
# c5 = ShippingContainer.create_empty("MAG")
# c6 = ShippingContainer.create_with_items("MAH",['underwear','socks'])
# c7 = RefrigeratedShippingContainer.create_with_items("MAJ",["shark"],celsius=2)



# print(c3.owner_code,c3.contents,c3.bic)
# print(c4.owner_code,c4.contents,c4.bic)
# print(c5.owner_code,c5.contents,c5.bic)
# print(c6.owner_code,c6.contents,c6.bic)
# print(c7.owner_code,c7.contents,c7.bic)
# print(c7.celsius)
# c7.celsius = -19 
# print(c7.celsius)
# c7.celsius = 5
c = ShippingContainer.create_empty("XDD",length_ft=20)
print(c.volume_ft3)
c2 = RefrigeratedShippingContainer.create_empty("XDF",length_ft=20,celsius=-5)
print(c2.volume_ft3)
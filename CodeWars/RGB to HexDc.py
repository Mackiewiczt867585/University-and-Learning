def rgb(r, g, b):
    result =""
    if r > 255:   
        r2 = "FF"
    elif r < 0:
        r2 = "00"
    else:
        r2 = str(hex(r)).replace('0x','').upper()
    if g > 255:   
        g2 = "FF"
    elif g < 0:
        g2 = "00"
    else:    
        g2 = str(hex(g)).replace('0x','').upper()
    if b > 255:   
        b2 = "FF"
    elif b < 0:
        b2 = "00"
    else:    
        b2 = str(hex(b)).replace('0x','').upper()
    if len(r2) == 1:
        r2 = "0" + r2
    if len(g2) == 1:
        g2 = "0" + g2
    if len(b2) == 1:
        b2 = "0" + b2
    return r2+g2+b2


print(rgb(255,255,255))


#return str(r).replace('0x','')+str(g).replace('0x','')+str(b).replace('0x)','').upper()
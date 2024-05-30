vow = ['*', 'a', 'e', 'i', 'o', 'u']

def encode(st):
    encode_st = ""
    for x in st:
        if x in vow:
            encode_st += str(vow.index(x))
        else:
            encode_st += x
    return encode_st
    
def decode(st):
    decode_st = ""
    for x in st:
        if x.isdigit():
            decode_st += str(vow[int(x)])
        else:
            decode_st += x
    return decode_st
    
print(decode("h2ll4")) 
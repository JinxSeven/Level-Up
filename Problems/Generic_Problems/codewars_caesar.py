class CaesarCipher(object):
    def __init__(self, shift):
        self.shift = shift

    def encode(self, st):
        shift = self.shift
        enco = ""
        for x in range(0, len(st)):
            final = ord(st[x]) + shift
            if st[x].isupper():
                final = (final - ord('A')) % 26 + ord('A')
                enco += chr(final).upper()
            elif st[x].islower():
                final = (final - ord('a')) % 26 + ord('a')
                enco += chr(final).upper()
            else: enco += st[x]
        print(enco)

    def decode(self, st):
        shift = self.shift
        deco = ""
        for x in range(0, len(st)):
            if st[x].isupper():
                final = ord(st[x]) - shift
                while final < ord('A'):
                    final = (final + 26)
                deco += chr(final).upper()
            elif st[x].islower():
                final = ord(st[x]) - shift
                while final < ord('a'):
                    final = (final + 26)
                deco += chr(final).upper()
            else:
                deco += st[x]
        print(deco)
            
    

if __name__ == "__main__":
    shift = 31
    cipher = CaesarCipher(shift)
    
    original_text = "C"
    encoded_text = cipher.encode(original_text)
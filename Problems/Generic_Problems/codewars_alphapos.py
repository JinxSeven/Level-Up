def alphabet_position(text):
    newStr = ""
    for x in text:
        if x.isupper(): newStr += str(1 + (ord(x) - ord('A'))) + " "
        if x.islower(): newStr += str(1 + (ord(x) - ord('a'))) + " "
    return newStr[:-1]

print(alphabet_position("The sunset sets at twelve o' clock."))
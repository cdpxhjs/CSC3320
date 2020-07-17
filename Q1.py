def encrypt(text,key):
    output=""
    for i in range(len(text)):
        ch=text[i]
        if(ch.isupper()):
            ch=ch.lower()
        if(ch.isalpha()):#alphabet
            output += chr((ord(ch) + key - 97) % 26 + 97)#if exceed the max in unicode, return to the beginning
        else:
            output += ch
    return output

filename=input("Enter the file name: ")
text=open("{0}".format(filename)).read()
key=input("Enter your key: ")

print(encrypt(text,key))
import binascii
def dehex(filename):
    data = open(filename,"r").read()#read mode
    ddehex=binascii.unhexlify(data)
    print(ddehex)

#main
dehex("hex_dump")
import sys
def tohex(readfile,writefile):
    hex_str=""
    byte=""
    with open(readfile,"rb") as f:#read mode
        byte = f.read(1)
        while byte !="":
            hex_str += binascii.hexlify(byte)
            byte = f.read(1)#read the next one
    print("exictuing hex array..")
    print(hex_str)
    f.open(writefile,"w")#write mode
    f.write(hex_str)
    f.close


#main
tohex(sys.argv[1],"hex_dump")
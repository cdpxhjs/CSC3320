import binascii
input = raw_input("Enter a string:")
binary=binascii.a2b_base64(input.strip())
print("Convert to binary: {0}".format(binary))
restore = binascii.b2a_base64(binary)
print("Convert back to string: {0}".format(restore))

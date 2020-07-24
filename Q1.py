from os import system
readfilename=input("Enter the file name to read: ")
data=open("{0}".format(readfilename),"rb").read()#read mode
writefilename=input("Enter the file name to write: ")
f=open("./{0}".format(writefilename),"wb")#write mode
f.write(data)
f.close()
print("exicuting the binary file..")
system("chmod 777 {0}; ./{1}".format(writefilename,writefilename))
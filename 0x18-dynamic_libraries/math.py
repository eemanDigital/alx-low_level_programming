from ctypes import *
mathLib = CDLL("./100-operations.so")
 
#call C function to check connection
mathLib.connect() 
 
#calling randNum() C function
#it returns random number
varRand = mathLib.randNum()
print ("Random Number:", varRand, type(varRand))
 
#calling addNum() C function
#it returns addition of two numbers
varAdd = mathLib.addNum(20,30)
print ("Addition : ", varAdid)

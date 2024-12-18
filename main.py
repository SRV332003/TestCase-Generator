import os
s=0
fs = 9 # number of Files 
print("Generating Test Cases")
for i in range(s,fs):
    os.system("python3 generate.py > in%s.txt"%("0"+str(i) if i<10 else str(i)))
    print("file %d generated"%i)
print("Test Cases Generated\n")



os.system("g++ unplanned.cpp -o solution")
print("Compiled Solution")
for i in range(s,fs):
    os.system("./solution < in%s.txt > out%s.txt"%("0"+str(i) if i<10 else str(i),"0"+str(i) if i<10 else str(i)))
print("Solutions Compiled\n")



# print("Verifying Solutions")
# for i in range(fs):
#     print("file  %d"%i)
#     os.system("echo \"in%s.txt out%s.txt\" | python3 verify.py"%("0"+str(i) if i<10 else str(i),"0"+str(i) if i<10 else str(i)))
    
# print("Solutions Verified\n")

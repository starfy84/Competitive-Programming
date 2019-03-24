store =[
    ["CU","see you"],
    [":-)","I'm happy"],
    [":-(","I'm unhappy"],
    [";-)","wink"],
    [":-P","stick out my tongue"],
    ["(~.~)","sleepy"],
    ["TA","totally awesome"],
    ["CCC","Canadian Computing Competition"],
    ["CUZ","because"],
    ["TY","thank-you"],
    ["YW","you're welcome"],
    ["TTYL","talk to you later"]
      ]
inp=[]
inpu =""
while inpu != "TTYL":
    inpu = input()
    if(inpu != ""):
        inp.append(inpu)
for i in range(len(inp)):
    for n in range(len(store)):
        if inp[i] == store[n][0]:
            inp[i] = store[n][1]
for i in inp:
    print(i)
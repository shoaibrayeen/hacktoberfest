def rott(arr,q):
    max_t=0
    while(len(q)!=0):
        temp=q.pop(0)
        max_t=temp[2]
        if(temp[0]>0 and arr[temp[0]-1][temp[1]]==1 ):
            q.append((temp[0]-1,temp[1],temp[2]+1))
            arr[temp[0]-1][temp[1]]=2

        if(temp[0]<4 and arr[temp[0]+1][temp[1]]==1 ):
            q.append((temp[0]+1,temp[1],temp[2]+1))
            arr[temp[0]+1][temp[1]]=2

        if(temp[1]>0 and arr[temp[0]][temp[1]-1]==1):
            q.append((temp[0],temp[1]-1,temp[2]+1))
            arr[temp[0]][temp[1]-1]=2

        if(temp[1]<4 and arr[temp[0]-1][temp[1]+1]==1 ):
            q.append((temp[0],temp[1]+1,temp[2]+1))
            arr[temp[0]][temp[1]+1]=2

    return max_t


def rotten_tomatoes(arr):
    q=[]
    for i in range(5):
        for j in range(5):
            if(arr[i][j]==2):
                q.append((i,j,0))
    max_t=rott(arr,q)
    for i in range(5):
        for j in range(5):
            if(arr[i][j]==1):
                return "it is impossible to rott all tomatoes"
    return "maximum time to rott all tomaotes is {} hours".format(max_t)        
        #print("{}|{}|{}|{}|{}".format(arr[i][0],arr[i][1],arr[i][2],arr[i][3],arr[i][4]))
            




arr=[
    [0,1,1,1,2],
    [0,2,0,0,1],
    [1,2,0,0,1],
    [1,0,0,0,0],
    [1,1,1,2,0]
    ]
print(rotten_tomatoes(arr))
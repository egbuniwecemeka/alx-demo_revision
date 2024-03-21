def search(lst, elem):
    answer = None
    i = 0
    elemComp = 0
    
    while i < len(lst) - 1 and answer == None:
        elemComp += 1
        
        if elem == lst[i]:
            answer = elem
        elif elem < lst[i]:
            return False
        
        i += 1
        print(answer, elemComp)
    return answer
    
""" my_list = range(0,30)

res = search(my_list, 18)
print(res) """
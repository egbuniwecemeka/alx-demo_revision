from bsearch import bsearch

def search1(lst, elem):
    print(bsearch(lst, elem, 0, len(lst) -1))
    print('Search Complete')

my_list = list(range(0, 40))

search1(my_list, 34)
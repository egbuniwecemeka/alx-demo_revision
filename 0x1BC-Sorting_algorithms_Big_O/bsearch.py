def bsearch(lst, elem, first, last):
    print(first, last)
    if (last - first) < 2:
        return lst[first] == elem or lst[last] == elem
    mid = first + (last - first) // 2
    if lst[mid] == elem:
        return True
    elif lst[mid] > elem:
        return bsearch(lst, elem, first, mid - 1)
    else:
        return bsearch(lst, elem, mid + 1, last)


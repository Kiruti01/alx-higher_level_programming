#!/usr/bin/python3

def divisible_by_2(my_list=[]):
    multiples = []
    for elem in my_list:
        multiples.append(True if not elem % 2 else False)
    return (multiples)

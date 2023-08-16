#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    keys_2del = []
    for value in a_dictionary:
        if a_dictionary[value] == value:
            keys_2del.append(value)
    for value in keys_2del:
        del a_dictionary[value]
    return (a_dictionary)

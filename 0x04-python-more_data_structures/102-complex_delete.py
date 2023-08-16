#!/usr/bin/python3
def comlex_delete(a_dictionary, value):
    keys_2del = []
    for key in a_dictionary:
        if a_dictionary[key] == value:
            keys_2del.append(key)
    for key in keys_2del:
        del a_dictionary[key]
    return a_dictionary

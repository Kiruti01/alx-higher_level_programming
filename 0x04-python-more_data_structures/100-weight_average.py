#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list and len(my_list):
        num = 0
        dem = 0
        for tupl in my_list:
            num += (tupl[0] * tupl[1])
            dem += tupl[1]
        return (num / dem)
    return 0

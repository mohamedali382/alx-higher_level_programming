#!/usr/bin/python3
def replace_in_list(my_list, idx,element):
    old_list = my_list.copy()
    if idx < 0 or idx >= len(my_list):
        return my_list  
    old_list[idx] = element
    return old_list

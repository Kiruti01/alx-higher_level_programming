#!/usr/bin/python3

class Square:
    def __init__(self, size=0):
        self.size = size

    @property
    def size(self):
        return (self.__size)

    @size_setter
    def size(self, value):
        if not isinstance(self, int):
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        return (self.__size ** 2)

    def my_print(self):
        if self.__size == 0:
            print("")
            return
        [print("") for i in range(0, self.__position[1])]

        for i in range(0, self.__size):
            [print(" ", end="") for j in range(0, self.__position[0])]
            [print("#", end="") for k in range(0, self.__size)]
            print("")

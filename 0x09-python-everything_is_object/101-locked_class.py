#!/usr/bin/python3
"""Defines a locked class."""

class LockedClass:
    """
    Prevents user from instantiating new Locked Class attributes
    for anything except attributes called 'first_name'.
    """

    __slots__ = ["first_name"]

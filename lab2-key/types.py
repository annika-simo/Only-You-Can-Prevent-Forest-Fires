#!/usr/bin/python3

class MyType(object):
  def __init__(self, val):
    self.val = val
  def __int__(self):
    print("Doing the __int__ conversion!")
    return 70

#result = int("5") / 5
#result = int("a") / 5
value = MyType(100)

result = int(value) / 2

print(f"result: {result}")

result = int(value) / 2
print(f"result: {result}")

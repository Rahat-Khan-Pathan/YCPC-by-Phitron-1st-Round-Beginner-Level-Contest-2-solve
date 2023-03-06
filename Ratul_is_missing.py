
def find_ratul(string):
    words = string.split()
    for word in words:
        if word == "Ratul":
            return "YES"
    return "NO"
a=input()
print(find_ratul(a))
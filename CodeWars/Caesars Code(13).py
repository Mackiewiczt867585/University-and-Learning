import string

def rot13(message):
    result = ""
    lowercase = [letter for letter in string.ascii_lowercase]
    uppercase = [letter for letter in string.ascii_uppercase]
    for letter in message:
        letters_index = 0
        if letter in lowercase:
            letters_index = lowercase.index(letter) + 13
            while letters_index >= len(lowercase):
                letters_index -= len(lowercase)
            result = result + lowercase[letters_index]
        elif letter in uppercase:
            letters_index = uppercase.index(letter) + 13
            while letters_index >= len(uppercase):
                letters_index -= len(uppercase)
            result = result + uppercase[letters_index]
        else:
            result = result + letter
    return result




print(rot13("test"))
def anagrams(word, words):
    result = []
    words_list = [x for x in words]
    split_word = [letter for letter in word]
    split_word.sort()
    for x in words_list:
        y = [letter for letter in x]
        if len(y) == len(split_word):
            y.sort()
            if y == split_word:
                result.append(x)
    return result



print(anagrams('racer', ['crazer', 'carer', 'racar', 'caers', 'racer']))
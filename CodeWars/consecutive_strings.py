def longest_consec(strarr, k):
    list_of_new_strings = []
    word_index = 0
    while word_index + k <= len(strarr):
        newstring = ""
        for i in range(word_index,word_index+k,1):
            newstring = newstring + strarr[i]
        list_of_new_strings.append(newstring)
        word_index += 1
    result = ""
    for word in list_of_new_strings:
        if len(word) > len(result):
            result = word
    return result

print(longest_consec(["zone", "abigail", "theta", "form", "libe", "zas"], 2))
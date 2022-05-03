def sort_array(source_array):
    odd_array = []
    indexes_array = []
    result = source_array
    index_counter = 0
    for num in source_array:
        if num % 2 == 1:
            odd_array.append(num)
            indexes_array.append(index_counter)
        index_counter += 1
    odd_array.sort()
    indexes_array.sort()
    for num in result:
        if num % 2 == 1:
            result[indexes_array.pop(0)] = odd_array.pop(0)
    return result

print(sort_array([-43, -9, 25, 12, -6, -2, 22, -37, -11, -28, -9, 8, -9, 12, 12, 4, -3, -14, 3, -32, 7, 25, -20, -36, 25, 21, 13, 25, 25]))
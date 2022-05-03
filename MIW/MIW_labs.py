import math
import numpy as np
import random

# zapisanie rekordów do macierzy
def readfile(name):
    matrix = list()
    with open(name, "r") as f:
        for line in f.readlines():
            matrix.append(list(map(lambda x: float(x), line.split())))
    return matrix


# metryka euklidesowa dla dwóch list
def distance(a, b) -> float:
    return math.sqrt(sum(map(lambda x, y: (y - x) ** 2, a[:-1], b[:-1])))


# zapis do listy -> (argument decyzyjny, odleglosc)
def measure(x, data) -> list:
    result = list()
    for record in data:
        if record == x:		# ominiecie rekordu podanego w argumentach funkcji
            continue
        result.append((record[-1], distance(x, record)))  # dodanie obliczonego dystansu do wyników z odpowiednim kluczem
    return result


# zapisanie rekordów do słownika z kluczem - klasa decyzyjna, wartość - odległość
def group(list) -> dict:
    result = dict()
    for element in list:
        if element[0] not in result.keys():
            result[element[0]] = [element[1]]
        else:
            result[element[0]].append(element[1])
    return result


# sumowanie dystansów dla klas decyzyjnych
def sum_distance(dict) -> dict:
    for key in dict.keys():
        dict[key].sort() 		# posortowanie wartości rosnąco
        dict[key] = sum(dict[key])  # zsumowanie k najmniejszych wartości
    return dict


# decyzja który wynik jest mniejszy aby przypisać go do odpowiedniej grupy
def decide(dict) -> float:
    result, smallest_sum = list(dict.keys())[0], list(dict.values())[0]
    for key in list(dict.keys())[1:]:
        if dict[key] < smallest_sum:
            smallest_sum, result = dict[key], key
        elif dict[key] == smallest_sum:
            return None
    return result


#sample = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]

#file_data = readfile("australian.dat")          # matrix
#tuple_list = measure(sample, file_data)         # list of tuples (class, distance)
#grouped = group(tuple_list)                     # dict with {class: list of distances}
#summary = sum_distance(grouped)                 # dict with {class: sum of k the smallest distances}
#output = decide(summary)                        # class with the smallest sum of k distances

#print(output)

def metryka_euklidesowa_2(punkt1, punkt2, decisive=False) -> float:
    p1 = np.array(punkt1)
    p2 = np.array(punkt2)
    wektor = list()

    if not decisive:
        wektor = p2 - p1
    else:
        for x in range(len(p1)-1):
            wektor.append(p2[x] - p1[x])

    return math.sqrt(np.dot(wektor, wektor))


def assign_random_class(matrix):
    for data in matrix:
        data[-1] = random.choice([0, 1])
    return matrix




# sample1 = [1, 1]
# sample2 = [2, 3]

# #print(metryka_euklidesowa_2(sample1, sample2))
# print(file_data)
# file_data = assign_random_class(file_data)
# print(file_data)
import numpy as np
import MIW_labs as lab3

original_values = lab3.readfile("australian.dat")
random_class = lab3.assign_random_class(original_values)

def assign_correct_classes(unorganised_list):
    changes = 1
    iteration = 1

    while changes != 0:
        changes = 0
        weight_0 = None
        weight_0_distance = None
        weight_1 = None
        weight_1_distance = None

        for record in unorganised_list:         # wybor srodka masy
            tuple_list = lab3.measure(record, unorganised_list)
            grouped = lab3.group(tuple_list)
            summary = lab3.sum_distance(grouped)

            if weight_0 is None:
                weight_0 = record
                weight_0_distance = summary[0]
            else:
                if summary[0] < weight_0_distance:
                    weight_0 = record
                    weight_0_distance = summary[0]
                    
            if weight_1 is None:
                weight_1 = record
                weight_1_distance = summary[1]
            else:
                if summary[1] < weight_1_distance:
                    weight_1 = record
                    weight_1_distance = summary[1]
        
        for record in unorganised_list:     # nadpisanie klasy decyzyjnej i zliczenie ilosci zmian
            distance_0 = lab3.metryka_euklidesowa_2(record, weight_0, True)
            distance_1 = lab3.metryka_euklidesowa_2(record, weight_1, True)
            if distance_0 < distance_1:
                if record[-1] != 0:
                    record[-1] = 0
                    changes += 1
            else:
                if record[-1] != 1:
                    record[-1] = 1
                    changes += 1

        print("Iteracja:" + str(iteration))
        print("Zmiany:" + str(changes))
        iteration += 1


    return unorganised_list      

assigned_classes = assign_correct_classes(random_class)

class_0 = 0
class_1 = 0

for record in assigned_classes:
    if record[-1] == 0:
        class_0 += 1
    else:
        class_1 += 1

print("Klasy decyzyjne 0:" + str(class_0))
print("Klasy decyzyjne 1:" + str(class_1))
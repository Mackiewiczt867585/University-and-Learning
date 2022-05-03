import random

symbols = ["Rock","Paper","Scissors"]
loop = 1
while loop == 1:
    playersChoice = input("Make your choice!\n")
    pcChoice = random.choice(symbols)
    if playersChoice == pcChoice:
        
        print("PC chose:"+ pcChoice)
        print("It's a draw.\n ")
    else:
        print("PC chose:"+ pcChoice+".\n")
        if playersChoice == "Rock" and pcChoice == "Paper":
            print("You lost")
        elif playersChoice == "Rock" and pcChoice == "Scissors":
            print("You win")
        elif playersChoice == "Paper" and pcChoice == "Rock":
            print("You win")
        elif playersChoice == "Paper" and pcChoice == "Scissors":
            print("You lost")
        elif playersChoice == "Scissors" and pcChoice == "Rock":
            print("You lost")
        elif playersChoice == "Scissors" and pcChoice == "Paper":
            print("You win")
        loop = 0
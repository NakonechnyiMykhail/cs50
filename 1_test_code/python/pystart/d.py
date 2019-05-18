import random
import time

def displayIntro():
    print('''
        Intro
        ''')
    print()

def chooseCave():
    cave = ''

    while cave != '1' and cave != '2':
        print('Choose the cave (1 or 2)')
        cave = input()
    return cave

def checkCave(chosenCave):
    print('you are near the cave...')
    time.sleep(2)
    print('there is so dark here')
    time.sleep(2)
    print()

    friendlyCave = random.randint(1, 2)
    if chosenCave == str(friendlyCave):
        print('..you are a billiarder!')
    else:
        print('you are dead...')

playAgain = 'yes'
while playAgain == 'yes' or playAgain == 'y':
    displayIntro()
    caveNumber = chooseCave()
    checkCave(caveNumber)

    print('do you wnat to play again? (yes or no)')
    playAgain = input()










# a = False
# print(not a)

# and
# True and True   -> True
# False and True  -> False
# True and False  -> False
# False and False -> False

# or
# True or True    -> True
# False or True   -> True
# True or False   -> True
# False or False  -> False
import random
import time

def displayIntro():
	print('Hello dear Player! You have to choose a cave. In first cave, there is a lot of gold. In second one, there is an angry and hungry dragon.')
	print()

def chooseCave():
	cave = ''
	while cave != '1' and cave != '2':
		print('In which cave do you want to come in? (choose 1 or 2)')
		cave = input()

	return cave

def checkCave(chosenCave):
	print('you are near the cave')
	time.sleep(2)
	print('the darkness is so fear')
	time.sleep(2)
	print()
	time.sleep(2)

	friendlyCave = random.randint(1,2)

	if chosenCave == str(friendlyCave):
		print('you are too rich now')
	else:
		print('you are dead')

playAgain = 'yes'
while playAgain == 'yes' or playAgain == 'Y' or playAgain == 'y':
	displayIntro()
	caveNumber = chooseCave()
	checkCave(caveNumber)

	print('Do you want to try again? (Yes?)')
	playAgain = input()

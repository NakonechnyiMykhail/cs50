import random

guessesTaken = 0

print('What is your name?')
myName = input()

number = random.randint(1,20)

print('So, ' + myName + ', I choose the number between 1 and 20')

for guessesTaken in range(6):
	print('Try to guess number')
	guess = int(input())

	if guess < number:
		print('Your number is lower')

	if guess > number:
		print('Your number is higher')

	if guess == number:
		break

if guess == number:
	guessesTaken = str(guessesTaken + 1)
	print('Perfect! ' + myName + ' You\'ve done this for ' + guessesTaken + ' steps.')

if guess != number:
	number = str(number)
	print('I\'m so sorry, but I guessed ' + number + '.')
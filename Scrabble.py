#!/usr/bin/python

from itertools import permutations

letters = raw_input('Jakie literki tam sie zawieraja? ')
count_word = int(raw_input('Iloliterowe jest to slowo? '))
words = {''.join(x) for x in permutations(letters,count_word)}

with open('slowa.txt') as f:
	for linia in f:
		if linia.strip() in words:
			print linia.strip()


vowels = ['a', 'e', 'i', 'o', 'u']
word = input("Provide a word to search for vowels: ")

found = {}
for letter in word:
    if letter in vowels:
        found.setdefault(letter, 0)
        found[letter] += 1
print("Vowels[a,e,i,o,u] and its time of occurence in above word:")
for vowel in sorted(found):
    print(vowel, 'occurred', found[vowel], 'times.')
print()
print("Vowels in decreasing order of its times present in above word:")
for vowel in sorted(found, key=found.get, reverse=True):
    print(vowel, 'occurred', found[vowel], 'times.')

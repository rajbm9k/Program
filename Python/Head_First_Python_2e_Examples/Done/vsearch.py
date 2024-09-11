
def search4vowels(phrase: str) -> set:
    """Return any vowels found in a supplied phrase."""
    vowels = set('aeiou')
    return vowels.intersection(set(phrase))


def search4letters(phrase: str, letters: str='aeiou') -> set:
    """Return a set of the 'letters' found in 'phrase'."""
    return set(letters).intersection(set(phrase))

print("search4vowels function called to 'Return any vowels found in a supplied 'e brain head first'.':")
print(search4vowels("e brain head first"))
print("search4letters function called to 'Return a set of the 'letters' found in 'e brain head first'.':")
print(search4letters("e brain head first",'ydtfbz' ))

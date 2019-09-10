#In this kata you have to create all permutations of an input string and remove
# duplicates, if present. This means, you have to shuffle all letters from the
# input in all possible orders.

#Examples:

#permutations('a'); # ['a']
#permutations('ab'); # ['ab', 'ba']
#permutations('aabb'); # ['aabb', 'abab', 'abba', 'baab', 'baba', 'bbaa']
#The order of the permutations doesn't matter.

def permutations(string):
    p = set([string])
    
    if len(string) == 2:
        p.add(string[1] + string[0])

    elif len(string) > 2:
        for i, l in enumerate(string):
            for s in permutations(string[:i] + string[i + 1:]):
                p.add(l + s)

    return list(p)
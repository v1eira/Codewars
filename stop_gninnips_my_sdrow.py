#Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.


#Examples:

#spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw" 
#spinWords( "This is a test") => returns "This is a test" 
#spinWords( "This is another test" )=> returns "This is rehtona test"

def spin_words(sentence):
	# Your code goes here
	string = ""
	words = sentence.split()
	palavras = []
	for word in words:
		if len(word) >= 5:
			i = len(word)-1
			wordbuffer = ""
			while i >= 0:
				wordbuffer += word[i]
				i -= 1
			palavras.append(wordbuffer)
		else:
			palavras.append(word)
	string = " ".join(palavras)
	return string
#spin_words

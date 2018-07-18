#Write Number in Expanded Form
#You will be given a number and you will need to return it as a string in Expanded Form. For example:

#expanded_form(12) # Should return '10 + 2'
#expanded_form(42) # Should return '40 + 2'
#expanded_form(70304) # Should return '70000 + 300 + 4'
#NOTE: All numbers will be whole numbers greater than 0.

def expanded_form(num):
	if num <= 10:
		return str(num)
	else:
		vet = []
		string = ""
		aux = str(num)
		size = len(aux)-1
		for i in aux:
			if i != "0":
				vet.append(i+(size*"0"))
			size -= 1
		string = " + ".join(vet)
		return string

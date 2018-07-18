#Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 integers. No floats or empty arrays will be passed.

#For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

#[10, 343445353, 3453445, 3453545353453] should return 3453455.

#Hint: Do not modify the original array.

def sum_two_smallest_numbers(numbers):
    #your code here
    min1 = numbers[0]
    min2 = numbers[1]
    
    i=2
    while i < len(numbers):
        if numbers[i] < min1:
            min1 = numbers[i]
        if numbers[i] < min2 and numbers[i] != min1:
            min2 = numbers[i]
        i += 1
    
    return min1 + min2
#sum_two_smallest_numbers

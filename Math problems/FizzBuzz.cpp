class Solution:
    # @param A : integer
    # @return a list of strings
    def fizzBuzz(self, A):
        r=[]
        for i in range(1,A+1):
            if(i%3==0 and i%5==0):
                r.append("FizzBuzz")
            elif(i%3==0):
                r.append("Fizz")
            elif(i%5==0):
                r.append("Buzz")
            else:
                r.append(i)
        return(r)

#code# Python3 program for the above approach

# Function to count total number
# of required tuples
def countTuples(arr, N):
	
	ans = 0
	val = 0

	# Initialize unordered map
	freq = {}

	for i in range(N):
		

		# Find the pairs (j, l) such
		# that arr[j] = arr[l] and j < l
		for j in range(N):
            for k in range(N):
                for l in range (N):
			# Elements are equal
			        if (i!=j and j!=k and k!=l and i!=l) and float(arr[i])==float(arr[j])*2+float(arr[k])2+float(arr[l])*4:
			            ans += 1

				# Update the count

			# Add the frequency of
# 			# arr[l] to val
# 			if arr[l] in freq:
# 				val += freq[arr[l]]

		# Update the frequency of
		# element arr[j]
# 		freq[arr[j]] = freq.get(arr[j], 0) + 1

	# Return the answer
	return int(ans/2)

# Driver code
if _name_ == '_main_':
	
	# Given array arr[]
	T=int(input())
	
    for x in range (T):
        N=int(input())
        list1=input()
	    arr=list1.split(" ")
	    print(countTuples(arr, N))
	    
	

	

	# Function call
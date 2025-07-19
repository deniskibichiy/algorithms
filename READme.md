# Linear Search
* Also known as sequential search. Works by comparing the value to be searched with every element of the array one by one in a sequence until a match is found
## Algorithm for linear search (A, N, VAL)
1. Step 1: [initialize] set pos = -1;
2. Step 2: [Initialize] set I =1
3. Step 3:         Repeat step 4 while i < n
4. Step 4               IF A[I] = VAL
                        SET POS = I
                        PRINT POS
                    [END OF IF]
                    SET I = I +1
                [END OF LOOP]
5. Step 5: If POS = -1
            PRINT "value is not present in the array
            [END OF IF]
6. Exit

## Complexity of linear search algorith
* Executes in O(n), where n = number of elements in the array.
* Best case = O(1) - element is found at the first index meaning only one comparison will be made. 
* Worst case = O(n) - element is not found in the array or the element is found at the last index of the array.

# Binary Search
* Works efficiently with a sorted list. The algorith works through the principle of divide and conquer, where the sorted list is divided into two equal parts. The part containing the element of interest becomes the new list to be searched and the algorithm now divides it into two equal parts and proceeds in similar manner until the element is found. 

## Algorithm of binary search(A, lower_bound, upper_bound, Val)

1. Step 1: [Initialize] Set BEG = -1
            END = upper_bound, POS = -1
2. Step 2: Repeat step 3 and 4 while BEG <= END
3. Step 3:      Set MID = (BEG + END)/2
4. Step 4:      IF A[MID] = VAL
                    Set Pos = MID
                    Print Pos
                    Go to step 6
                ELSE IF A[MID] > VAL
                    SET END = MID - 1
                ELSE 
                    SET BEG = MID + 1
                [END OF IF]
            [END OF LOOP]
5. Step 5: IF POS = -1
                PRINT "value is not present in the array"
            [END OF IF]
6. Step 6: EXIT

## Complexity of the binary search algorithm
* The complexity is calculated depending on the number of comparisons made. 
* With each comparison, the number of elements is reduced to half. 
* Complexity is therefore: O(n) = log(base 2) n

# Sorting algorithms
## Selection sort algorithm
